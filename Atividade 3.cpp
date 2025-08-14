#include <stdio.h>
#include <math.h>

int main(void){
    printf("Digite a temperatura em graus Fahrenheit (F)\n");
	float TF;
	scanf("%f", &TF);
    float TC=5*(TF-32)/9;
	printf("A temperatura equivalente em graus Celsius e %.2f", TC);    
    
	getchar();
	return 0;
}