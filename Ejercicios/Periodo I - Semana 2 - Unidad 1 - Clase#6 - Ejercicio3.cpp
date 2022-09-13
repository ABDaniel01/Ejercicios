//Ejercicio 2:
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int opc,cont;
	float nota,promedio=0;
	
	do{
		cout<<"Digite 1 para digitar una nota."<<endl;
		cout<<"Digite 2 para salir."<<endl;
		cout<<"Opcion marcada: ";cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"\nDigite una nota: ";cin>>nota;
				if(nota>=0 && nota<=10){
					if(nota<6){
					promedio+=nota;
					cont++;
					}
				}
				else{
					cout<<"Nota ingresada no valida."<<endl;
				}
				cout<<endl;
			break;
			case 2:break;
			default:
				cout<<"\nOpcion ingresada no valida."<<endl;
			break;
		}
		system("pause");
		system("cls");
	}while(opc!=2);
	
	promedio=promedio/cont;
	cout<<"\nPromedio de las notas reprobadas: "<<promedio<<endl;
	
	system("pause");
	return 0;
}
