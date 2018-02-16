#pragma once
#include"resource.h"
#include"UserInterface.h"

class UserDesignInterface
{
private:
	GameData Detail;
public:
	void game_details(vector<GameData>, string,UserInterface*);
	UserDesignInterface();
	~UserDesignInterface();
};
