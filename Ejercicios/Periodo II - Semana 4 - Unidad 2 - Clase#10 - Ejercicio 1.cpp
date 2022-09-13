//Ejercicio 12
#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirClave();
void comprarEntradas(int);
void calcPrecios(int,int);
void mostrarPrecio(int,int,float);

int main(){
	
	for(int i=1;i<=3;i++){
		pedirClave();
		system("pause");
		system("cls");
	}
	
	system("pause");
	return 0;
}

void pedirClave(){
	int clave,opc;
	
	cout<<"\tMENU DE ENTRADAS"<<endl;
	cout<<"Entradas VIP: --------$125.00"<<endl;
	cout<<"Entradas tribuna: -----$40.00"<<endl;
	cout<<endl;
	cout<<"Digite 1 si desea comprar entradas VIP."<<endl;
	cout<<"Digite 2 si desea comprar entradas tribuna."<<endl;
	cout<<"Clave digitada: ";cin>>clave;
	
	if(clave==1 || clave==2){
		cout<<endl;comprarEntradas(clave);
	}
	else{
		cout<<"Clave ingresada no valida."<<endl;
		pedirClave();
	}
}

void comprarEntradas(int key){
	int cant;
	if(key==1){
		cout<<"Digite la cantidad de entradas VIP que desea comprar: ";cin>>cant;
	}
	else if(key==2){
		cout<<"Digite la cantidad de entradas tribuna que desea comprar: ";cin>>cant;
	}
	
	if(cant<0){
		comprarEntradas(key);
	}
	cout<<endl;
	calcPrecios(key,cant);
}

void calcPrecios(int key,int cant){
	float precio=0,desc=0;
	
	if(key==1){
		precio=cant*125;
		if(cant>=5){
			desc=precio*0.20;
			precio-=desc;
		}
	}
	else if(key==2){
		precio=cant*40;
	} 
	mostrarPrecio(key,cant,precio);                                    
}

void mostrarPrecio(int key,int cant,float precio){
	if(key==1){
		cout<<"Usted ha comprado "<<cant<<" de entradas VIP."<<endl;
		if(cant>=5){
			cout<<"Usted ha recibido un 20% de descuento por haber comprado "<<cant<<" entradas."<<endl;
			cout<<"Precio a pagar: $"<<precio<<endl;
		}
		else{
			cout<<"Precio a pagar: $"<<precio<<endl;
		}
	}
	else if(key==2){
		cout<<"Usted ha comprado "<<cant<<" de entradas tribuna."<<endl;
		cout<<"Precio a pagar: $"<<precio<<endl;
	}
}
