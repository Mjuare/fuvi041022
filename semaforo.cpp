/*
nombre del archivo:semaforo
autor:maycol juarez
lugar:ITV
instrucciones:
*/

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	char color;
	cout<<"ingrese su edad"<<endl;
	cin>>edad;
	
	if(edad<17){
		cout <<"usted no tiene la edad suficiente para conducir un vehiculo"<<endl;
	} else if (edad>60){
		cout<<"usted ya no puede conducir"<<endl;
	}
	else {
		cout<<"color de semaforo: (r=rojo, a=amarillo, v=verde)";
		cin>>color;
		
		if(color == 'r'){
			cout<<"detenga el vehiculo!!!!"<<endl;
		} else if (color =='v'){
			cout<<"usted puede avanzar con normalidad"<<endl;
		} else if( color =='a'){
			cout<<"reduzca la velocidad lentamente"<<endl;
		} else {
			cout<<"color ingresado incorrecto"<<endl;
		}
		
	}
	
	cout<<"fin del programa";
	
	return 0;
}