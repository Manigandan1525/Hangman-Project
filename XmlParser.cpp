#include "XmlParser.h"

XmlParser parse;
XmlParser::XmlParser()
{
}

void XmlParser::parser(char* buffer)
{
	string name, category, difficulty;
	string id;
	vector<string> gameid;
	vector<string> category;
	vector<string> difficulty;
	//cout << buffer << endl;
	xml_document<> document;
	document.parse<0>(&buffer[0]);
	//cout << document;
	xml_node<> *node = document.first_node();
	xml_node<> *node1 = node->first_node();
	name = node1->name();

	if (name == JOIN)
	{
		gameid = parse_joingame(&document);
		id=design.join_game(gameid);
		usergameid(id);
		//send to join
		//design.creategame(&document);
		//document.clear();
	}
	else if (name == CREATE)
	{
		category=parse_gamecategory(&document);
		design.display_category(category);
		//send to category;
		difficulty=parse_gamedifficulty(&document);
		design.display_difficulty(difficulty);
		//send to diff
	}
	else if (name == GAMEINFO)
	{
		parse_gameinfo();
		design.gameinfo();
	}
	else if (name == REQUEST)
	{
		design.Decision();
	}
	else if (name == CHANCE)
	{
		design.chance();
	}
}

void XmlParser::send_requestcreategame()
{
	char gamedetails[2000] = "<hangman><create>User wants to create game</create></hangman>";
	request.send_request(gamedetails);
}

void XmlParser::send_requestjoingame()
{
	char gamedetails[2000] = "<hangman><join>User wants to join game</join></hangman>";
	request.send_request(gamedetails);
}

vector<string> XmlParser::parse_joingame(xml_document<>* document)
{
	int i=0;
	vector<string> gameid;
	xml_document<> doc;
	char a[2000] = "<hangman><join><gameid>1234</gameid><gameid>1235</gameid><gameid>1236</gameid></join></hangman>";
	doc.parse<0>(&a[0]);
	xml_node<>* node = doc.first_node();
	xml_node<> *node1 = node->first_node("join");
	xml_node<> *element = node1->first_node();
		while (element != NULL)
		{

			gameid.push_back(element->value());
			element = element->next_sibling();
		}
		i++;
		return gameid;
}

vector<string> XmlParser::parse_gamecategory(xml_document<>* document)
{
	int i = 0,j=0;
	xml_document<> doc;
	vector<string> category;
	char a[2000] = "<hangman><categorylist><category>movies< / category><category>plants< / category><category>animals< / category>< / categorylist></hangman>"; 
	xml_node<> *node = doc.first_node();
	xml_node<> *node1 = node->first_node("categorylist");
	cout << "category list" << "\n\n" << endl;
	//xml_node<> *child = node1->first_node();
	xml_node<>*element = node1->first_node();
	while (element != NULL)
	{
		
		category.push_back(element->value());
		element = element->next_sibling();
		i++;
	}
	return category;
}

vector<string> XmlParser::parse_gamedifficulty(xml_document<>* document)
{
	int j = 0;
	xml_document<> doc;
	vector<string> difficulty;
	char a[2000] = "<hangman><difficultylevel><level>easy</level><level>medium</level><level>hard</level></difficultylevel></hangman>";
	xml_node<> *node = doc.first_node();
	xml_node<> *node1 = node->first_node("difficultylevel");
	cout << "difficulty level" << "\n\n" << endl;

	xml_node<>*element = node1->first_node();

	while (element != NULL)
	{
	    difficulty.push_back(element->value());
		element = element->next_sibling();
		j++;
	}
	return difficulty;
}
void XmlParser::usergameid(string gameid)
{
	char a[2000] = "<hangman><joingame><gameid>easy</gameid><joingame><username>manoj</username></hangman>";
}

void XmlParser::useroption(string category, string difficulty)
{
	char a[2000] = "<hangman><creategame><category>animals</category<difficulty></difficulty></creategame><username>manoj</username></hangman>";
}

void XmlParser::player_response(string decision)
{
	string response = "<hangman><response>" + decision + "</response></hangman>";
}

void XmlParser::parse_gameinfo()
{
	int i;
	xml_node<> *node = document->first_node();
	xml_node<> *node1 = node->first_node("gameinfo");
	xml_node<> *element = node1->first_node();
	system("cls");
	while (element != NULL)
	{
		if (i == 2)
		{
			chance = element->value();
			////remaining_chance = atoi(chance.c_str());
			//design(remaining_chance);
		}
		element = element->next_sibling();
		i++;
	}
	i = 0;
	element = node1->first_node();
	cout << "			HANGMAN GAME" << "\n" << endl;
	while (element != NULL)
	{
		if (i == 0)
		{
			cout << "Game ID : ";
		}
		else if (i == 1)
		{
			cout << "\n";
			cout << "Word" << "\t\t\t";
		}
		else if (i == 2)
		{
			cout << "Remaining Guess" << "\t\t";
			//chance = element->value();
			//remaining_chance = atoi(chance.c_str());
		}
		else if (i == 3)
		{
			cout << "Wrong Guess" << "\t\t";
		}
		cout << element->value() << "\n" << endl;

		if (i == 4)
		{
			value = element->value();

		}
		//Category[i] = element->value();
		element = element->next_sibling();
		i++;
	}
}

void XmlParser::user_input(string letter)
{
	string userinput = "<hangname><letter>" + letter + "</letter></hangman>";
}