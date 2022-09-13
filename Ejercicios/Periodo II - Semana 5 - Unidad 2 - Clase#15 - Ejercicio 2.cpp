//Ejercicio 14
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int arreglo[100],n,cont=0;
	
	cout<<"Digite la cantidad de elementos del arreglo: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";cin>>arreglo[i];
	}
	
	for(int i=0;i<n;i++){
		if(arreglo[i]>0){
			cont++;
		}
	}
	
	cout<<"La cantidad de elementos positivos en el arreglo es: "<<cont<<endl;
	
	system("pause");
	return 0;
}
