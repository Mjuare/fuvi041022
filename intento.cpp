/* nombre del achivo: constatntes
autor:maycol juarez
Lugar: itv
instrucciones: uso de las constantes
*/

#include<iostream>

using namespace std;

//variables globales
double pi = 3.1415;

int main(){
	double area, radio;
	cout<<"ingrese el calor del radio";
	cin>>radio;
	area= pi * radio* radio;
	cout<<" el valor del radiro es "<<radio<<" entonces el valor de la area es "<<area;
	return 0;
}
