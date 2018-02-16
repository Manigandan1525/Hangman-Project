#pragma once
#include "UserRequest.h"

string UserName;
static UserRequest *userReq;
UserRequest::UserRequest()
{

}

UserRequest::~UserRequest()
{
	if (userReq) {
		delete userReq;
	}
	userReq = NULL;
}

void UserRequest::Instantiate()
{
	if (userReq == NULL) {
		userReq = new UserRequest;
	}

}
bool UserRequest::Instance()
 {
	if (userReq == NULL) {
		return false;
	}
	return true;
}

string UserRequest::receive()
{
	string information;
	if (Instance()) {
		information=userReq->Request.receive_details();
	}
	return information;
}


vector<GameData> UserRequest::request_parse(string data)
{
	vector<GameData> details;
	char new_data[1024];
	if (Instance()) {
		strcpy(new_data, data.c_str());
		details=userReq->parse.parser(new_data);
	}
	return details;
}

string UserRequest::receive_data(string data)
{
	string value;
	char option[1024];
	if (Instance()) {
		strcpy(option, data.c_str());
		value=userReq->parse.receive_data(option);
	}
	return value;
}

void UserRequest::server_connection()
{
	if (Instance()) {
		userReq->Request.connection();
	}

}
void UserRequest::send_requestcreategame(string Name)
{
	if (Instance()) {
		UserName = Name;
		string CreateGame = "<"HANGMAN"><"CREATE">User wants to create game</"CREATE"></"HANGMAN">";
		userReq->Request.send_request(CreateGame);
	}

}

void UserRequest::send_requestjoingame(string Name)
{
	if (Instance()) {
		UserName = Name;
		string JoinGame = "<"HANGMAN"><"JOIN">User wants to join game</"JOIN"></"HANGMAN">";
		userReq->Request.send_request(JoinGame);
	}

}

void UserRequest::usergameid(string GameId)
{
	if (Instance()) {
		string JoinGame = "<"HANGMAN"><"JOINGAME"><"GAMEID">" + GameId + "</"GAMEID"></"JOINGAME"><"USERNAME">" + UserName + "</"USERNAME"></"HANGMAN">";
		userReq->Request.send_request(JoinGame);
	}
}

void UserRequest::useroption(string Category, string Difficulty)
{
	if (Instance()) {
		string CreateGame = "<"HANGMAN"><"CREATEGAME"><"CATEGORY">" + Category + "</"CATEGORY"><"LEVEL">" + Difficulty + "</"LEVEL"></"CREATEGAME"><"USERNAME">" + UserName + "</"USERNAME"></"HANGMAN">";
		userReq->Request.send_request(CreateGame);
	}
}

void UserRequest::player_response(string Decision)
{
	string Response = "<"HANGMAN"><"RESPONSE">" + Decision + "</"RESPONSE"></"HANGMAN">";

}

void UserRequest::user_input(string Letter)
{
	if (Instance()) {
		string UserInput = "<"HANGMAN"><"LETTER">" + Letter + "</"LETTER"></"HANGMAN">";
		userReq->Request.send_request(UserInput);
	}
}