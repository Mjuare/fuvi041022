/* nombre del achivo:pitagoras
autor:maycol juarez
lugar:itv
instrucciones: ejemplo sobre la biblioteca cmath
*/

#include<iostream>

using namespace std;

int main (){
	
	double cateto1, cateto2, hipotenusa;
	cout<<" ingrese la cateto 1";
	cin>>cateto1;
	cout<< " ingrese el cateto 2";
	cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout<<"cateto uno es "<<cateto1;
	cout<<"cateto dos es "<<cateto2;
	cout<< " la hipotenusa es "<<hipotenusa;
	
	return 0;
	
}
