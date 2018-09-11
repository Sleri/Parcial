#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
/*

* Programa: Pares e impares
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;

//funcion principal
int main(){
	//declaracion de variables
	int numero, contadorP = 0, contadorI = 0;
	printf("Ingrese 15 numeros: \n");
	
	//captura de datos
	for(int i = 0; i < 15; i++){
		scanf("%d", &numero);
		
	//decision para saber si los numeros son pares e impares
		if(numero % 2 == 0){
			contadorP = contadorP + 1;   //contador que los almacena
		}else{
			contadorI = contadorI + 1;   //contador que los almacena
		}
	}
	
	printf("Hay %d pares\n", contadorP);
	printf("Hay %d impares\n", contadorI);
	
	return 0;
}

