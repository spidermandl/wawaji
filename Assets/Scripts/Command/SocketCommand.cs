using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SocketCommand : PureMVC.Patterns.SimpleCommand {

	public override void Execute(PureMVC.Interfaces.INotification notification) {
		object data = notification.Body;
        if (data == null) return;
        KeyValuePair<int, ByteBuffer> buffer = (KeyValuePair<int, ByteBuffer>)data;
        switch (buffer.Key) {
		default:
			break;//Util.CallMethod("Network", "OnSocket", buffer.Key, buffer.Value); break;
        }
	}
}
