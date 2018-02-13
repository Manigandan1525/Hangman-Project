#pragma once
#include"GameData.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class UserInterface
{
public:
	//GameData detail;
	virtual void game()=0;
	virtual void getusername() = 0;
	virtual void join_game(vector<GameData>)=0;
	virtual void creategame(vector<GameData>) = 0;
	virtual void game_info(vector<GameData>) = 0;
};