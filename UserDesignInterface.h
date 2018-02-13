#pragma once
#include"resource.h"
#include"UserInterface.h"

class UserDesignInterface
{
private:
	GameData detail;
	UserInterface* design;
public:
	vector<GameData> value;
	void game_details(vector<GameData>, string);
	UserDesignInterface();
	~UserDesignInterface();
	UserDesignInterface(UserInterface*);
};
