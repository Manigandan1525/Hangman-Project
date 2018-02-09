#include "GameData.h"


GameData::GameData()
{
}

void GameData::set_gameplaying(int playing)
{
	this->GamePlaying = playing;
}

int GameData::get_gameplaying()
{
	return this->GamePlaying;
}
void GameData::set_totalgameid(string id)
{
	this->TotalGameId = id;
}

string GameData::get_totalgameid()
{
	return this->TotalGameId;
}

void GameData::get_playername(vector<string> name)
{
	this->PlayerName = name;
}

vector<string> GameData::get_playername()
{
	return this->PlayerName;
}

void GameData::set_category(string category)
{
	this->Category = category;
}

string GameData::get_category()
{
	return this->Category;
}

void GameData::set_categorylist(vector<string> categorylist)
{
	this->CategoryList=categorylist;
}

vector<string> GameData::get_categorylist()
{
	return this->CategoryList;
}

void GameData::set_difficulty(string difficulty)
{
	this->Difficulty = difficulty;
}

string GameData::get_difficulty()
{
	return this->Difficulty;
}

void GameData::set_level(vector<string> level)
{
	this->Level = level;
}

vector<string> GameData::get_level()
{
	return this->Level;
}

void GameData::set_gameinfo(vector<string> gameinfo)
{
	this->Gameinfo = gameinfo;
}

vector<string> GameData::get_gameinfo()
{
	return this->Gameinfo;
}



