//Ejercicio 9
#include<iostream>
#include<stdlib.h>
using namespace std;

void llenarPar(int[100]);
void llenarImp(int[100]);
void mostrarPar(int[100]);
void mostrarImp(int[100]);

int main(){
	int numeros[100];
	
	llenarPar(numeros);
	llenarImp(numeros);
	mostrarPar(numeros);
	mostrarImp(numeros);
		
	system("pause");
	return 0;
}

void llenarPar(int numeros[100]){
	for(int i=0;i<101;i++){
		if(numeros[i]%2==0){
			numeros[i]=i;
		}
	}
}

void llenarImp(int numeros[100]){
	for(int i=0;i<101;i++){
		if(numeros[i]%2==1){
			numeros[i]=i;
		}
	}
}

void mostrarPar(int numeros[100]){
	cout<<"Numeros pares"<<endl;
	for(int i=0;i<101;i++){
		if(numeros[i]%2==0){
			cout<<numeros[i]<<endl;
		}
	}
}

void mostrarImp(int numeros[100]){
	cout<<"\nNumeros impares"<<endl;
	for(int i=0;i<101;i++){
		if(numeros[i]%2==1){
			cout<<numeros[i]<<endl;
		}
	}
}
