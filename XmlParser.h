#pragma once
#include "resource.h"
#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include"rapidxml_iterators.hpp"
#include"rapidxml_utils.hpp"
#include "GameData.h"
using namespace rapidxml;
class XmlParser
{
private:
	GameData detail;
	vector<GameData> data;
	vector<string> gamedetails;

public:
	vector<GameData> parse_joingame(xml_document<>* document);
	vector<GameData> parse_creategame(xml_document<>* document);

	vector<GameData> parser(char*);
	string receive_data(char*);

	void player_response(string);
	vector<GameData> parse_gameinfo(xml_document<>* document);
	void user_input(string);
	XmlParser();
};

