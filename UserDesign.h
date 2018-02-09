#pragma once
#define NOMINMAX
#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include "Graphical_design.h"
#include"XmlParser.h"
#include<iostream>
#include<string>
#include <limits>
using namespace std;
using namespace rapidxml;
class UserDesign
{

public:
	string name;
	UserDesign();
	~UserDesign();
	void getusername();
	void game();
	void set_username(string);
	string get_username();
	//vector<string> gameid;
	
	void playgame();
	void game_result(string);
	void hangman();
	void GameOption();
	string join_game(vector<string>);
	void creategame();
	void Decision();
	void gameinfo();
	void chance();
	void display_category(vector<string>);
	void display_difficulty(vector<string>);
	void design(int);
};
extern UserDesign design;