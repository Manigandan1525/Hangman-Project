#include "XmlParser.h"

vector<GameData> XmlParser::parser(char* Buffer)			//parse xml data
{
	string Name;
	xml_document<> Document;
	Document.parse<0>(&Buffer[0]);
	xml_node<> *node = Document.first_node();
	xml_node<> *node1 = node->first_node();
	Name = node1->name();
	if (Name == JOIN)
	{
		return parse_joingame(&Document);
	}
	else if (Name == CATEGORYLIST)
	{
		return parse_creategame(&Document);
	}
	else if (Name == GAMEINFO)
	{
		return parse_gameinfo(&Document);
	}

}

vector<GameData> XmlParser::parse_joingame(xml_document<>* Document)		//parse the joingame details
{
	vector<GameData> Data;
	vector<string> GameId;
	xml_node<>* node = Document->first_node();
	xml_node<> *node1 = node->first_node(JOIN);
	xml_node<> *element = node1->first_node();
		while (element != NULL)
		{
			GameId.push_back(element->value());
			element = element->next_sibling();
		}

		Detail.set_gameid(GameId);
		Data.push_back(Detail);
		return Data;
}

vector<GameData> XmlParser::parse_creategame(xml_document<>* Document)			//parse the crate game details
{
	vector<GameData> Data;
	vector<string> Category;
	vector<string> Difficulty;
	xml_node<> *node = Document->first_node();
	xml_node<> *node1 = node->first_node(CATEGORYLIST);
	xml_node<>*element = node1->first_node();
	while (element != NULL)
	{
		Category.push_back(element->value());
		element = element->next_sibling();
	}
	Detail.set_gameoption(Category);
	Data.push_back(Detail);

	xml_node<> *node2 = node->first_node(DIFFICULTYLEVEL);
	xml_node<>*element1 = node2->first_node();
	while (element1 != NULL)
	{
		Difficulty.push_back(element1->value());
		element1 = element1->next_sibling();
	}
	Detail.set_gameoption(Difficulty);
	Data.push_back(Detail);
	return Data;
}

vector<GameData> XmlParser::parse_gameinfo(xml_document<>* Document)			//parse the gameinfo details
{
	vector<GameData> Data;
	xml_node<> *node = Document->first_node();
	xml_node<> *node1 = node->first_node(GAMEINFO);
	xml_node<> *element = node1->first_node(GAMEID);
	Detail.set_user_gameid(element->value());
	element = node1->first_node(WORDS);
	Detail.set_words(element->value());
	element = node1->first_node(REMAININGGUESS);
	Detail.set_remaining_guess(element->value());
	element = node1->first_node(WRONGGUESS);
	Detail.set_wrong_guess(element->value());
	element = node1->first_node(RESULT);
	Detail.set_result(element->value());
	element = node1->first_node(CHANCE);
	Detail.set_chance(element->value());
	element = node1->first_node(CATEGORY);
	Detail.set_category(element->value());
	Data.push_back(Detail);
	return Data;
}

string XmlParser::receive_data(char* Buffer)				//parse receive data
{
	string Name;
	xml_document<> Document;
	Document.parse<0>(&Buffer[0]);
	xml_node<> *node = Document.first_node(HANGMAN);
	xml_node<> *node1 = node->first_node();
	Name = node1->name();
	if (Name == JOIN)
	{
		return JOIN;
	}
	else if (Name == CATEGORYLIST)
	{
		return CATEGORYLIST;
	}
	else if (Name == GAMEINFO)
	{
		return GAMEINFO;
	}
	else if (Name == ENDGAME)
	{
		return ENDGAME;
	}

}