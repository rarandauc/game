#include <iostream>
#include <cstdlib>
#include <string>
#include "TicTacToe.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	TicTacToe t;
	int coordX=0;
	int coordY=0;
	
	t.showBoard();
		bool coordNoValid;
	
	do {
	coordNoValid=false;
	cout<<"para iniciar el juego es necesario ingresar la ubicación en forma de coordinada (x,Y) "<<endl;
	cout<<"ingrese la coordenada x: ";
	cin>>coordX;
	cout<<"ingrese la coordenada y: ";
	cin>>coordY;
	if(coordX<0 || coordX>2){
			cout<<"la coordenada X esta fuera del tablero "<<endl;
			coordNoValid=true;
	}
	if(coordY<0 || coordY>2){
			cout<<"la coordenada Y esta fuera del tablero "<<endl;
			coordNoValid=true;
	}
	
	}while(coordNoValid!=false);

	
	Coordinate co;
	co.coordX=coordX;
	co.coordY=coordY;
	cout<<t.verifyCell(co);
	t.	asignPlay(co, 'X');
	t.showBoard();
	std::system("cls");
	t.	asignPlay(co, 'O');
	t.showBoard();
	return 0;
}