#ifndef TICTACTOE_H
#define TICTACTOE_H

struct Coordinate{
	int coordX;
	int coordY;
};

class TicTacToe
{
	private:

	
	public:
		TicTacToe();
		char board[3][3]={
		{'-','-','-'},
		{'-','-','-'},
		{'-','-','-'}
		};		
		void showBoard();		
		bool verifyCell(Coordinate c);
		void asignPlay( Coordinate co, char ca);
		
	protected:

};

#endif