using UnityEngine;
using System.Collections;

/// <summary>
/** $token = 'Your Token Here …';
	$allParams['token'] = $token;
	$tmpArr = $allParams;
	sort($tmpArr, SORT_STRING);
	$tmpStr = implode( $tmpArr );
	$tmpStr = sha1( $tmpStr );
**/
/// </summary>
public abstract class Request {
	public const string COMMAND = null;

	protected string _api;
	protected WWWForm _form = null;
	protected Response _response = null;

	public string Api{
		get{ 
			return this._api; 
		}
		set{ _api = value;}
	}
	public WWWForm Form{
		get{ return this._form; }
		set{ _form = value;}
	}


	public Request()
	{
		
	}

	public abstract class Response{

	}

	abstract public Response parseResponse(string json);
}
