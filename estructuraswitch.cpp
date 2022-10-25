/*
nombre del archivo: estructuraswtch.cpp
autor: Danilo Noguera 
lugar: ITV
instrucciones: Ejemplo de la estructura de control condicional multiple switch
*/

#include<iostream>

using namespace std;

int main(){
	
	int op;
	cout<<" menu de opciones"<< endl;
	cout<<"1- computadoras\n2- smartphones\n3- tablets\n4- salir"<<endl;
	cout<<" seleccione una opcion" <<endl;
	cin>> op;
	
	
	switch(op){
		case 1: 
			cout<< " usted ha seleccionado: computadoras."<<endl;
			break;
		case 2:
			cout<<" usted ha seleccionado: smartphones." <<endl;
			break;
		case 3:
			cout<< "usted ha seleccionado: tablets."<< endl;
			break;
		case 4:
			cout<< " usted ha salido de la aplicacion" <<endl;
			break;
		defaul: 
			cout<< " seleccion erronea"<<endl;
			
	}
	
	
	
	return 0;
}