/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE.
NOMBRE: Ivan Conejo
FECHA: 22/11/2017.
TEMA: EXAMEN. 
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Lista.h"
#include "gotoxy.h"
#include<time.h>
#include <windows.h>

using namespace std;

Lista obj;
int main() {
	int contN=0;
	int datito;
	srand(time(NULL));
	int eliminar=0;
	char auxiEli[5];
	for (int i = 0; i <= 9; i++)
	auxiEli= 33 + rand() % (126 - 33);
	cin.get();

	gotoxy(40, 0);
	cout << auxiEli;
	for (int i = 1; i < 15;i++) {
		gotoxy(40,i);
		Sleep(100);
		cout << auxiEli << endl;
		//cout << ".";
	}

	for (int i = 0; i < 15;i++) {
			datito = 1 + rand() % (10 - 1);
			//Sleep(50);
			contN++;
			obj.insertar(datito);
		}
	cout << "\n";
	obj.imprimir();

	cout << "\n---------------------------------------------------------------------------------------" << endl;
	
	if (obj.eliminar(auxiEli, contN)) {
		cout << "\n\n\n*****************   Dato Eliminado  *****************\n" << endl;
		obj.imprimir1(auxiEli);

	}
	else {
		cout << "\n\n\n*****************   Dato Adicionado  *******************\n" << endl;
		obj.insertar(auxiEli);
		obj.imprimir();
	};
	
	cout << "\n" << endl;
	system("pause");
	return 0;
}