#include "UserDesign.h"

UserDesign design;
UserDesign::UserDesign()
{
}
UserDesign::~UserDesign()
{
}

void UserDesign::getusername()
{
	hangman();
	cout << "			HANGMAN GAME" << "\n" << endl;
	cout << "\n Press 1 to exit game\n" << endl;
	cout << "\n Enter your name : ";
	cin >> name;
	if (name == "1")
	{
		exit(0);
	}
	system("cls");
}
void UserDesign::game()
{
	hangman();
	int option;
	int newgame;
	cout << "			HANGMAN GAME" << "\n" << endl;
	cout << " 1. Play"<<endl;
	cout << " 2. Instruction"<<endl;
	cout << " 3. Exit"<<endl;
	cin >> option;
	system("cls");
	hangman();
	switch (option)
	{
	case 1:
		
		//cout << "request send"<<endl;
		system("cls");
		GameOption();
		break;
	case 2:
		int value;
		cout << "			HANGMAN GAME" << "\n" << endl;
		cout << "  INSTRUCTION " << "\n" << endl;
		cout << " 1. Play individually or in groups." << endl;
		cout << " 2. select your category and difficulty" << endl;
		cout << " 3. you entered the correct letter the word" << endl; 
		cout << "    to change dash to letter, if you" << endl; 
		cout << "    entered wrong ahangman portion added." << endl;
		cout << " 4. You have only six wrong guess, if you " << endl;
		cout<<  "    not complete the word, you will lose "<<"\n\n\n" << endl;
		cout << " 1.Back" << endl;
		cin >> value;
		while (1)
		{
			if (cin.fail() || value!=1)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Enter correct option: " << '\t';
				cin >> value;
			}
			else
			{
				break;
			}
		}
		//if
		system("cls");
		game();
		break;
	case 3:
		exit(0);
	}

}

void UserDesign::GameOption()
{
	int i = 0;
	int UserOption;
	string value;
	string id[20];
	hangman();
	//cout << name;
	cout << "			HANGMAN GAME" << "\n\n" << endl;
	cout << " select your option : " << "\n" << endl;
	cout << " 1. Create " << "\n\n" << endl;
	cout << " 2. JOIN" << "\n\n" << endl;
	cout << " 3. Back" << endl;
	cin >> UserOption;
	if (UserOption == 1)
	{

		parse.send_requestcreategame();
	}
	else if (UserOption == 2)
	{
		parse.send_requestjoingame();
	}
	else if (UserOption == 3)
	{
		game();
	}

	
}

string UserDesign::join_game(vector<string> gameid)
{
	hangman();
	int useroption,index;
	string id;
	cout << "			HANGMAN GAME" << "\n\n" << endl;
	cout << "     JOIN " << "\n" << endl;
	cout << " GAME ID" << "\n\n" << endl;
	for (index = 0; index < gameid.size(); index++)
	{
		cout << "\t " <<index+1<<". "<< gameid[0] << endl;
	}
	cin >> useroption;
	id = gameid[index - 1];
	return id;
	
}

void UserDesign::display_category(vector<string> category)
	{

		hangman();
		cout << "			HANGMAN GAME" << "\n\n" << endl;
		cout << "     SELECT YOUR CATEGORY " << "\n" << endl;
		cout << "gameid";
	

	}

void UserDesign::display_difficulty(vector<string> difficulty)
{

}
void UserDesign::Decision()
{
	int decision;
	cout << "New player give request to join the game" << endl;
	cout << " 1. Accept" << endl;
	cout << " 2. Decline" << endl;
	cin >> decision;
	if (decision == 1)
	{
		parse.player_response("Accept");
	//	gameinfo(document);
	
	}
	else if (decision == 2)
	{
		parse.player_response("Decline");
	//	gameinfo(document);
	}
}

void UserDesign::gameinfo()
{
	int i = 0;	
	int remaining_chance;
	string value;
	string chance;

	cout << "			HANGMAN GAME" << "\n" << endl;
	while (element != NULL)
	{
		if (i == 0)
		{
			cout << "Game ID : ";
		}
		else if (i == 1)
		{
			cout << "\n";
			cout << "Word" << "\t\t\t";
		}
		else if (i == 2)
		{
			cout << "Remaining Guess" << "\t\t";

		}
		else if (i == 3)
		{
			cout << "Wrong Guess" << "\t\t";
		}
	
		
		if (i == 4)
		{

			if (value == "playing")
			{
				
			}
			else if (value == "win")
			{
				system("cls");
				game_result("YOU WIN");
			}
			else if (value == "lose")
			{
				system("cls");
				design(0);
				game_result("YOU LOSE");
			}
		}

		i++;
	}
}

