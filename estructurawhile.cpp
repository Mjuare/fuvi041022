/*
nombre del archivo: estructurawhile
autor:maycol juarez
lugar:ITV
instrucciones: ejemplo de estructura while
*/

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	string nombre;
	cout<<"ingrese su nombre : ";
	getline(cin,nombre);
	cout<<"introduce tu edad : ";
	cin>>edad;
	
	
	
	while (edad<0){
		cout<<"ingrese su edad : " ;
		cin>>edad;
	}
	
	cout<<"bienvenido. "<< nombre << endl;
	cout<<"fin de la aplicacion";
		
	return 0;
}