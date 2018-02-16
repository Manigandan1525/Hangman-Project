#pragma once
#define NOMINMAX

#include "Graphical_design.h"
#include"GameData.h"
#include"UserRequest.h"
#include<iostream>
#include<vector>
#include<string>
#include <limits>
using namespace std;

class UserDesign 
{
private:
	GameData detail;
	UserRequest userrequest;
	Graphical_design gf;
public:

	string Name;
	string UserDetails;
	void get_username();
	void game();
	void game_result(string);
	void hangman();
	void game_option();
	
	void Decision();

	void chance();
	void design(int);
	UserDesign();
	~UserDesign();
protected:
	void join_game(vector<GameData>);
	void creategame(vector<GameData>);
	void game_info(vector<GameData>);

};
