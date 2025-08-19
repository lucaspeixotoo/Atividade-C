#include <stdio.h>
#include <math.h>

float soma (float num1, float num2){
	float resultado = num1+num2;
	return resultado;
}

int main (void){
	float num1;
	float num2;
	
	printf("Digite um numero:\n");
	scanf("%f", &num1);

	printf("Digite outro numero:\n");
	scanf("%f", &num2);

	float resultado = soma (num1, num2);
	printf("A soma dos dois numeros e %.2f", resultado);
	
	return 0;
}
	