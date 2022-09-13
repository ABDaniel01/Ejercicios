//Ejercicio 6
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int nums,n;
	float promedio=0;
	
	cout<<"Digite la cantidad de numeros que desea ingresar: ";cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<"Digite un numero: ";cin>>nums;
		promedio+=nums;
		system("pause");
		system("cls");
	}
	promedio=promedio/n;
	cout<<"Promedio de los numeros digitados: "<<promedio<<endl;
	
	system("pause");
	return 0;
}
