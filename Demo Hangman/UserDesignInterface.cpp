#include "UserDesignInterface.h"

UserDesignInterface::UserDesignInterface()
{

}


UserDesignInterface::~UserDesignInterface()
{

}
void UserDesignInterface::game_details(vector<GameData> Data, string GameDetail,UserInterface* Design)
{
	if (GameDetail == JOIN)
	{

		//Design->join_game(Data);
	}
	else if (GameDetail == CATEGORYLIST)
	{
		//Design->creategame(Data);
	}
	else if (GameDetail == GAMEINFO)
	{
		//Design->game_info(Data);
	}
}