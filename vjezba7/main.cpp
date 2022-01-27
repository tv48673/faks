#include <iostream>
#include "Board.h"
using namespace std;
Board::Board()
{
	rows = 9;
	cols = 9;
	ch = '0';
	matrix = new char* [cols];
	for (int i = 0; i < cols; i++)
	{
		matrix[i] = new char[rows];
		if (i == 0)
			for (int j = 0; j < rows; j++)
                matrix[i][j] = ch;
		else if (i == cols - 1)
			for (int j = 0; j < rows; j++)
                matrix[i][j] = ch;
		else
		{
			matrix[i][0] = ch;
			matrix[i][rows - 1] = ch;
		}
	}
}

Board::Board(int rows1,int cols1, char ch1)
{
	rows = rows1 + 2;
	cols = cols1 + 2;
	ch = ch1;
	matrix = new char* [cols];
	for (int i = 0; i < cols; i++)
	{
		matrix[i] = new char[rows];
		if (i == 0)
			for (int j = 0; j < rows; j++)
                matrix[i][j] = ch;
		else if (i == cols - 1)
			for (int j = 0; j < rows; j++)
                matrix[i][j] = ch;
		else
		{
			matrix[i][0] = ch;
			matrix[i][rows - 1] = ch;
		}
	}
}

Board::Board(const Board& b)
{
	rows = b.rows;
	cols = b.cols;
	ch = b.ch;
	matrix = b.matrix;
}

Board::Board(Board&& b)
{
	rows = b.rows;
	cols = b.cols;
	ch = b.ch;
	matrix = b.matrix;
	b.rows = 0;
	cols = 0;
	ch = '0';
	b.matrix = nullptr;
}

Board::~Board()
{
	for(int i = 0; i < rows; i++)
        delete [] matrix[i];
    delete [] matrix;
}

void Board::draw_char(Point p, char c)
{
	if ((p.x > 0 && p.x < rows - 1) && (p.y < cols - 1 && p.y > 0))
	{
		matrix[int(p.y)][int(p.x)] = c;
	}
}

void Board::draw_up_line(Point p, char c)
{
    int i=1;
	if ((p.x > 0 && p.x < rows - 1) && (p.y < cols - 1 && p.y > 0))
	{
		while(i  < cols)
		{
			if (i < p.y)
			{
				matrix[i][int(p.x)] = c;
			}
			else
                break;
			i++;
		}
	}
}




void Board::display()
{
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}

}


int main()
{
	Point p(10, 10);
	Point pUp(10, 9);
	Point pA(1, 1);
	Board b = Board();
	b.draw_char(p, '+');
	b.draw_up_line(pUp, 'T');
	b.display();
	return 0;
}
