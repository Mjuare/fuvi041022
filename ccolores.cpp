/*                                                                                                                     
nombre del archivo: banda de colores 
autor:maycol juarez 
lugar: itv 
instrucciones: banda de colores
*/

#include<iostream>

using namespace std;

double num, posicion, cont;

const int negro=0, cafe=1, rojo=2, naranja=3, amarillo=4, verde=5, azul=6, violeta=7, gris=8, blanco=9, oro=5, plata=10, sin=20;

bool color1, color2, color3, color4, color5, color6;



	
int main(){
	
	
	
	cout<<"escribe el numero de las bandas de la resistencia"<<endl;
	cin>>num;
	
	cont= 0;
	posicion= 1;
	

	do{
	
	cout<<"escribir el "<<posicion<<" color de la banda"<<endl,	cin>>color1,
	cont=cont+1,
	posicion=posicion+1;
	}
	while(cont<=num);

+/*	cout<<" introducir el primer color"<<endl;
	cin>>color1;
	
	cout<<"introducir el segundo color"<<endl;
	cin>>color2;
	
	cout<<" introducir el tercer color"<<endl;
	cin>>color3;
	
	cout"introducir el cuarto color"<<endl;
	cin>>color4;
	
	
	
	
	
	if (color1="negro")
	color1=negro
	else 
	cout<<"ingrese otra vez";
	return 0;
	
	
	do {if (color1="negro")

} while(cont=num);
*/	



	return 0;
}