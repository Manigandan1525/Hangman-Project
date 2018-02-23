#pragma once
#define NOMINMAX			
#include "XmlParser.h"			
#include "client.h"
#include "FormDesign.h"
#include <iostream> 
#include<string>
using namespace Hangman;
using namespace std;
[STAThreadAttribute]
int main()
{
	system("cls");
	FormDesign Form;
	UserDesign Design;
	client Client;
	XmlParser Parse;
	vector<GameData> Details;
	string ReceiveData; 
	char GameData[1024];
	char Buffer[1024];
	string CheckData;
	int Choice;
	cout << "Enter 1 to windows\n";
	cout << "Enter 2 to console\n";
	cout << "Enter 3 to EXIT"<<endl;
	cin >> Choice;
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Enter correct option: " << '\t';
			cin >> Choice;
		}
		else if (Choice<1 || Choice>3)
		{
			cout << "Enter correct option: " << '\t';
			cin >> Choice;
		}
		else
		{
			break;
		}
	}
	system("cls");
	if (Choice == 1)				//choose windows application
	{
		HWND hWnd = GetConsoleWindow();
		if (hWnd != 0) {
			ShowWindow(hWnd, SW_HIDE);
		}
		
		Application::Run(gcnew FormDesign);
		exit(0);
	}
	else if (Choice == 2)                                   //choose console applicati0n 
	{
		system("cls");
		Design.get_username();
		Design.game();
		while (1)
		{
			ReceiveData = Client.receive_details();
			if (!ReceiveData.empty())
			{
				strcpy_s(GameData, ReceiveData.c_str());
				strcpy_s(Buffer, ReceiveData.c_str());
				CheckData = Parse.receive_data(GameData);
				if (CheckData != ENDGAME)
				{
					Details = Parse.parser(Buffer);
				}
				if (CheckData == JOIN)
				{
					Design.join_game(Details);
				}
				else if (CheckData == CATEGORYLIST)
				{
					Design.creategame(Details);
				}
				else if (CheckData == GAMEINFO)
				{
					Design.game_info(Details);
				}
				else if (CheckData == ENDGAME)
				{
					Design.endgame(CheckData);
				}

			}
			else
			{
				Sleep(3000);
				exit(0);
			}
		}
	}
	else if (Choice == 3)
	{
		exit(0);
	}
	cin.get();
	cin.ignore(1000, '\n');
	return EXIT_SUCCESS;
}
