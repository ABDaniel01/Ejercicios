//Ejercicio 3
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	float nota[5],mayor=0,menor=10;
	int i=0,pos,aux;
	
	for(i=0;i<5;i++){
		cout<<"Digite una nota: ";cin>>nota[i];
		system("pause");
		system("cls");
	}
	
	for(i=0;i<5;i++){
		pos=i;
		aux=nota[i];
		while(pos>0 && nota[pos-1]>aux){
			nota[pos]=nota[pos-1];
			pos--;
		}
		nota[pos]=aux;
	}
	
	for(i=0;i<5;i++){
		if(nota[i]>mayor){
			mayor=nota[i];
		}
		if(nota[i]<menor){
			menor=nota[i];
		}
	}
	
	cout<<"Nota mayor: "<<mayor<<endl;
	cout<<"Nota menor: "<<menor<<endl;
	cout<<"Nota de en medio: "<<nota[2]<<endl;
	
	system("pause");
	return 0;
}
