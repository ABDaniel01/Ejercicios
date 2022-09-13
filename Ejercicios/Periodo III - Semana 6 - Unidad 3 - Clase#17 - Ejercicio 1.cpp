//Ejercicio 17
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	char arreglo[]={'e','l','e','m','e','n','t','o','c','h','a','r'};
	int cont_m=0;
	int cont_t=0;
	int cont_h=0;
	
	for(char x:arreglo){
		if(x=='m'){
			cont_m++;
		}
		else if(x=='t'){
			cont_t++;
		}
		else if(x=='h'){
			cont_h++;
		}
	}
	
	cout<<"Cantidad de m: "<<cont_m<<endl;
	cout<<"Cantidad de t: "<<cont_t<<endl;
	cout<<"Cantidad de h: "<<cont_h<<endl;
	
	system("pause");
	return 0;
}
