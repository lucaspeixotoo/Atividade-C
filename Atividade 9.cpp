#include <stdio.h>
#include <math.h>

float soma (float valor1, float valor2, float valor3, float valor4){
	float conta1 = (valor1+valor2+valor3+valor4);
	return conta1;
}

float media (float conta1){
	float conta2 = (conta1/4);
	return conta2;
}

int main (void){
	float grade1; 
	float grade2; 
	float grade3;
	float grade4;
	
	printf("Digite a sua nota do primeiro bimestre:\n");
	scanf("%f", &grade1);
	
	printf("Digite a sua nota do segundo bimestre:\n");
	scanf("%f", &grade2);
	
	printf("Digite a sua nota do terceiro bimestre:\n");
	scanf("%f", &grade3);
	
	printf("Digite a sua nota do quarto bimestre:\n");
	scanf("%f", &grade4);
	
	
	float resposta = media(soma(grade1, grade2, grade3, grade4));
	printf("Sua media e %.2f", resposta);

	return 0;	
}