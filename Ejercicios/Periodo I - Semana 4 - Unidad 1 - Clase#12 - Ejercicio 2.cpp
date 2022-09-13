//Ejercicio 5
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	float piezas;
	int cont=0,n;
	
	cout<<"Digite la cantidad de piezas a ingresar: ";cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"\nDigite la longitud de la pieza "<<i+1<<" : ";cin>>piezas;
		if(piezas>0 && piezas<=5){
			cont++;
		}
		system("pause");
		system("cls");
	}
	
	cout<<"Cantidad de piezas aptas ingresadas: "<<cont<<endl;
	
	system("pause");
	return 0;
}
