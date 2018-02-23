#pragma once
#include"resource.h"			//include resource file
#include"client.h"
#include"GameData.h"
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
public:
	static void Instantiate();
	static bool Instance();
	static string receive();
	static vector<GameData> request_parse(string);
	static string receive_data(string);
	static void server_connection();
	static void sendrequest_creategame(string);
	static void sendrequest_joingame(string);
	static void user_gameid(string);
	static void user_option(string, string);
	static void user_input(string);

};

