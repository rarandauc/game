#include <iostream>
#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
			
}

void TicTacToe::showBoard()
	{
		for(int i=0; i<3;i++){
			std::cout<<" "<<std::endl;
			for(int j=0; j<3; j++){			 
			 std::cout<<" "<<this->board[i][j]<<" ";			 	
			}
			std::cout<< " "<<std::endl;		
	}
}

bool TicTacToe::verifyCell(Coordinate c){	
	for(int i=0; i<3;i++){			
			for(int j=0; j<3; j++){			
					return this->board[c.coordX][c.coordY]!='-'? true : false;						 	
			}				
	}
}


void TicTacToe::asignPlay( Coordinate co, char ca){
	if(TicTacToe::verifyCell(co)!=1){
		board[co.coordX][co.coordY]=ca;
	}
}