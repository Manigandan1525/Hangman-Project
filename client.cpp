#include "client.h"

client request;
client::client()
{
}

void client::receive()
{
	while (1)
	{
		char* buffer;
		//recvfrom(server, buffer, sizeof(buffer), 0, (SOCKADDR*)&addr, 0);
		//parse.parser(buffer);
	}
}

void client::send_request(char* gamedetails)
{
	cout << gamedetails;
	//int a;
	//char gamedetails[2000] = "<hangman><gamedetails>send game details</gamedetails></hangman>";
	//send(server, username, sizeof(username), 0);
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