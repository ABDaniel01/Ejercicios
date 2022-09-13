//Ejercicio 4
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
	int numeros[]={1,2,3,4,5,6,7,8,9,10};
	int cuadrado[10];
	int cubo[10];
	
	for(int i=0;i<10;i++){
		cuadrado[i]=pow(numeros[i],2);
		cubo[i]=pow(numeros[i],3);
	}
	
	for(int i=0;i<10;i++){
		cout<<numeros[i]<<" -> "<<cuadrado[i]<<" -> "<<cubo[i]<<endl;
	}
	
	system("pause");
	return 0;
}
