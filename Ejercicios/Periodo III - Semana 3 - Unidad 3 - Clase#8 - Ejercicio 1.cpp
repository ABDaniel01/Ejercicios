//Ejercicio 15
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	char nombre[]={"Daniel"};
	int edad[]={17};
	float altura[]={1.70};
	
	cout<<"Nombre: ";
	for(char x:nombre){
		cout<<x;
	}
	cout<<endl;
	for(int x:edad){
		cout<<"Edad: "<<x<<endl;
	}
	for(float x:altura){
		cout<<"Altura: "<<x<<endl;
	}
	
	system("pause");
	return 0;
}

