#include "GameData.h"



void GameData::set_user_gameid(string Id)
{
	this->GameId = Id;						//set user choose game id
}

string GameData::get_user_gameid()
{
	return this->GameId;					//get user choose game id
}
void GameData::set_words(string Word)
{
	this->GameWord = Word;					//set game word
}

string GameData::get_words()
{
	return this->GameWord;					//get game word
}

void GameData::set_remaining_guess(string RemainingGuess)
{
	this->RemainingGuess = RemainingGuess;			//set remaining guess letter
}

string GameData::get_remaining_guess()
{
	return this->RemainingGuess;					//get remaining guess letter
}

void GameData::set_wrong_guess(string WrongGuess)
{
	this->WrongGuess = WrongGuess;					//set user wrong guess
}

string GameData::get_wrong_guess()
{
	return this->WrongGuess;						//get user wrong guess
}

void GameData::set_result(string Result)
{
	this->Result = Result;							//set user result
}

string GameData::get_result()
{
	return this->Result;							//get user result
}

void GameData::set_chance(string Chance)
{
	this->Chance = Chance;							//set which user turn
}

string GameData::get_chance()
{
	return this->Chance;							//get user turn
}

void GameData::set_gameoption(vector<string> Category)
{
	this->CategoryList = Category;					//set usercategory
}

vector<string> GameData::get_gameoption()
{
	return this->CategoryList;						//get category
}


void GameData::set_gameid(vector<string> Id)
{
	this->TotalGameId = Id;						//set id
}

vector<string> GameData::get_gameid()
{
	return this->TotalGameId;				//get id
}

void GameData::set_category(string Category)
{
	this->Category = Category;
}

string GameData::get_category()			//get user category
{
	return this->Category;
}