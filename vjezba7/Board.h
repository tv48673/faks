#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "Point.h"
class Board
{
	char** matrix;
	int cols;
	int rows;
	char ch;
public:
	Board();
	Board(int rows1, int cols1, char ch1);
	Board(const Board& b);
	Board(Board&& b);
	~Board();

	void draw_char(Point p, char c);
	void draw_up_line(Point p, char c);
	void display();
};

#endif // BOARD_H
