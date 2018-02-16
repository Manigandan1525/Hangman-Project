#include "UserRequest.h"


UserRequest::UserRequest()
{
}

UserRequest::~UserRequest()
{
}

void UserRequest::send_requestcreategame(string Name)
{

	UserName = Name;
	string CreateGame = "<"HANGMAN"><"CREATE">User wants to create game</"CREATE"></"HANGMAN">";
	
	cout << CreateGame << endl;
	Request.send_request(CreateGame);

}

void UserRequest::send_requestjoingame(string Name)
{
	UserName = Name;
	string JoinGame = "<"HANGMAN"><"JOIN">User wants to join game</"JOIN"></"HANGMAN">";
	cout << JoinGame << endl;
	Request.send_request(JoinGame);

}

void UserRequest::usergameid(string GameId)
{
	string JoinGame = "<"HANGMAN"><"JOINGAME"><"GAMEID">" + GameId + "</"GAMEID"></"JOINGAME"><"USERNAME">" + UserName + "</"USERNAME"></"HANGMAN">";
	cout << JoinGame << endl;
	Request.send_request(JoinGame);
}

void UserRequest::useroption(string Category, string Difficulty)
{
	string CreateGame = "<"HANGMAN"><"CREATEGAME"><"CATEGORY">" + Category + "</"CATEGORY"><"DIFFICULTY">" + Difficulty + "</"DIFFICULTY"></"CREATEGAME"><"USERNAME">" + UserName + "</"USERNAME"></"HANGMAN">";
	cout << CreateGame << endl;
	Request.send_request(CreateGame);
}

void UserRequest::player_response(string Decision)
{
	string Response = "<"HANGMAN"><"RESPONSE">" + Decision + "</"RESPONSE"></"HANGMAN">";

}

void UserRequest::user_input(string Letter)
{
	string UserInput = "<"HANGMAN"<"LETTER">" + Letter + "</"LETTER"></"HANGMAN">";
	cout << UserInput << endl;
	Request.send_request(UserInput);
}