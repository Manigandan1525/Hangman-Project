#pragma once
#include"XmlParser.h"
#include<vector>
class GameData
{
private:
	int GamePlaying;
	string TotalGameId;
	vector<string> PlayerName;
	string Category;
	vector<string> CategoryList;
	string Difficulty;
	vector<string> Level;
	//vector<XmlParser> GameDetails;
	vector<string> Gameinfo;


public:
	void set_gameplaying(int);
	int get_gameplaying(); 
	void set_totalgameid(string);
	string get_totalgameid();
	void get_playername(vector<string>);
	vector<string> get_playername();
	void set_category(string);
	string get_category();
	void set_categorylist(vector<string>);
	vector<string> get_categorylist();
	void set_difficulty(string);
	string get_difficulty();
	void set_level(vector<string>);
	vector<string> get_level();
	void set_gameinfo(vector<string>);
	vector<string> get_gameinfo();
	
	GameData();
};

