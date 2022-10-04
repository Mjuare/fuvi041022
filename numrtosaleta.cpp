/*
nombre de archivo: numero aleatorio
autor; maycol juarez
lugar; itv
instrucciones : generar numeros aleatorios
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	
	//long tiempotranscurrido = time(nullptr); //1 de enero de 1970
srand(time(nullptr));
	int aleatorio= rand () %10;
	int num;
	
	
	cout<<"adivine un numero del uno al diez";
	cin>> num;
	
	if (num==aleatorio){
		cout<<"felicidades, acertaste";
	} else { 
	cout<<"lo siento no hacertaste";
	}
	
	
	
	cout<< aleatorio;
	return 0;
	
}