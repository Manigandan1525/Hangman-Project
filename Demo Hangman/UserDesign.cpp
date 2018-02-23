#include "UserDesign.h"
//string Name;
UserDesign::UserDesign()
{
	UserRequest::Instantiate();
}
UserDesign::~UserDesign()
{
}

void UserDesign::get_username()
{
	hangman_letter();
	cout << "			HANGMAN GAME" << "\n" << endl;
	cout << "\n Press 1 to exit game\n" << endl;
	cout << "\n Enter your name : ";
	cin.get();
	getline(cin, Name);						// get user name to user
	while (1)
	{
		if (Name.length() >= 50)
		{
			cout << "Only 50 character allowed, please try again " <<endl;
			cout << "Enter your name:" ;
			cin.get();
			getline(cin, Name);
		}
		else{
			break;
		}
	}
	if (Name == "1")
	{
		exit(0);
	}
	system("cls");
	UserRequest::server_connection();
}

void UserDesign::game()
{
	
	system("cls");
	hangman_letter();
	int UserOption;
	cout << "			HANGMAN GAME" << "\n" << endl;
	cout << " 1. Play"<<endl;
	cout << " 2. Instruction"<<endl;
	cout << " 3. Exit"<<endl;
	cin >> UserOption;										//get option from user
	while (1)
	{
		UserOption = input_validation(UserOption);
		if (UserOption < 1 || UserOption>3)
		{
			cout << "Enter correct option: " << '\t';
			cin >> UserOption;
		}
		else
		{
			break;
		}
	}
	system("cls");
	hangman_letter();
	switch (UserOption)
	{
	case 1:
		game_option();
		break;
	case 2:
		int Value;
		cout << "			HANGMAN GAME" << "\n" << endl;							//display istruction
		cout << "  INSTRUCTION " << "\n" << endl;
		cout << " a. The player can either create new game " << endl;
		cout << "    or join with existing game." << endl;
		cout << " b. Total chances given to the players" << endl;
		cout << "    are 6." << endl;
		cout << " c. The player can enter only one letter" << endl;
		cout << "    at a time." << endl; 
		cout << " d. for every wrong guesses the hangman " << endl;
		cout << "    image will be loaded " << endl;
		cout << " e. If chances are over the player will" << endl;
		cout << "    lose the game" << endl;
		cout << " f. For correct guesses the chances will"<<endl;
		cout << "    not be reduced." << "\n\n\n" << endl;
		cout << " 1.Back" << endl;
		cin >> Value;
		while (1)
		{
			Value = input_validation(Value);
			if (Value !=1)
			{
				cout << "Enter correct option: " << '\t';
				cin >> Value;
			}
			else
			{
				break;
			}
		}
		system("cls");
		game();
		break;
	case 3:
		exit(0);
	}

}


void UserDesign::game_option()							
{
	int UserOption;
	hangman_letter();
	cout << "			HANGMAN GAME" << "\n\n" << endl;			//create or join game
	cout << " select your option : " << "\n" << endl;
	cout << " 1. Create " << "\n\n" << endl;
	cout << " 2. JOIN" << "\n\n" << endl;
	cout << " 3. Back" << endl;
	cin >> UserOption;
	while (1)
	{
		UserOption = input_validation(UserOption);
		if (UserOption < 1 || UserOption>3)
		{
			cout << "Enter correct option: " << '\t';
			cin >> UserOption;
		}
		else
		{
			break;
		}
	}
	system("cls");
	if (UserOption == 1)
	{
		UserRequest::sendrequest_creategame(Name);			//send create request 
	}
	else if (UserOption == 2)
	{
		UserRequest::sendrequest_joingame(Name);			//send join request
	}
	else if (UserOption == 3)
	{
		game();
	}
}

