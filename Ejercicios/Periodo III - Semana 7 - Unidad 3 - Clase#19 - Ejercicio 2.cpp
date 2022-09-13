//Ejercicio 20
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int cant_nums,nums,cont=0,suma=0;
	
	cout<<"Digite la cantidad de numeros: ";cin>>cant_nums;
	while(cont<cant_nums){
		cout<<"Ingresar numero: ";cin>>nums;
		suma+=nums;
		cont++;
	}
	
	cout<<"La suma de los numeros ingresados es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
