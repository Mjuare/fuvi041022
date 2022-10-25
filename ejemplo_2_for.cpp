/*
nombre del archivo: estructura for
autor: maycol andres juarez
lugar: ITv
instrucciones: ejemplo de estructura for
*/

#include<iostream>
#include<cstdlib> //c standard library
#include<ctime>

using namespace std;
 
int main(){

int cant, num, aleatorio, cont;
cout<< " ingrese un numero:"<<endl;
cin>>num;
cout<<"cantidad de numeros";
cin>>cant;

	srand(time(nullptr));
for(int i= 1; i <= cant; i++){

	aleatorio= rand () % 100;
	cout<<aleatorio<<" ";
	
	
	if (i=cant){
	
	
	if( aleatorio  == num){
		cout<<"el "<< num << " numero fue encontrado "<<endl;
		}
}
	}


	
	cout<<" FIN DEL PROGRAMA"<<endl;
	
	return 0;
}