void UserDesign::endgame(string EndGame)
{
	system("cls");
	cout << " The Game is Already END..." << endl;
	Sleep(2000);
	system("cls");
	game_option();

}
void UserDesign::join_game(vector<GameData> GameId)			//display join game details
{
	vector<string> GameDetails;
	hangman_letter();
	int UserOption,size;
	size_t Index;
	string id;
	GameDetails = GameId[0].get_gameid();
	if (stoi(GameDetails[0]) == 0)
	{
		cout << " No Game ID to Join" << endl;
		Sleep(2000);
		system("cls");
		game_option();
	}
	else
	{
		cout << "			HANGMAN GAME" << "\n\n" << endl;
		cout << "     JOIN " << "\n" << endl;
		cout << " GAME ID" << "\n\n" << endl;
		size = GameDetails.size();
		for (Index = 0; Index <size ; Index++)
		{
			cout << "\t " << Index + 1 << ". " << GameDetails[Index] << endl;
		}
		cout << "\n\n\n" << "Press \"0\" to Back"<<endl;
		cin >> UserOption;
		while (1)
		{
			UserOption = input_validation(UserOption);
			if (UserOption<0 || UserOption>Index)
			{
				cout << "Enter correct option: " << '\t';
				cin >> UserOption;
			}
			else
			{
				break;
			}
		}
		system("cls");
		if (UserOption == 0)
		{
			game_option();
		}
		else
		{
			id = GameDetails[UserOption - 1];
			UserRequest::user_gameid(id);
		}
	}
}

void UserDesign::creategame(vector<GameData> Detail)			
	{
		int UserOption;
		size_t Index;
		vector<string> UserCategory,Difficulty;
		string Category,Level;
		hangman_letter();
		cout << "			HANGMAN GAME" << "\n\n" << endl;			//display category
		cout << "     SELECT YOUR CATEGORY " << "\n" << endl;
			UserCategory = Detail[0].get_gameoption();
			for (Index = 0; Index < UserCategory.size(); Index++)
			{
				cout << "\t " << Index + 1 << ". " << UserCategory[Index] << endl;
			}
		cout << "\n\n\n" << "Press \"0\" to Back"<<endl;
		cin >> UserOption;
		while (1)
		{
			UserOption = input_validation(UserOption);
			if (UserOption<0 || UserOption>Index)
			{
				cout << "Enter correct option: " << '\t';
				cin >> UserOption;
			}
			else
			{
				break;
			}
		}
		system("cls");
		if (UserOption == 0)
		{
			game_option();
		}
		else
		{
			Category = UserCategory[UserOption - 1];

			hangman_letter();
			cout << "			HANGMAN GAME" << "\n\n" << endl;				//display difficulty
			cout << "     SELECT YOUR DIFFICULTY " << "\n" << endl;
			Difficulty = Detail[1].get_gameoption();
			for (Index = 0; Index < Difficulty.size(); Index++)
			{
				cout << "\t " << Index + 1 << ". " << Difficulty[Index] << endl;
			}
			cout << "\n\n\n" << "Press \"0\" to Back" << endl;;
			cin >> UserOption;
			while (1)
			{
				UserOption = input_validation(UserOption);
				if (UserOption<0 || UserOption>Index)
				{
					cout << "Enter correct option: " << '\t';
					cin >> UserOption;
				}
				else
				{
					break;
				}
			}
			system("cls");
			if (UserOption == 0)
			{
				creategame(Detail);
			}
			else
			{
				Level = Difficulty[UserOption - 1];
				UserRequest::user_option(Category, Level);
			}
		}
}

void UserDesign::game_info(vector<GameData> GameInfo)				//display game details
{
	int Turn;
	string word;
	size_t Index;
	string info = GameInfo[0].get_remaining_guess();
	Turn = atoi(info.c_str());
	system("cls");
	hangman_design(Turn);
	int check = stoi(GameInfo[0].get_remaining_guess());
	if (check != 0)
	{
		word = GameInfo[0].get_words();
	}
	cout << "			HANGMAN GAME" << "\n" << endl;
	cout << "Game ID : " << GameInfo[0].get_user_gameid() << endl;
	cout << "\n";
	cout << "Category : " << GameInfo[0].get_category() << endl;
	cout << "\n\n";
	cout << "Word" << "\t";
	for (Index = 0; Index < word.size(); Index++)
	{
		cout << word[Index];
	}
	cout << endl;
	cout << "\n";
	cout << "Remaining Guess" << "\t\t" << GameInfo[0].get_remaining_guess() << endl;
	cout << "\n";
	cout << "Wrong Guess" << "\t\t" << GameInfo[0].get_wrong_guess() << endl;
	if (GameInfo[0].get_result() == WIN)
	{
		Sleep(3000);
		system("cls");
		game_result(GameInfo[0].get_words(), "YOU WIN");				//call result page
		return;
	}
	else if (GameInfo[0].get_result() == LOSE)
	{
		Sleep(3000);
		system("cls");
		game_result(GameInfo[0].get_words(), "YOU LOSE");				//call result page
		return;
	}

	if (GameInfo[0].get_chance() == "1")
	{
		chance();
	}
}

