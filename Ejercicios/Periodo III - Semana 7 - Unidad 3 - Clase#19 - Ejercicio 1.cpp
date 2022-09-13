//Ejercicio 19
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n1,n2,c;
	
	cout<<"Digite un numero: ";cin>>n1;
	cout<<"Digite otro numero: ";cin>>n2;
	c=n1;
	
	while(c>n2){
		cout<<c<<endl;
		c--;
	}
	
	while(c<n2){
		cout<<c<<endl;
		c++;
	}
	
	system("pause");
	return 0;
}
