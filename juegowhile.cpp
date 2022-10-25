/*
nombre del archivo: juego de edivinanza
autor: maycol juarez
lugar: ITV
instrucciones: juego de adivinanza
*/

#include<iostream>
#include<cstdlib> //c standard library
#include<ctime>



using namespace std;

int main(){
	srand(time(nullptr));
	int aleatorio= rand() % 10;
	int num;
	int cont;
	

	cout <<" adivina el numero entre 0 y 10"<<endl;
	
	cin>> num;

	while (cont==3){
		cont=0;
	while (num !=  aleatorio){
		cout<< "adivine el numero entre 0 y 10"<<endl;
		cin>>num;
		
	}
	cont= cont + 1;	
}
	cout<< " felicidades, acertaste"<<endl;

	
	return 0;
}