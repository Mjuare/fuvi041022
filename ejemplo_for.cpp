/*
nombre del archivo: ejemplos_for
autor: maycol andres juarez
lugar: ITv
instrucciones: ejemplo de estructura for
*/

#include<iostream>

using namespace std;

int main(){
	
int tabla;
cout<<"cual tabla de multiplicar desea mostrar: ";
cin>>tabla;

for(int i=1; i<11;i++){
	if(i % 3==0){
		cout<< tabla <<"X"<< i <<" = "tabla*i<<endl;
	}
}
	
	return 0;
}