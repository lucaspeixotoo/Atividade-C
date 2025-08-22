#include <stdio.h>
#include <math.h>

int main(void) {
	
	int machine;
	int motor20 = 1;
	int motor1 = 2;
	int motor5 = 3;
	int motor20cv = 1500;
	int motor1cv = 300;
	int motor5cv = 600;
	
	printf("Quantas maquinas serao vendidas?");
	scanf("%i", &machine);
	
	float vmotor1 = machine * motor20cv;
	float vmotor2 = machine * (2 * motor1cv);
	float vmotor3 = machine * (3 * motor5cv);
	float soma = vmotor1 + vmotor2 + vmotor3;
	
	int quant_motor1 = machine * motor20;
	int quant_motor2 = machine * motor1;
	int quant_motor3 = machine * motor5;
	
	printf("O numero de motores a serem fabricados e de:\n");
	printf("%i motores de 20CV\n%i motores de 1CV \ne %i motores de 5CV \npara ser feito(os) %i maquina(as)\n", quant_motor1, quant_motor2, quant_motor3, machine);
	printf("\nE o custo total para fabricacao dos motores e de %.2f. \nSendo eles:\n", soma);
	printf("%.2f reais em motores de 20CV\n%.2f reais em motores de 1CV \ne %.2f reais em motores de 5CV", vmotor1, vmotor2, vmotor3, machine);
	
	return 0;
}