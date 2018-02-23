#pragma once
#include <windows.h>
#include <iostream>
class GraphicalDesign : public std::basic_ostream<char, std::char_traits<char> >
{
private:
	// copy constructor and operator= forbidden
	GraphicalDesign(const GraphicalDesign&) : std::basic_ostream<char, std::char_traits<char> >(std::cout.rdbuf()) {};
	GraphicalDesign & operator=(const GraphicalDesign&) { return *this; };
protected:
	// to handle console window
	HANDLE consoleHandler;
public:
	void box(int, int, int, int);
	int whereX(void);

	// to get current cursor position on y dimension
	int whereY(void);
	int gotoxy(const int, const int);

	GraphicalDesign();
	~GraphicalDesign();
};

