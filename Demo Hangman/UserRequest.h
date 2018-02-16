#pragma once
#include"resource.h"
#include"client.h"
#include"XmlParser.h"
#pragma once
#include<string>
using namespace std;
class UserRequest
{
private:
	UserRequest();
	~UserRequest();
	client Request;
	XmlParser parse;
	//static UserRequest *userReq;
public:

	static void Instantiate();
	static bool Instance();
	static string receive();
	static vector<GameData> request_parse(string);
	static string receive_data(string);
	static void server_connection();
	static void send_requestcreategame(string);
	static void send_requestjoingame(string);
	static void usergameid(string);
	static void useroption(string, string);
	static void player_response(string);
	static void user_input(string);

};

