#pragma once
#include "UserRequest.h"
string UserName;
static UserRequest *UserReq;
UserRequest::UserRequest()
{
}

UserRequest::~UserRequest()
{
	if (UserReq) {
		delete UserReq;
	}
	UserReq = NULL;
}

void UserRequest::Instantiate()
{
	if (UserReq == NULL) {
		UserReq = new UserRequest;
	}

}
bool UserRequest::Instance()
 {
	 if (UserReq == NULL) {
		return false;
	}
	return true;
}

string UserRequest::receive()
{
	string information;
	if (Instance()) {
		information = UserReq->Request.receive_details();
	}
	return information;
}


vector<GameData> UserRequest::request_parse(string data)
{
	vector<GameData> details;
	char new_data[1024];
	if (Instance()) {
		strcpy_s(new_data, data.c_str());
		details = UserReq->parse.parser(new_data);
	}
	return details;
}

string UserRequest::receive_data(string data)
{
	string value;
	char option[1024];
	if (Instance()) {
		strcpy_s(option, data.c_str());
		value = UserReq->parse.receive_data(option);
	}
	return value;
}


void UserRequest::server_connection()
{
	if (Instance()) {
		UserReq->Request.connection();
	}
}

void UserRequest::sendrequest_creategame(string Name)		//send create game request
{
	if (Instance()) {
		UserName = Name;
		string CreateGame = "<"HANGMAN"><"CREATE">User wants to create game</"CREATE"></"HANGMAN">";		
		UserReq->Request.send_request(CreateGame);
	}

}

void UserRequest::sendrequest_joingame(string Name)			//send join game request 
{
	if (Instance()) {
		UserName = Name;
		string JoinGame = "<"HANGMAN"><"JOIN">User wants to join game</"JOIN"></"HANGMAN">";
		UserReq->Request.send_request(JoinGame);
	}

}

void UserRequest::user_gameid(string GameId)					//send  gameid request 
{
	if (Instance()) {
		string JoinGame = "<"HANGMAN"><"JOINGAME"><"GAMEID">" + GameId + "</"GAMEID"></"JOINGAME"><"USERNAME">" + UserName + "</"USERNAME"></"HANGMAN">";
		UserReq->Request.send_request(JoinGame);
	}
}

void UserRequest::user_option(string Category, string Difficulty)	//send category and difficulty to server
{
	if (Instance()) {
		string CreateGame = "<"HANGMAN"><"CREATEGAME"><"CATEGORY">" + Category + "</"CATEGORY"><"LEVEL">" + Difficulty + "</"LEVEL"></"CREATEGAME"><"USERNAME">" + UserName + "</"USERNAME"></"HANGMAN">";
		UserReq->Request.send_request(CreateGame);
	}
}


void UserRequest::user_input(string Letter)				//send user letter to server
{
	if (Instance()) {
		string UserInput = "<"HANGMAN"><"LETTER">" + Letter + "</"LETTER"></"HANGMAN">";
		UserReq->Request.send_request(UserInput);
	}
}