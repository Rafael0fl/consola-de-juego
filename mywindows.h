// mywindows.h
#include <windows.h>

#define color SetConsoleTextAttribute  // color(c,4) imprime texto en color rojo

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

void gotoxy(int x,int y){  // funcion gotoxy
	HANDLE hcon;
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hcon,dwPos);
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

HANDLE c=GetStdHandle(STD_OUTPUT_HANDLE); // cambiar color a las letras
//SetConsoleTextAttribute(c,k); k es un numero entero positivo

