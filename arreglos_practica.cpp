/*
nombre del archivo: arreglos practica
autor: maycol andres juarez
lugar: ItV
instrucciones: comprender los arreglos
*/

#include<iostream>
#include<iomanip>

using namespace std;



int main(){
	
	/*definir los datos de entradas: nombre del estudiante, codigo del carnet, carrera. asignatura, codigo de asignatura, nombe del docente, inscripcion
	penseum, primer parcial 25, segundo parcial 25, tercer parcial 25, */
	
	const string carrera= " tecnico superior en electronica industrial";
	const string asignatura= " introduccion a la programacion";
	const string codigoasignatura= "El025";
	const string pensum= " 03-El01";
	string nombredocente;
	string fecha;
	int cantidadestudiantes;
	
	//pdido de datos al docente
	
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"sea Bienvenido al sisitema de registro academico"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"nombre del docente : ";
	getline (cin,nombredocente);
	cout<<" fecha (DD/MM/AAAA) :";
	cin>>fecha;
	cout<<"cantidad de estudiantes del grupo : ";
	cin>>cantidadestudiantes;
	
	
	//definir las demas variables
	
	string codigocarnet[cantidadestudiantes];
	string nombrecompleto[cantidadestudiantes]; 
	int primerparcial [cantidadestudiantes]; //25
	int segundoparcial [cantidadestudiantes]; //25
	int tercerparcial [cantidadestudiantes]; //25
	int acumulado [cantidadestudiantes]; //25
	int notafinal [cantidadestudiantes]; //100
	char status [cantidadestudiantes]; // R- reprobado, A- Aprobado
	
	cout<<"---------------------------------------------------------"<<endl;
	cout<<" ingrese datos de cada estudiante"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
	
	for ( int i=0; i < cantidadestudiantes; i++){
		cout<<"estudiante ["<<i+1<<"] "<<endl;
		cout<<"codigo de carnet= ";
		cin>>codigocarnet[i];
		cout<<"nombre del estudiante ";
		getline (cin>> ws,nombrecompleto[i]);
		cout<<"nota del primer parcial= " ;
		cin>> primerparcial[i];
		cout<<"nota del segundo parcial= ";
		cin>> segundoparcial[i];
		cout<<"nota del tercer parcial= ";
		cin>> tercerparcial[i];
		cout<<"nota del acumulado= ";
		cin>> acumulado[i];
		}
		
		//procesamiento de los datos
		//calculos de la nota final
		for (int i=0 ; i<cantidadestudiantes ;i++){
			notafinal[i]=primerparcial[i]+segundoparcial[i]+tercerparcial[i]+acumulado[i];
		}
		
		for(int i=0; i<cantidadestudiantes; i++){
			if (notafinal[i]<70){
				status[i]='R';
			}
		else { status[i]='A';
		}
		}
		
		//calcular el promedio de los estudiantes
		int sumanotas=0, promedionotas;
		for ( int i=0 ; i< cantidadestudiantes; i++){
			sumanotas +=notafinal[i];
		}
		
	promedionotas= sumanotas/cantidadestudiantes;
	
	//presentacion de los resultados al lector
	const string inscripciones= "2022";
	const string codigocarrera= " electro22";
	cout<<"__________________________________________________"<<endl;
	cout<<" ACTA DE CALIFICACIONES "<<endl;
	cout<<"__________________________________________________"<<endl;
	cout<<" Inscripciones "<< inscripciones << endl;
	cout<< "asignatura" << asignatura<< endl;
	cout << "codigo de carrera"<<codigocarrera<<endl;
	cout<< " nombre del docente: "<<nombredocente<<endl;
	
	cout<<setw(15)<<"carnet"<<setw(35)<<"nombre del estudiante"<<setw(17)<<"pensum"<<setw(10)<<"nota p1"<<setw(8)<<"nota p2"<<setw(8)<<"nota 3"<<setw(11)<<"nota acumulado"<<setw(15)<<"nota final"<<setw (10)<< "status"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl;
	for(int i=0; i<cantidadestudiantes; i++){
		cout<<setw(15)<<codigocarnet[i]<<setw(35)<<nombrecompleto[i]<<setw(17)<<pensum<<setw(10)<<primerparcial[i]<<setw(8)<<segundoparcial[i]<<setw(8)<<tercerparcial[i]<<setw(8)<<acumulado[i]<<setw(19)<<notafinal[i]<<setw (10)<<status[i]<<endl;
	}
	
	return 0;
}