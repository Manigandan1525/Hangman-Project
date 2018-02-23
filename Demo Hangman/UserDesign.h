#pragma once
#define NOMINMAX
#include "GraphicalDesign.h"
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
	GraphicalDesign Design;
	string Name;
	void game_option();
	void chance();
	int input_validation(int);
	void hangman_letter();
	void hangman_design(int);
	void hangman_stand();
	void hangman_head();
	void hangman_body();
	void hangman_hand(int);
	void hangman_leg(int);
public:
	string UserDetails;
	void get_username();
	void game();
	void game_result(string,string);
	void join_game(vector<GameData>);
	void creategame(vector<GameData>);
	void game_info(vector<GameData>);
	void endgame(string);
	UserDesign();
	~UserDesign();
};
