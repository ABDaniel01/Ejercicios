//Ejercicio 8
#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirClave();
void calcMateriaPrima(int);
void calcPrecios(int,float);
void mostrarPrecios(float,float,float,float);

int main(){
	
	pedirClave();
	
	system("pause");
	return 0;
}

void pedirClave(){
	int clave;
	cout<<"Digite la clave del producto.(1 o 2): ";cin>>clave;
	
	if(clave==1 || clave==2){
		calcMateriaPrima(clave);
	}
	else{
		pedirClave();
		system("pause");
		system("cls");
	}
}

void calcMateriaPrima(int key){
	float mat_prima;
	do{
		cout<<"Digite el costo de la materia prima: ";cin>>mat_prima;
		if(mat_prima<0){
			cout<<"Valor ingresado no valido."<<endl;
		}
		else if(mat_prima==0){
			cout<<"El costo de la materia prima no puede ser 0."<<endl;
		}
		else{
			calcPrecios(key,mat_prima);
			break;
		}
		system("pause");
		system("cls");
	}while(mat_prima<=0);
}

void calcPrecios(int key,float materiaPrima){
	float mano_obra=0,gastos_fab=0,costo_prod=0;
	
	if(key==1){
		mano_obra=materiaPrima*0.75;
		gastos_fab=materiaPrima*0.30;
	}
	else if(key==2){
		mano_obra=materiaPrima*0.50;
		gastos_fab=materiaPrima*0.35;
	}
	costo_prod=materiaPrima+mano_obra+gastos_fab;
	mostrarPrecios(materiaPrima,mano_obra,gastos_fab,costo_prod);
}

void mostrarPrecios(float materiaPrima,float mano_obra,float gastos_fab,float costo_prod){
	cout<<"\tFabrica El Cometa"<<endl;
	cout<<"Costo por materia prima---------"<<materiaPrima<<endl;
	cout<<"Costo por mano de obra----------"<<mano_obra<<endl;
	cout<<"Gastos de fabricacion-----------"<<gastos_fab<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"Costo de produccion-------------"<<costo_prod<<endl;
}