void UserDesign::chance()
{
	//char letter;
	string letter;
	cout << "Enter your guessing letter" << endl;

	while(1)
	{
		cin >> letter;
		if (letter.length() == 1)
		{
			parse.user_input(letter);
			break;
		}
		else
		{
			cout << "Enter single letter" << endl;
		}
	}


}

void UserDesign::game_result(string result)
{
	int option;
	cout << "			HANGMAN GAME" << "\n" << endl;
	cout << "\n" << endl;
	cout << "	\t\t" <<result<< "\n" << endl;
	cout << "\n" << endl;
	cout << " 1. New game" << endl;
	cout << " 2.Exit" << endl;
	cin >> option;
	if (option == 1)
	{
		system("cls");
		game();
	}
	else if (option == 2)
	{
		exit(0);
	}
}

void UserDesign::hangman()
{
	gf.box(55, 2, 79, 3);
	gf.box(75, 3, 76, 25);
	gf.box(60, 3, 61, 5);
	gf.box(44, 4, 45, 10);//h1
	gf.box(46, 8, 47, 8);//h2
	gf.box(48, 6, 49, 10);//h3

	gf.box(51, 6, 52, 10);//a1
	gf.box(52, 6, 56, 7);//a2
	gf.box(55, 6, 56, 10);//a3


	gf.box(59, 6, 63, 6);//n2
	gf.box(58, 6, 59, 10);//n1
	gf.box(62, 6, 63, 10);//n3
	//gf.box(54, 13, 58, 13);//n4
	//gf.box(57, 9, 58, 13);//n5

	gf.box(66, 6, 70, 6);//g2
	gf.box(65, 6, 66, 10);//g1
	gf.box(66, 10, 70, 10);//g3
	gf.box(65, 12, 71, 13);//g5
	gf.box(70, 6, 71, 13);//g4

	gf.box(47, 14, 54, 14);//m2
	gf.box(46, 14, 47, 18);//m1
	gf.box(50, 14, 51, 18);//m3
	gf.box(54, 14, 55, 18);//m4

	gf.box(57, 14, 58, 18);//a1
	gf.box(58, 14, 62, 15);//a2
	gf.box(61, 14, 62, 18);//a3

	gf.box(65, 14, 68, 14);//n2
	gf.box(64, 14, 65, 18);//n1
	gf.box(68, 14, 69, 18);//n3

}

void UserDesign::design(int chanceleft)
{
	gf.box(55, 2, 79, 3);
	gf.box(75, 3, 76, 25);
	gf.box(60, 3, 61, 5);
	if (chanceleft == 5)
	{
		gf.box(57, 5, 64, 9);//1
		gf.box(59, 6, 59, 6);//1
   		gf.box(62, 6, 62, 6);//1
	}
	else if (chanceleft == 4)
	{
		gf.box(57, 5, 64, 9);//1
		gf.box(59, 6, 59, 6);//1
		gf.box(62, 6, 62, 6);//1
		gf.box(60, 9, 61, 17);//2
	}
	else if (chanceleft == 3)
	{
		gf.box(57, 5, 64, 9);//1
		gf.box(59, 6, 59, 6);//1
		gf.box(62, 6, 62, 6);//1
		gf.box(60, 9, 61, 17);//2
		gf.box(51, 11, 59, 12);//3
	}
	else if (chanceleft == 2)
	{
		gf.box(57, 5, 64, 9);//1
		gf.box(59, 6, 59, 6);//1
		gf.box(62, 6, 62, 6);//1
		gf.box(60, 9, 61, 17);//2
		gf.box(51, 11, 59, 12);//3
		gf.box(62, 11, 70, 12);//4
	}
	else if (chanceleft == 1)
	{
		gf.box(57, 5, 64, 9);//1
		gf.box(59, 6, 59, 6);//1
		gf.box(62, 6, 62, 6);//1
		gf.box(60, 9, 61, 17);//2
		gf.box(51, 11, 59, 12);//3
		gf.box(62, 11, 70, 12);//4
		gf.box(53, 16, 59, 17);//5
		gf.box(53, 16, 54, 22);//5
	}
	else if (chanceleft == 0)
	{
		gf.box(57, 5, 64, 9);//1
		gf.box(59, 6, 59, 6);//1
		gf.box(62, 6, 62, 6);//1
		gf.box(60, 9, 61, 17);//2
		gf.box(51, 11, 59, 12);//3
		gf.box(62, 11, 70, 12);//4
		gf.box(53, 16, 59, 17);//5
		gf.box(53, 16, 54, 22);//5
		gf.box(62, 16, 68, 17);//6
		gf.box(67, 16, 68, 22);//6
	}
}
