#include "UserRequest.h"


UserRequest::UserRequest()
{
}

UserRequest::~UserRequest()
{
}

void UserRequest::send_requestcreategame(string name)
{

	username = name;
	string creategame = "<"HANGMAN"><"CREATE">User wants to create game</"CREATE"></"HANGMAN">";
	
	cout << creategame << endl;
	//request.send_request(creategame);
	//request.receive();

}

void UserRequest::send_requestjoingame(string name)
{
	username = name;
	string joingame = "<HANGMAN><JOIN>User wants to join game</JOIN></HANGMAN>";
	cout << joingame << endl;
	request.receive_details();
	//cout << gamedetails <<  endl;
	//request.send_request(joingame);
	//request.receive();
}

void UserRequest::usergameid(string gameid)
{
	string joingame = "<HANGMAN><joingame><gameid>" + gameid + "</gameid><joingame><username>" + username + "</username></HANGMAN>";
	cout << joingame << endl;
	//request.send_request(joingame);
}

void UserRequest::useroption(string category, string difficulty)
{
	string creategame = "<HANGMAN><creategame><category>animals</category<difficulty></difficulty></creategame><username>manoj</username></HANGMAN>";
	cout << creategame << endl;
	//request.send_request(creategame);
}

void UserRequest::player_response(string decision)
{
	string response = "<HANGMAN><response>" + decision + "</response></HANGMAN>";
}

void UserRequest::user_input(string letter)
{
	string userinput = "<"HANGMAN"<"LETTER">" + letter + "</"LETTER"></"HANGMAN">";
	cout << userinput << endl;
}