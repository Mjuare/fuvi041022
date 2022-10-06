/*
nombre del archivo:calculosalario
autor:maycol juarez
lugar:itv
instrucciones:ejemplo de programacion estructurada
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


int main(){
	//costantes
	const double TASA_ANTIGUEDAD = 15;
	const double MONTO_SINDICATO = 1;
	const double MONTO_INSS = 7;
	const double TASA_IR = 15.6;
	const double INSS_PATRONAL = 22.5;
	//variables
	double salariobasico, ingresototal, deduccionestotales, ingresoneto;
	double ingresoantiguedad, montosindicato, montoinss, tasair, insspatronal;
	string nombre;
	
	//pedido al usuario
	cout<<"hola ingrese su nombre"<<endl;
	cin>>nombre;
	
	cout<<"ingrese su salario basico C$"<<endl;
	cin>>salariobasico;
	
	//calculos de ingreso
	ingresoantiguedad= (TASA_ANTIGUEDAD/100) * salariobasico;
	ingresototal=salariobasico + ingresoantiguedad;
	
	//calculos de deducciones
	montosindicato= (MONTO_SINDICATO/100)*salariobasico;
	montoinss= (MONTO_INSS/100)*ingresototal;
	tasair= (TASA_IR/100)*ingresototal;
	insspatronal= (INSS_PATRONAL/100)*ingresototal;
	
	deduccionestotales= montosindicato + montoinss + tasair;
	
	//ingreso netop
	ingresoneto= ingresototal-deduccionestotales;
	
	
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	//muestra de resultados
	cout<<"hola "<<setw(5)<<nombre<<setw(15)<<"  estas son tus cuentas:"<<endl;
	cout<< " tu ingreso basico es de:" << setw(8) <<salariobasico << endl;
	cout<< " tu ingreso por antiguedad es de:" << setw(8) <<ingresoantiguedad << endl;
	cout<<" el ingreso total es de "<<setw(10)<<right<<ingresototal<<"C$"<<endl;
	
	
	cout<<"_________________________DEDUCCIONES__________________-"<<endl;
	cout<<"tus deducciones totales son: "<<setw(8)<<right<<deduccionestotales<<"C$"<<endl;
	cout<<setw(12)<<"correspondientes a:"<<endl;
	cout<<" deduccion del sindicato al 1%:"<<setw(8)<<right<<montosindicato<<"C$"<<endl;
	cout<<" deduccion del inss al 7% :"<<setw(14)<<right<<montoinss<<"C$"<<endl;
	cout<<" deduccion de la tasa ir al 15.6%:"<<setw(8)<<right<<tasair<<"C$"<<endl;
	cout<<" deduccion de de ir patronal al 22.5% "<<setw(8)<<insspatronal<<"C$"<<endl;
	
		cout<<"_________________________ingreso neto__________________-"<<endl;
	cout<<"tu ingreso neto es igual a: "<<setw(8)<<right<<ingresoneto<<"C$"<<endl;
	
	return 0;
}