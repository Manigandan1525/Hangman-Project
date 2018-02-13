#pragma once
#define NOMINMAX
#include"UserInterface.h"
#include "Graphical_design.h"
#include"GameData.h"
#include"UserRequest.h"
#include<iostream>
#include<vector>
#include<string>
#include <limits>
using namespace std;

class UserDesign : public UserInterface
{
private:
	GameData detail;
	UserRequest userrequest;
	Graphical_design gf;

public:

	string name;
	string userdetails;
	void getusername();
	void game();
	void game_result(string);
	void hangman();
	void GameOption();
	
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
