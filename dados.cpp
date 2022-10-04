/*
nombre de archivo: jugar dados.cpp
autor; maycol juarez
lugar; itv
instrucciones : generar numeros aleatorios
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	srand(time(nullptr));
	int valormin=1, valormax=6;

//formula para generar numeros dentro de un rango
short dado1= (rand() % (valormax - valormin + 1)) + valormin;
short dado2= (rand() % (valormax - valormin + 1)) + valormin;

cout<< dado1<<" , "<<dado2;

	return 0;
	
}