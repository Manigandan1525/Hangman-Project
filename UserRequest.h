#pragma once

#include"client.h"
#include<string>
using namespace std;
class UserRequest
{
public:
	client request;
public:
	string username;
	void send_requestcreategame(string);
	void send_requestjoingame(string);
	void usergameid(string);
	void useroption(string, string);
	void player_response(string);
	void user_input(string);
	UserRequest();
	~UserRequest();
};

