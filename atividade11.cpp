#include <stdio.h>
#include <math.h>

float conta(int valor1, int valor2) {
	float operation = valor1*valor2;
	return operation;
}

float liquido(float valor3, float conta) {
	float conta2 = conta-(conta*valor3);
	return conta2;
}

int main(void) {
	int worked_days;
	int wage = 25;
	float alou = 0.08;
  
	printf("Quantos dias voce trabalhou?\n");
	scanf("%i", &worked_days);

	float payment = liquido(alou, conta(worked_days, wage));	

	return printf("Devera ser pago ao encanador o valor de %.2f reais", payment);
}