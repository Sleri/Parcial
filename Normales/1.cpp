#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
/*

* Programa: Pruebas de suficiencia
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;

//funcion principal

int main(){
	float nPreguntas, nAcertadas,resultado;
	char c;

	do{
		//captura de datos
		printf("Ingrese el numero de preguntas realizadas: ");  
		scanf("%f", &nPreguntas);
		printf("Ingrese el numero de preguntas acertadas: ");
		scanf("%f", &nAcertadas);
		//procedimiento para sacar el porcentaje
		resultado = (nAcertadas / nPreguntas);
		
		
		//decisiones para determinar en donde podria entrar el porcentaje
		if(resultado >= 0.90){
			printf("Nivel maximo\n");
		}else{
			if(resultado >=0.75 && resultado < 0.90){
				printf("Nivel medio\n");
			}else{
				if(resultado >= 0.50 && resultado < 0.75){
					printf("Nivel regular\n");
				}else{
					if(resultado < 0.50){
						printf("Fuera de nivel\n");
					}
				}
			}
		}
		
		//introduccion segun la opcion del usuario
		printf("\nDesea ingresar otra cantidad (s/n)?: ");
		fflush(stdin);
		scanf("%c", &c);
		
	} while(c != 'n');
	
	return 0;
}

