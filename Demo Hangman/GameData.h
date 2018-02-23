#pragma once
#include<iostream>
#include<vector>		//using vector to store data
using namespace std;
class GameData
{
private:
	vector<string> TotalGameId;					//declaring the variable
	string GameId;
	string GameWord;
	string RemainingGuess;
	string WrongGuess;
	string Result;
	string Chance;
	vector<string> CategoryList;
	vector<string> Level;
	string Category;
public:
	void set_user_gameid(string);
	string get_user_gameid();
	void set_words(string);
	string get_words();
	void set_remaining_guess(string);
	string get_remaining_guess();
	void set_wrong_guess(string);
	string get_wrong_guess();
	void set_result(string);
	string get_result();
	void set_chance(string);
	string get_chance();
	void set_gameoption(vector<string>);
	vector<string> get_gameoption();
	void set_gameid(vector<string> id);
	vector<string> get_gameid();
	void set_category(string);
	string get_category();
	//GameData();
};

