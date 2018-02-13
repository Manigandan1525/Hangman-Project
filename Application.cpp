//#include "MyForm.h"
#include "Graphical_design.h"
#include "UserDesign.h"
#include "XmlParser.h"
#include "client.h"
#include <iostream> 


//using namespace UserInterface;
using namespace std;
//[STAThreadAttribute]
//void parser(char*,UserDesign);
int main()
{

	
	UserInterface* design = new UserDesign();
	//design->game();
	UserDesignInterface userdesign(design);
	//xml.parse_gamedetails();
	//design->getusername();

	design->game();
	//ch.receive();
	/*system("cls");
	char buffer[2000] = "<hangman><gamedetails value = \"1\"><game id=\"1245\"><playername>name1</playername><playername>name2</playername></game><game id=\"1237\"><playername>name3</palyername></game></gamedetails><categorylist><category>movies</category><category>plants</category><category>animals</category></categorylist><difficultylevel><level>easy</level><level>medium</level><level>hard</level></difficultylevel></hangman>";
	// char buffer[2000] = "<hangman><gameinfo><gameid>1234</gameid><word>* * * q * * *</word><remainingguess>5</remainingguess><wrongguess>a</wrongguess><result>playing</result></gameinfo></hangman>";
	// char buffer[2000] = "<hangman><request>Accept new player</request></hangman>";
	 //char buffer[2000] = "<hangman><chance>new chance</chance></hangman>"; 

	parser(buffer,design);
	char buffer1[2000] = "<hangman><gameinfo><gameid>1234</gameid><word>* * * q * * *</word><remainingguess>0</remainingguess><wrongguess>a</wrongguess><result>playing</result></gameinfo></hangman>";
	parser(buffer1, design);
	char buffer2[2000] = "<hangman><request>Accept new player</request></hangman>";
	parser(buffer2, design);
	char buffer3[2000] = "<hangman><chance>new chance</chance></hangman>"; 
	parser(buffer3, design);*/
	cin.get();
	cin.ignore(1000, '\n');
	
	return EXIT_SUCCESS;
}

/*void parser(char* buffer,UserDesign design)
{
	string name;
	//cout << buffer << endl;
	xml_document<> document;
	document.parse<0>(&buffer[0]);
	//cout << document;
	xml_node<> *node = document.first_node();
	xml_node<> *node1 = node->first_node();
	name = node1->name();
	
	if (name == "gamedetails")
	{
		design.creategame(&document);
		//document.clear();
	}
	else if (name == "gameinfo")
	{
		design.gameinfo(&document);
	}
	else if (name == "request")
	{
		design.Decision(&document);
	}
	else if (name == "chance")
	{
		design.chance();
	}
}
*/

/*MyForm fm;
	int a;
	cout << "Enter 1 to windows\n";
	cout << "Enter 2 to console\n";
	cin >> a;
	if (a == 1){
		HWND hWnd = GetConsoleWindow();
		if (hWnd != 0) {
			ShowWindow(hWnd, SW_HIDE);
		}
		fm.ShowDialog();
	}
	else
	{
		//system("cls");
		cout << "Console" << endl;
		}*/