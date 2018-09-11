#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
/*

* Programa: Impresion desde 0 hasta x numero 
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;

//impresion de numeros desde 0 hasta x numero
void num(int n1){
	int i;
	for(i = 0; i <= n1; i++){
		printf("%d\n", i);
	}
}

//funcion principal
int main() {
	int num1;
	do{                 
		//captura del numero
		printf("Ingrese el numero al cual se le imprimira una lista: ");
		scanf("%d", &num1);
		num(num1);
	
	} while(num1 > 0);  //se repite hasta que se ingresa un numero negativo, el ciclo se detiene.	
	
	printf("Ingreso un numero negativo");
}

