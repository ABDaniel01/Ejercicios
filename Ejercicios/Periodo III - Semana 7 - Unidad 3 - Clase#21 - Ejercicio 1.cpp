//Ejercicio 21
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int cant_empleados,sueldo,cant_menor_mil,
	cant_mil_5m,cant_mayor_5m;
	char opcion;
	
	do{
		do{
		cout<<"Ingrese la cantidad de empleados: ";cin>>cant_empleados;
		}while(cant_empleados<=0);
		
		cant_menor_mil=0;
		cant_mil_5m=0;
		cant_mayor_5m=0;
		
		for(int i=0;i<cant_empleados;i++){
			do{
				cout<<"Ingresar sueldo: ";cin>>sueldo;
				if(sueldo>=5000){
					cant_mayor_5m++;
				}
				else if(sueldo<5000 && sueldo>=1000){
					cant_mil_5m++;
				}
				else{
					cant_menor_mil++;
				}
			}while(sueldo<=0);
		}
		
		cout<<"Cantidad de empleados con sueldos mayores a 5000: "<<cant_mayor_5m<<endl;
		cout<<"Cantidad de empleados con sueldos entre 1000 y 5000: "<<cant_mil_5m<<endl;
		cout<<"Cantidad de empleados con sueldos menores a 1000: "<<cant_menor_mil<<endl;
		cout<<"Desea continuar?[s/n]: ";cin>>opcion;
	}while(opcion=='s'||opcion=='S');
	
}