void UserDesign::chance()
{
	string Letter;
	cout << "Enter your guessing letter" << endl;

	while(1)
	{
		cin >> Letter;
		if (Letter.length() == 1)
		{
			UserRequest::user_input(Letter);			//send user entered letter
			break;
		}
		else
		{
			cout << "Enter single letter" << endl;
		}
	}
}

void UserDesign::game_result(string Name,string Result)			//display game result 
{
	int UserOption;
	cout << "			HANGMAN GAME" << "\n" << endl;
	cout << "\n" << endl;
	cout << "	\t\t   " <<Result<< "\n" << endl;
	cout << " Correct Word :" << Name << "\n\n"<<endl;
	cout << " 1. New game" << endl;
	cout << " 2. Exit" << endl;
	cin >> UserOption;
	while (1)
	{
		UserOption = input_validation(UserOption);
		if (UserOption<1 || UserOption>2)
		{
			cout << "Enter correct option: " << '\t';
			cin >> UserOption;
		}
		else
		{
			break;
		}
	}
	if (UserOption == 1)
	{
		system("cls");
		game();
	}
	else if (UserOption == 2)
	{
		exit(0);
	}

}

int UserDesign::input_validation(int UserOption)
{
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Enter correct option: " << '\t';
			cin >> UserOption;
		}
		else
		{
			return UserOption;
		}
	}
}
void UserDesign::hangman_letter()			//display hangman letter
{
	hangman_stand();
	Design.box(LEFTMARGIN-13, TOPMARGIN-1, RIGHTMARGIN-19, BOTTOMMARGIN+1);				//letter H to draw in console window
	Design.box(LEFTMARGIN-11, TOPMARGIN+3, RIGHTMARGIN-17, BOTTOMMARGIN-1);
	Design.box(LEFTMARGIN-9 , TOPMARGIN+1, RIGHTMARGIN-15, BOTTOMMARGIN+1);


	Design.box(LEFTMARGIN-6, TOPMARGIN+1, RIGHTMARGIN-12, BOTTOMMARGIN+1);				//letter A to draw in console window	
	Design.box(LEFTMARGIN-5, TOPMARGIN+1, RIGHTMARGIN-8 , BOTTOMMARGIN-2);
	Design.box(LEFTMARGIN-2, TOPMARGIN+1, RIGHTMARGIN-8 , BOTTOMMARGIN+1);


	Design.box(LEFTMARGIN+2, TOPMARGIN+1, RIGHTMARGIN-1, BOTTOMMARGIN-3);				//letter N to draw in console window
	Design.box(LEFTMARGIN+1, TOPMARGIN+1, RIGHTMARGIN-5, BOTTOMMARGIN+1);
	Design.box(LEFTMARGIN+5, TOPMARGIN+1, RIGHTMARGIN-1, BOTTOMMARGIN+1);


	Design.box(LEFTMARGIN+9 , TOPMARGIN+1, RIGHTMARGIN+6, BOTTOMMARGIN-3);				 //letter G to draw in console window
	Design.box(LEFTMARGIN+8 , TOPMARGIN+1, RIGHTMARGIN+2, BOTTOMMARGIN+1);
	Design.box(LEFTMARGIN+9 , TOPMARGIN+5, RIGHTMARGIN+6, BOTTOMMARGIN+1);
	Design.box(LEFTMARGIN+8 , TOPMARGIN+7, RIGHTMARGIN+7, BOTTOMMARGIN+4);
	Design.box(LEFTMARGIN+13, TOPMARGIN+1, RIGHTMARGIN+7, BOTTOMMARGIN+4);


	Design.box(LEFTMARGIN-10, TOPMARGIN+9, RIGHTMARGIN-10, BOTTOMMARGIN+5);				 //letter M to draw in console window	
	Design.box(LEFTMARGIN-11, TOPMARGIN+9, RIGHTMARGIN-17, BOTTOMMARGIN+9);
	Design.box(LEFTMARGIN-7 , TOPMARGIN+9, RIGHTMARGIN-13, BOTTOMMARGIN+9);
	Design.box(LEFTMARGIN-3 , TOPMARGIN+9, RIGHTMARGIN-9 , BOTTOMMARGIN+9);


	Design.box(LEFTMARGIN  , TOPMARGIN+9, RIGHTMARGIN-6, BOTTOMMARGIN+9);				  //letter A to draw in console window	
	Design.box(LEFTMARGIN+1, TOPMARGIN+9, RIGHTMARGIN-2, BOTTOMMARGIN+6);
	Design.box(LEFTMARGIN+4, TOPMARGIN+9, RIGHTMARGIN-2, BOTTOMMARGIN+9);


	Design.box(LEFTMARGIN+8 , TOPMARGIN+9, RIGHTMARGIN+4, BOTTOMMARGIN+5);			       //letter N to draw in console window		
	Design.box(LEFTMARGIN+7 , TOPMARGIN+9, RIGHTMARGIN+1, BOTTOMMARGIN+9);
	Design.box(LEFTMARGIN+11, TOPMARGIN+9, RIGHTMARGIN+5, BOTTOMMARGIN+9);


}

