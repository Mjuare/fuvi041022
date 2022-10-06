/*
nombre del archivo:manipuladores.cpp
autor:maycol juarez
lugar: itv
instrucciones: ejemplo de manipulacion de E/S
*/

#include<iostream>
#include<iomanip>


using namespace std;

int main(){
	
	cout<<left;
	cout<<setw(20)<<"artista"<<setw(10)<<"album"<< endl
	<<setw(20)<<"michael jackson"<<setw(10)<<"triller";
	
	cout<<fixed<<setprecision(2)<<12.34467;
	
		
	return 0;
}