#include "GraphicalDesign.h"

using namespace std;

// an instance of our class - to access member functions
// to save where our cursor on the screen

GraphicalDesign::~GraphicalDesign()
{
}
// f_graph class constructor
GraphicalDesign::GraphicalDesign(void) : std::basic_ostream<char, std::char_traits<char> >(std::cout.rdbuf())
{
	consoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
}

void GraphicalDesign::box(int LeftMargin, int TopMargin, int RightMargin, int BottomMargin)
{
	//setColor(BACKGROUND_RED);
	unsigned int Index;
	char topLeft = 201;
	char horizontalLines = 205;
	char topRight = 187;
	char verticalLines = 186;
	char bottomLeft = 200;
	char bottomRight = 188;
	int xBegin = whereX();
	int yBegin = whereY();
	gotoxy(LeftMargin, TopMargin); cout << topLeft;     //left top corner
	for (Index = LeftMargin + 1; Index<RightMargin; Index++)
		cout << horizontalLines;     //top line
	gotoxy(RightMargin, TopMargin); cout << topRight;     //right top corner
	for (Index = TopMargin + 1; Index<BottomMargin; Index++)        //vertical lines
	{
		gotoxy(LeftMargin, Index); cout << verticalLines;
		gotoxy(RightMargin, Index); cout << verticalLines;

	}
	gotoxy(LeftMargin, BottomMargin); cout << bottomLeft;     //left bottom corner
	for (Index = LeftMargin + 1; Index<RightMargin; Index++) cout << horizontalLines;       //bottom line
	gotoxy(RightMargin, BottomMargin); cout << bottomRight;     //right bottom corner
	gotoxy(xBegin, yBegin);
}
int GraphicalDesign::whereX(void)
{
	if (consoleHandler == INVALID_HANDLE_VALUE)
		return 0;

	CONSOLE_SCREEN_BUFFER_INFO screenInfo;
	GetConsoleScreenBufferInfo(consoleHandler, &screenInfo);

	return screenInfo.dwCursorPosition.X + 1;
}

// to get current cursor position on y dimension
int GraphicalDesign::whereY(void)
{
	if (consoleHandler == INVALID_HANDLE_VALUE)
		return 0;

	CONSOLE_SCREEN_BUFFER_INFO screenInfo;
	GetConsoleScreenBufferInfo(consoleHandler, &screenInfo);

	return screenInfo.dwCursorPosition.Y + 1;
}
int GraphicalDesign::gotoxy(const int LeftMargin, const int TopMargin)
{
	if (consoleHandler == INVALID_HANDLE_VALUE)
		return 0;

	COORD coords = { static_cast<short>(LeftMargin - 1), static_cast<short>(TopMargin - 1) };
	SetConsoleCursorPosition(consoleHandler, coords);
}




