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
	
	cout<< setw(10) <<"asignatura"<<setw(20)<<"estudiantes"<<endl
					<<"programacion"<<setw(10)<<right<<"12"<<endl
					<<left<<"redes"<<setw(20)<<right<<"9"<<endl;
	
		
	return 0;
}