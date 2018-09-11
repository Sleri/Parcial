#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
/*

* Programa: Cantidad de caracteres
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;

//funcion principal
int main(){
	char n1[100];
	char n2[100];
	int x = 0, y = 0;
	
	//captura de caracteres
	printf("Ingrese el primer nombre: \n");
	gets(n1);
	printf("Ingrese el segundo nombre: \n");
	gets(n2);
	
	//funcion que cuenta la cantidad de caracteres en las cadenas
	x = strlen(n1);
	y = strlen(n2);
	
	//segun la cantidad de caracteres hace la comparacion y entra a la decision
	if(x > y){
		printf("\nEl de mayor caracteres es primer nombre ingresado: %s", n1);
		
	}else{
		if(y > x){
			printf("\nEl de mayor caracteres es el segundo nombre ingresado: %s", n2);
		}else{
			printf("\nSon dos nombres iguales");
		}
	}
	
	return 0;
}

