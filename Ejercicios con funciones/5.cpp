#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
/*

* Programa: Promedio de seis numeros
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;

//captura de datos
void num(float n1[6]){
	int i;
	printf("Ingrese seis numeros: \n");
	for(i = 0; i < 6; i++){
		scanf("%f", &n1[i]);
	}
}

//promedio 
void promedio(float n2[6]){
	float resultado = 0, divi;
//se suman los numeros que contiene el arreglo
	for(int i = 0; i < 6; i++){
		resultado = resultado + n2[i];
	}
//se realiza la operacion y se imprime el resultado
	divi = resultado / 6;
	printf("El resultado es: %.2f", divi);
}

//funcion principal
int main() {
	float num1[6];
	num(num1);
	promedio(num1);
	
}

