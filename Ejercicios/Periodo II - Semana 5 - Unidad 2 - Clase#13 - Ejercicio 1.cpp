//Ejercicio 13
#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void convertir(float);
void mostrarDatos(float);

int main(){
	
	pedirDatos();
	cout<<endl;
	
	system("pause");
	return 0;
}

void pedirDatos(){
	float km;
	cout<<"Digite una distancia en km: ";cin>>km;
	if(km>0){
		convertir(km);
	}
	else{
		cout<<"Las distancias no pueden ser negativas."<<endl;
		pedirDatos();
	}
}

void convertir(float km){
	float m=km*1000;
	mostrarDatos(m);
}

void mostrarDatos(float m){
	cout<<"La cantidad en metros equivalente a la distancia digitada es: "<<m<<"m."<<endl;
}
