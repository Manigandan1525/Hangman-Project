#pragma once
#include "UserDesign.h"
#include"client.h"
#include "resource.h"
#include<vector>
//#include "GameData.h"
class XmlParser
{

public:
	
	vector<string> parse_joingame(xml_document<>* document);
	vector<string> parse_gamecategory(xml_document<>* document);
	vector<string> parse_gamedifficulty(xml_document<>* document);
	void parser(char*);
	void send_requestcreategame();
	void send_requestjoingame();
	void usergameid(string);
	void useroption(string, string);
	void player_response(string);
	void parse_gameinfo();
	void user_input(string);
	XmlParser();
};

extern XmlParser parse;

