#pragma once
#include"XmlParser.h"
#include<iostream>
#include<string>
using namespace std;
class client
{
public:
	void receive();
	void send_request(char*);
	void send_gameId(string,string);
	void send_category(string, string,string);
	void request_gameinfo();
	void player_request(string);
	void send_userinput(string);
	client();
};
extern client request;