void UserDesign::hangman_design(int ChanceLeft)				//display hangman
{
	hangman_stand();
	if (ChanceLeft == 5)
	{
		hangman_head();
	}
	else if (ChanceLeft == 4)
	{
		hangman_head();
		hangman_body();
	}
	else if (ChanceLeft == 3)
	{
		hangman_head();
		hangman_body();
		hangman_hand(ChanceLeft);
	}
	else if (ChanceLeft == 2)
	{
		hangman_head();
		hangman_body();
		hangman_hand(ChanceLeft);
	}
	else if (ChanceLeft == 1)
	{
		hangman_head();
		hangman_body();
		hangman_hand(ChanceLeft);
		hangman_leg(ChanceLeft);
	}
	else if (ChanceLeft == 0)
	{
		hangman_head();
		hangman_body();
		hangman_hand(ChanceLeft);
		hangman_leg(ChanceLeft);
	}
}
void UserDesign::hangman_stand()
{
	Design.box(LEFTMARGIN - 2, TOPMARGIN - 3, RIGHTMARGIN + 15, BOTTOMMARGIN - 6);		
	Design.box(LEFTMARGIN + 18, TOPMARGIN - 2, RIGHTMARGIN + 12, BOTTOMMARGIN + 16);
	Design.box(LEFTMARGIN + 3, TOPMARGIN - 2, RIGHTMARGIN - 3, BOTTOMMARGIN - 4);
}

void UserDesign::hangman_head()
{
	Design.box(LEFTMARGIN  , TOPMARGIN  , RIGHTMARGIN  , BOTTOMMARGIN  );
	Design.box(LEFTMARGIN+2, TOPMARGIN+1, RIGHTMARGIN-5, BOTTOMMARGIN-3);
	Design.box(LEFTMARGIN+5, TOPMARGIN+1, RIGHTMARGIN-2, BOTTOMMARGIN-3);
}

void UserDesign::hangman_body()
{
	Design.box(LEFTMARGIN+3, TOPMARGIN+4, RIGHTMARGIN-3, BOTTOMMARGIN+8);
}

void UserDesign::hangman_hand(int ChanceLeft)
{
	if (ChanceLeft == 3)
	{
		Design.box(LEFTMARGIN-6, TOPMARGIN+6, RIGHTMARGIN-5, BOTTOMMARGIN+3);
	}
	else if (ChanceLeft == 2 || ChanceLeft == 1 || ChanceLeft == 0)
	{
		Design.box(LEFTMARGIN-6, TOPMARGIN + 6, RIGHTMARGIN - 5, BOTTOMMARGIN + 3);
		Design.box(LEFTMARGIN+5, TOPMARGIN + 6, RIGHTMARGIN + 6, BOTTOMMARGIN + 3);
	}
}

void UserDesign::hangman_leg(int ChanceLeft)
{
	if (ChanceLeft == 1)
	{
		Design.box(LEFTMARGIN-4, TOPMARGIN+11, RIGHTMARGIN-5 , BOTTOMMARGIN+8 );
		Design.box(LEFTMARGIN-4, TOPMARGIN+11, RIGHTMARGIN-10, BOTTOMMARGIN+13);
	}
	else if(ChanceLeft == 0)
	{
		Design.box(LEFTMARGIN- 4, TOPMARGIN + 11, RIGHTMARGIN - 5, BOTTOMMARGIN + 8);
		Design.box(LEFTMARGIN- 4, TOPMARGIN + 11, RIGHTMARGIN -10, BOTTOMMARGIN +13);
		Design.box(LEFTMARGIN+ 5, TOPMARGIN + 11, RIGHTMARGIN + 4, BOTTOMMARGIN + 8);
		Design.box(LEFTMARGIN+10, TOPMARGIN + 11, RIGHTMARGIN + 4, BOTTOMMARGIN +13);
	}
}