//consola de juegos
#include <iostream>
#include <stdlib.h>
#include <conio.h>
//------------------------------------------------------------------------------
//----------------------- LIBRERIA PROPIA --------------------------------------
//------------------------------------------------------------------------------
#include "funciones.h"
//-------------------------------------------
using namespace std;
//-------------------------------------------
void menu();
//------------------------------------------------------------------------------
//----------------------------- MAIN -------------------------------------------
//------------------------------------------------------------------------------
int main(){
	inicio();
	menu();

	return 0;
}

//------------------------------------------------------------------------------
//-------------------------------- MENU ----------------------------------------
//------------------------------------------------------------------------------

void menu(){
	system("cls");
	int opcion;
	for(int i=3;i<76;i++){ // horizaontales arriba
		gotoxy(i,1);printf("%c",205);
		gotoxy(i,3);printf("%c",205);
	}
	gotoxy(2,1);printf("%c",201);gotoxy(76,1);printf("%c",187); // esquinas superiores
	gotoxy(2,3);printf("%c",204);gotoxy(76,3);printf("%c",185); // esquinas medias
	gotoxy(2,2);printf("%c",186);gotoxy(76,2);printf("%c",186); // verticales del titulo
	for(int j=4;j<23;j++){ // verticales
		gotoxy(2,j);cout<<char(186);
		gotoxy(76,j);cout<<char(186);
	}
	gotoxy(2,23);cout<<char(200);gotoxy(76,23);cout<<char(188); // esquinas inferiores
	for(int i=3;i<76;i++){
		gotoxy(i,23);cout<<char(205);
	}
	//----------------------------------
	gotoxy(30,2);cout<<"CONSOLA DE JUEGOS";
	system("color 8F");
	gotoxy(10,5);cout<<"1_ La Vivorita";
	gotoxy(10,7);cout<<"2_ Carrera de autos";
	gotoxy(10,9);cout<<"3_ Ping Pong";
	gotoxy(10,11);cout<<"4_ Batalla Naval";
	gotoxy(10,13);cout<<"5_ Ahorcadito";
	gotoxy(10,15);cout<<"6_ Laberinto";
	gotoxy(10,20);cout<<"0_ Salir";
	//---------------------------------- mini cuadro
	for(int i=26;i<52;i++){ // horizontales mini cuadro
		gotoxy(i,19);cout<<char(205);
		gotoxy(i,21);cout<<char(205);
	}
	gotoxy(25,19);cout<<char(201);gotoxy(52,19);cout<<char(187); // esquinas superiores
	gotoxy(25,20);cout<<char(186);gotoxy(52,20);cout<<char(186); // verticales minicuadro
	gotoxy(25,21);cout<<char(200);gotoxy(52,21);cout<<char(188); // esquinas inferiores
	//---------------------------------- micro cuadro
	gotoxy(37,17);cout<<char(186);gotoxy(39,17);cout<<char(186); // verticales micro cuadro
	gotoxy(38,16);cout<<char(205);gotoxy(38,18);cout<<char(205); // horizontales microcuadro
	gotoxy(37,16);cout<<char(201);gotoxy(39,16);cout<<char(187); // esquinas superiores
	gotoxy(37,18);cout<<char(200);gotoxy(39,18);cout<<char(188); // esquinas inferiores
	gotoxy(38,17);cin>>opcion;
	//----------------------------------
	switch(opcion){
		case 1 : cargando();gotoxy(26,20);cout<<" juego aun no disponible  ";
			gotoxy(38,17);sleep(2);menu();
		break;
		case 2 : cargando();gotoxy(26,20);cout<<" juego aun no disponible  ";
			gotoxy(38,17);sleep(2);menu();
		break;
		case 3 : cargando();gotoxy(26,20);cout<<" juego aun no disponible  ";
			gotoxy(38,17);sleep(2);menu();
		break;
		case 4 : cargando();gotoxy(26,20);cout<<" juego aun no disponible  ";
			gotoxy(38,17);sleep(2);menu();
		break;
		case 5 : cargando();gotoxy(26,20);cout<<" juego aun no disponible  ";
			gotoxy(38,17);sleep(2);menu();
		break;
		case 6 : cargando();gotoxy(26,20);cout<<" juego aun no disponible  ";
			gotoxy(38,17);sleep(2);menu();
		break;
		case 0 : fin();
		break;
		default : menu();
		break;
	}
}


