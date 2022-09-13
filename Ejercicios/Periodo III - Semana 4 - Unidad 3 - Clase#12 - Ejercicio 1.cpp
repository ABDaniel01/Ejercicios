//Ejercicio 16
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	bool flg=true;
	int num=1,cont=1;
	
	while(flg==true){
		cout<<num<<endl;
		num++;
		if(num==11){
			flg=false;
		}
	}
	
	cout<<endl;
	
	do{
		cout<<cont<<endl;
		cont++;
	}while(cont<=10);
	
	system("pause");
	return 0;
}
