/*
nombre del archivo: ejemlo switch.cpp
autor: Danilo Noguera 
lugar: ITV
instrucciones: Ejemplo de la estructura de control condicional multiple switch
*/

#include<iostream>

using namespace std;

int main(){
	int op1,op2,op3;
	int cant;
	double precio;
	
	char op;
	cout<<" menu de opciones"<< endl;
	cout<<"a- computadoras\nb- smartphones\nc- tablets\nd- salir"<<endl;
	cout<<" seleccione una opcion" <<endl;
	cin>> op;
	
	
	switch(op){
		case 'A':
		case 'a': 
			cout<< " usted ha seleccionado: computadoras."<<endl;
			cout<< "que tipo de computadora desea?"<< endl;
			cout<< "1 -desktop\n2 - laptop"<<endl;
			cin>> op1;
			switch (op1){
				case 1:
					cout<<"usted ha seleccionado: desktop"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 800;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;
					break;
				case 2:
				cout<<"usted ha seleccionado: laptop"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 300;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;
					break;
			}
			break;
			
			
		case 'B':
		case 'b':
			cout<<" usted ha seleccionado: smartphones." <<endl;
			cout<< "que gama desea?"<< endl;
			cout<< "1- gama baja\n2- gama media\n3- gama alta"<<endl;
				cin>> op2;
			switch (op2){
				case 1:
					cout<<"usted ha seleccionado: gama baja"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 200;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;					
			break;
				case 2:
					cout<<"usted ha seleccionado: gama media"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 350;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;
			break;
			case 3:
					cout<<"usted ha seleccionado: gama alta"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 500;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;
			break;
	
		}
			break;
			
			
		case 'C':
		case 'c':
			cout<< "usted ha seleccionado: tablets."<< endl;
			cout<< "que gama desea?"<< endl;
			cout<< "1- gama baja\n2- gama media baja\n3- gama media\n4- gama media alta\n5- gama alta"<<endl;
			cin>> op3;
			switch (op3){
				case 1:
					cout<<"usted ha seleccionado: gama baja"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 270;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;					
			break;
				case 2:
					cout<<"usted ha seleccionado: gama media"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 320;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;
			break;
			case 3:
					cout<<"usted ha seleccionado: gama alta"<<endl;
					cout<<"ingrese la cantidad a comprar"<<endl;
					cin>> cant;
					precio= 400;
					cout<<"el precion total a pagar seran de "<<cant<<" computadoras a un precio de "<<precio<<" con un total a pagar de "<<precio*cant<< " $."<<endl;
			break;
		}
			break;
			
			
		case 'D':
		case 'd':
			cout<< " usted ha salido de la aplicacion" <<endl;
			break;
		defaul: 
			cout<< " seleccion erronea"<<endl;
			
	}
	
	return 0;
}