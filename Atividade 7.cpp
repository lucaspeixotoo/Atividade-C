#include <stdio.h>
#include <math.h>

float conversor (float metros){
	float centimetros = metros * 100;
	return centimetros;
}

int main (void){
	float metros;
	printf("Digite seu valor em metros: \n");
	scanf("%f", &metros);
		
	float centimetros = conversor(metros);
	printf("O valor de %.2f metros em centimetros e %.2f centimetros", metros, centimetros);
	return 0;
}