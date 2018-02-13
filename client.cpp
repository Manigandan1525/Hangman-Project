#include "client.h"

client::client()
{

}

client::~client()
{

}

void client::receive_details()
{
	string gamedata;
	vector<GameData> GameDetails;
	while (1)
	{
	//vector<string> gamedetails;
	//char tab2[1200];
	//strcpy(tab2, buffer.c_str());
	char a[2000] = "<hangman><Join><gameid>1234</gameid><gameid>1235</gameid><gameid>1236</gameid></Join></hangman>";
		//send(server, username, sizeof(username), 0);
		//recvfrom(server, buffer, sizeof(buffer), 0, (SOCKADDR*)&addr, 0);
	char tab2[2000];
	strcpy_s(tab2, a);
	gamedata = Parse.receive_data(a);
	
	GameDetails = Parse.parser(tab2);
		UserDesign.game_details(GameDetails, gamedata);
		char b[2000] = "<hangman><GameInfo><gameid>1234</gameid><words>* * * q * * *</words><remainingguess>4</remainingguess><wrongguess>a</wrongguess><result>playing</result></GameInfo></hangman>";
		gamedata = Parse.receive_data(b);
		GameDetails = Parse.parser(b);
		UserDesign.game_details(GameDetails, gamedata);

		//char c[2000] = "<hangman><request>Accept new player</request></hangman>";
		//parse.parser(c);
		//char d[2000] = "<hangman><chance>new chance</chance></hangman>";
		//parse.parser(d);
		//string dd = d;
		//return gamedetails;
	}
}

void client::send_request(string gamedetails)
{
	cout << gamedetails;
	int a;
	cin >> a;
	//int a;
	//char gamedetails[2000] = "<hangman><gamedetails>send game details</gamedetails></hangman>";
	//send(server, gamedetails, sizeof(gamedetails), 0);
}

void client::send_gameId(string gameId, string name)
{
	string joingame = "<hangman><joingame><gameid>" + gameId + "</gameid></joingame><username>" + name + "</username></hangman>";
	//send(server, username, sizeof(username), 0);
}

void client::send_category(string category, string difficulty, string name)
{
	string game = "<hangam><creategame><category>" + category + "</category><level>" + difficulty + "</level></creategame><username>" + name + "</username></hangman>";
	//send(server, username, sizeof(username), 0);
	request_gameinfo();
}

void client::request_gameinfo()
{
	string request = "<hangman><requestgameinfo>send game details</requestgameinfo></hangman>";
	//send(server, username, sizeof(username), 0);
}
void client::player_request(string decision)
{
	string response = "<hangman><response>" + decision + "</response></hangman>";
	//send(server, username, sizeof(username), 0);
	request_gameinfo();
}

void client::send_userinput(string letter)
{
	string userinput = "<hangname><letter>" +letter + "</letter></hangman>";
	//send(server, username, sizeof(username), 0);
	request_gameinfo();
}