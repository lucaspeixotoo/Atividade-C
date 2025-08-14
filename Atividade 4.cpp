#include <stdio.h>
#include <math.h>

int main (void){
	printf("Digite a temperatura em graus Celsius: ");
	float TC;
	
	scanf("%f", &TC);
	float TF=TC*1.8+32;
	
	printf("A temperatura equivalente em Fagrenheit e %.2f", TF);
	getchar();
	return 0;
}