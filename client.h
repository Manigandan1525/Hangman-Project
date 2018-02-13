#pragma once
#include"UserDesignInterface.h"
#include"XmlParser.h"
#include<iostream>
#include<string>
using namespace std;
class client
{
private:
	UserDesignInterface UserDesign;

	XmlParser Parse;
public:
	void receive_details();
	void send_request(string);
	void send_gameId(string,string);
	void send_category(string, string,string);
	void request_gameinfo();
	void player_request(string);
	void send_userinput(string);
	client();
	~client();
};

