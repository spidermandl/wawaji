using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class NetworkManager : MonoBehaviour {
    private SocketClient socket;
	private HttpClient http;
    static Queue<KeyValuePair<int, ByteBuffer>> sEvents = new Queue<KeyValuePair<int, ByteBuffer>>();
	static Queue<Request> hEvents = new Queue<Request>();

    SocketClient SocketClient {
        get {
            if (socket == null)
                socket = new SocketClient();
            return socket;                    
        }
    }

	HttpClient httpClient{
		get { 
			if (http == null)
				http = new HttpClient();
			return http;
		}
	}

    void Awake() {
        Init();
		DontDestroyOnLoad(this);
    }

    void Init() {
        SocketClient.OnRegister();
    }

    ///------------------------------------------------------------------------------------
    public static void AddEvent(int _event, ByteBuffer data) {
        sEvents.Enqueue(new KeyValuePair<int, ByteBuffer>(_event, data));
    }

	public static void AddEvent(Request data) {
		hEvents.Enqueue (data);
	}

    /// <summary>
    /// 交给Command，这里不想关心发给谁。
    /// </summary>
    void Update() {
        if (sEvents.Count > 0) {
            while (sEvents.Count > 0) {
                KeyValuePair<int, ByteBuffer> _event = sEvents.Dequeue();
				//UnityFacade.GetInstance().SendMessageCommand(NotiConst.DISPATCH_MESSAGE, _event);
            }
        }

		if (hEvents.Count > 0) {
			while (hEvents.Count > 0) {
				Request _event = hEvents.Dequeue();
				UnityFacade.GetInstance().SendNotification(HttpResCommand.HTTP, _event);
			}
		}
    }

    /// <summary>
    /// 发送链接请求
    /// </summary>
    public void SendConnect() {
        SocketClient.SendConnect();
    }

    /// <summary>
    /// 发送SOCKET消息
    /// </summary>
    public void SendMessage(ByteBuffer buffer) {
        SocketClient.SendMessage(buffer);
    }

	/**
	 * Desmond
	 * send post message
	 * */
	public void SendPost(String api,String jsonString){
		StartCoroutine (httpClient.post (api,jsonString));
	}

	/**
	 * Desmond
	 * send post message
	 * */
	public void SendPost(Request req){
		StartCoroutine (httpClient.post (req));
	}

	/**
	 * Desmond
	 * send get message
	 * */
	public void SendGet(String api,String param){
		StartCoroutine (httpClient.get (api,param));
	}

    /// <summary>
    /// 析构函数
    /// </summary>
    new void OnDestroy() {
        SocketClient.OnRemove();
        Debug.Log("~NetworkManager was destroy");
    }
}