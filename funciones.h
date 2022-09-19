// funciones del menu
#include <iostream>
#include <stdlib.h>
#include <conio.h>

#include "mywindows.h"

using namespace std;
//-----------------------------------------------------------------------------
//---------------------------- ESTRUCTURAS ------------------------------------
//-----------------------------------------------------------------------------
struct jugador{
	char nombre[30];
	char apellido[20];
	//int puntuacion; gfh
}gamer,player[9];
//------------------------------------------------------------------------------
//------------------------ INICIO Y FIN ----------------------------------------
//------------------------------------------------------------------------------

void inicio(){ // mensaje de titulo del programa
	system("color 0A");
	for(int j=1;j<7;j++){ // techo
		for(int i=3;i<76;i++){
		gotoxy(i,j);printf("%c",176);
		}
	}
	for(int j=7;j<17;j++){ // pilar izquierdo
		for(int i=3;i<13;i++){
			gotoxy(i,j);printf("%c",176);
		}
	}
	for(int j=7;j<17;j++){ // pilar derecho
		for(int i=66;i<76;i++){
			gotoxy(i,j);printf("%c",176);
		}
	}
	for(int j=17;j<23;j++){ // piso
		for(int i=3;i<76;i++){
			gotoxy(i,j);printf("%c",176);
		}
	}
	gotoxy(30,11);cout<<"CONSOLA DE JUEGOS";
	gotoxy(20,13);system("pause");
}
//------------------------------------------------------------------------------

void fin(){ // mensaje "hasta luego" al cerrar el programa
	system("cls");
	system("color 0A");
	for(int j=1;j<7;j++){ // techo
		for(int i=3;i<76;i++){
		gotoxy(i,j);printf("%c",176);
		}
	}
	for(int j=7;j<17;j++){ // pilar izquierdo
		for(int i=3;i<13;i++){
			gotoxy(i,j);printf("%c",176);
		}
	}
	for(int j=7;j<17;j++){ // pilar derecho
		for(int i=66;i<76;i++){
			gotoxy(i,j);printf("%c",176);
		}
	}
	for(int j=17;j<23;j++){ // piso
		for(int i=3;i<76;i++){
			gotoxy(i,j);printf("%c",176);
		}
	}
	gotoxy(30,11);cout<<"HASTA LUEGO ;)";
	gotoxy(1,22);sleep(2);
}

//------------------------------------------------------------------------------
//-------------------------	ANIMACION DE CARGA ---------------------------------
//------------------------------------------------------------------------------
void cargando(){ //     A--------------------------A
	gotoxy(26,20);cout<<"          cargando        ";
	for(int i=26;i<51;i++){
		gotoxy(i,20);cout<<char(178);
		Sleep(100);
	
	}
}