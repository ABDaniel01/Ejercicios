//Ejercicio 1
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int num=0,suma=0;
	
	for(int i=0;i<=100;i++){
		if(num%2==0){
			cout<<num<<endl;
			suma+=num;
		}
		else if(num==0){
			cout<<"0 "<<endl;
		}
		num++;
	}
	
	cout<<"La suma de los primeros 100 numeros pares es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
