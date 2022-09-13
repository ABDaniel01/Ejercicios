//Ejercicio 10
#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void menu(float,float);
void cambiarNota1(float);
void cambiarNota2(float);
void mostrarNota1(float,float);
void mostrarNota2(float,float);

float lab1,lab2;

int main(){
	
	pedirDatos();
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Digite la nota del laboratorio 1: ";cin>>lab1;
	cout<<"Digite la nota del laboratorio 2: ";cin>>lab2;
	
	if(lab1<0 || lab1>10 || lab2<0 || lab2>10){
		cout<<"Datos ingresados no validos."<<endl;
		pedirDatos();
	}
	else{
		cout<<endl;
		menu(lab1,lab2);
	}
}

void menu(float n1,float n2){
	int opc;
	
	do{
		cout<<"Digite 1 si desea cambiar la nota del laboratorio 1."<<endl;
		cout<<"Digite 2 si desea cambiar la nota del laboratorio 2."<<endl;
		cout<<"Digite 3 si desea salir."<<endl;
		cout<<"Opcion marcada: ";cin>>opc;
	
		switch(opc){
			case 1:
				cambiarNota1(n1);
			break;
			case 2: 
				cambiarNota2(n2);
			break;
			case 3:
				cout<<"Usted ha salido del programa."<<endl;
			break;
			default:
				cout<<"Nota ingresada no valida."<<endl;
			break;	
		}
		system("pause");
		system("cls");
	}while(opc!=3);
}

void cambiarNota1(float nota_lab1){
	float aumento=0,nueva_nota=0;
	if(nota_lab1<5){
		aumento=nota_lab1*0.05;
	}
	else if(nota_lab1>=5 && nota_lab1<9){
		aumento=nota_lab1*0.10;
	}
	
	nueva_nota=nota_lab1+aumento;
	mostrarNota1(nota_lab1,nueva_nota);
}

void cambiarNota2(float nota_lab2){
	float nueva_nota;
	if(nota_lab2>=8 && nota_lab2<=9){
		nueva_nota=nota_lab2+1;
	}
	else{
		nueva_nota=nota_lab2;
	}
	mostrarNota1(nota_lab2,nueva_nota);
}

void mostrarNota1(float ant_nota1,float nota_cambiada1){
	cout<<"Nota original del laboratorio 1: "<<ant_nota1<<"."<<endl;
	cout<<"Nota modificada: "<<nota_cambiada1<<"."<<endl;
}

void mostrarNota2(float ant_nota2,float nota_cambiada2){
	cout<<"Nota original del laboratorio 2: "<<ant_nota2<<"."<<endl;
	cout<<"Nota modificada: "<<nota_cambiada2<<"."<<endl;
}
