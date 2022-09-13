//Ejercicio 6
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	double altura[5],promedio=0;
	float mayor=0,menor=3;
	int cont_mayor=0,cont_menor=0;
	
	for(int i=0;i<5;i++){
		cout<<"Digite una altura en metros: ";cin>>altura[i];
		if(altura[i]>mayor){
			mayor=altura[i];
		}
		if(altura[i]<menor){
			menor=altura[i];
		}
		promedio+=altura[i];
		
		system("pause");
		system("cls");
	}
	promedio/=5;
	
	for(int i=0;i<5;i++){
		if(altura[i]>promedio){
			cont_mayor++;
		}
		if(altura[i]<promedio){
			cont_menor++;
		}
	}
	
	cout<<"Alturas: ";
	for(int i=0;i<5;i++){
		cout<<altura[i]<<" - ";
	}
	
	cout<<endl;
	cout<<"\nPromedio de las alturas: "<<promedio<<endl;
	cout<<"Altura mayor: "<<mayor<<endl;
	cout<<"Altura menor: "<<menor<<endl;
	cout<<"Alturas mayores al promedio: "<<cont_mayor<<endl;
	cout<<"Alturas menores al promedio: "<<cont_menor<<endl;
}
