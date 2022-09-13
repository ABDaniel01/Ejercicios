//Ejercicio 11
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

float calcHipo(float,float);

int main(){
	float cat1,cat2;
	
	cout<<"Digite la longitud del cateto 1: ";cin>>cat1;
	cout<<"Digite la longitud del cateto 2: ";cin>>cat2;
	cout<<"Valor de la hipotenusa: "<<calcHipo(cat1,cat2);
	cout<<endl;
	
	system("pause");
	return 0;
}

float calcHipo(float c1,float c2){
	float hip;
	
	hip=sqrt(pow(c1,2)+pow(c2,2));
	return hip;
}
