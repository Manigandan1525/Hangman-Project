#include "UserDesignInterface.h"

UserDesignInterface::UserDesignInterface()
{

}

UserDesignInterface::UserDesignInterface(UserInterface* design)
{
	this->design = design;
}

UserDesignInterface::~UserDesignInterface()
{

}
void UserDesignInterface::game_details(vector<GameData> data, string gamedetail)
{
	if (gamedetail == JOIN)
	{

 		design->join_game(value);
	}
	else if (gamedetail ==CREATE)
	{
		design->creategame(data);
	}
	else if (gamedetail == GAMEINFO)
	{
		design->game_info(data);
	}
}