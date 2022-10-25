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
	int intento=1;
do{
	cout <<" adivina el numero entre 0 y 10"<<endl;
	cin>> num;

	if(num==aleatorio){ 
		cout<<"felicidades, acertaste"<<endl;
		intento=4;
		}
	
	
	else {
		cout<<"numero incorrecto"<<endl;
		
		if(intento==3){
			cout<<"usted ha agotado sus intentos"<< endl;
		}
		intento++;
	}
	
	}while (intento<4);{
		cout<<"fin de la aplicacion"<<endl;

	return 0;
}
}
