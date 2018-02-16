#include "GameData.h"


GameData::GameData()
{
}

void GameData::set_usergameid(string Id)
{
	this->GameId = Id;
}

string GameData::get_usergameid()
{
	return this->GameId;
}
void GameData::set_words(string Word)
{
	this->GameWord = Word;
}

string GameData::get_words()
{
	return this->GameWord;
}

void GameData::set_remainingguess(string RemainingGuess)
{
	this->RemainingGuess = RemainingGuess;
}

string GameData::get_remainingguess()
{
	return this->RemainingGuess;
}

void GameData::set_wrongguess(string WrongGuess)
{
	this->WrongGuess = WrongGuess;
}

string GameData::get_wrongguess()
{
	return this->WrongGuess;
}

void GameData::set_result(string Result)
{
	this->Result = Result;
}

string GameData::get_result()
{
	return this->Result;
}

void GameData::set_chance(string Chance)
{
	this->Chance = Chance;
}

string GameData::get_chance()
{
	return this->Chance;
}

void GameData::set_gameoption(vector<string> Category)
{
	this->CategoryList = Category;
}

vector<string> GameData::get_gameoption()
{
	return this->CategoryList;
}


void GameData::set_gameid(vector<string> Id)
{
	this->TotalGameId = Id;
}

vector<string> GameData::get_gameid()
{
	return this->TotalGameId;
}