#include<iostream>
#include"UserDesign.h"
#include"GameData.h"
#include"XmlParser.h"
using namespace std;
void check_userid();
void check_word();
void check_remainingguess();
void check_wrongguess();
void check_chance();
void check_result();
void check_xmlparser();
void check_receivedata();
int main()
{
	UserDesign design;

	check_userid();
	check_word();
	check_remainingguess();
	check_wrongguess();
	check_chance();
	check_result();
	check_xmlparser();
	check_receivedata();
	cin.get();
	cin.ignore(1000, '\n');
	return 0;
}

void check_userid()
{
	GameData data;
	string id="GAME007";
	string check;
	data.set_usergameid(id);
	check = data.get_usergameid();
	if (check == id)
	{
		cout << "Check user id SUCCESS" << endl;
	}
	else
	{
		cout << "Check user id FAILURE" << endl;
	}
}

void check_word()
{
	GameData data;
	string word = "TIGER";
	string check;
	data.set_words(word);
	check = data.get_words();
	if (check == word)
	{
		cout << "Check word SUCCESS" << endl;
	}
	else
	{
		cout << "Check word FAILURE" << endl;
	}
}

void check_remainingguess()
{
	GameData data;
	string remainingguess = "3";
	string check;
	data.set_remainingguess(remainingguess);
	check = data.get_remainingguess();
	if (check == remainingguess)
	{
		cout << "Check remainingguess SUCCESS" << endl;
	}
	else
	{
		cout << "Check remainingguess FAILURE" << endl;
	}
}

void check_wrongguess()
{
	GameData data;
	string wrongguess = "cde";
	string check;
	data.set_wrongguess(wrongguess);
	check = data.get_wrongguess();
	if (check == wrongguess)
	{
		cout << "Check wrongguess SUCCESS" << endl;
	}
	else
	{
		cout << "Check wrongguess FAILURE" << endl;
	}
}

void check_chance()
{
	GameData data;
	string chance = "0";
	string check;
	data.set_chance(chance);
	check = data.get_chance();
	if (check == chance)
	{
		cout << "Check chance SUCCESS" << endl;
	}
	else
	{
		cout << "Check chance FAILURE" << endl;
	}
}

void check_result()
{
	GameData data;
	string result = "WIN";
	string check;
	data.set_result(result);
	check = data.get_result();
	if (check == result)
	{
		cout << "Check result SUCCESS"<<endl;
	}
	else
	{
		cout << "Check result FAILURE" << endl;
	}
}

void check_xmlparser()
{
	GameData details;
	XmlParser parse;
	vector<GameData> data;
	char join[2000] = "<hangman><Join><gameid>1234</gameid><gameid>1235</gameid><gameid>1236</gameid></Join></hangman>";
	char create[2000] = "<Hangman><CategoryList><Category>plants</Category><Category>animals</Category><Category>science</Category></CategoryList><DifficultyLevel><Difficulty>easy</Difficulty><Difficulty>medium</Difficulty><Difficulty>hard</Difficulty></DifficultyLevel></Hangman>";
	char gameinfo[2000] = "<hangman><GameInfo><GameId>1234</GameId><Words>* * * q * * *</Words><RemainingGuess>4</RemainingGuess><WrongGuess>a</WrongGuess><Result>playing</Result><Chance>1</Chance></GameInfo></hangman>";
	data=parse.parser(join);

	if (!data.empty())
	{
		cout << "check parser SUCCESS" << endl;
	}
	else
	{
		cout << "check parser FAILURE" << endl;
	}

}


void check_receivedata()
{
	XmlParser parse;
	string check_join = JOIN;
	string check_create = CREATE;
	string check_gameinfo = GAMEINFO;
	string check;
	char join[2000] = "<hangman><Join><gameid>1234</gameid><gameid>1235</gameid><gameid>1236</gameid></Join></hangman>";
	char create[2000] = "<Hangman><CategoryList><Category>plants</Category><Category>animals</Category><Category>science</Category></CategoryList><DifficultyLevel><Difficulty>easy</Difficulty><Difficulty>medium</Difficulty><Difficulty>hard</Difficulty></DifficultyLevel></Hangman>";
	char gameinfo[2000] = "<Hangman><GameInfo><GameId>1234</GameId><Words>* * * q * * *</Words><RemainingGuess>4</RemainingGuess><WrongGuess>a</WrongGuess><Result>playing</Result><Chance>1</Chance></GameInfo></Hangman>";
	check = parse.receive_data(gameinfo);
	if (check == check_gameinfo)
	{
		cout << "check parser DATA SUCCESS" << endl;
	}
	else
	{
		cout << "check parser DATA FAILURE" << endl;
	}
}