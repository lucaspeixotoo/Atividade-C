#include <stdio.h>
#include <math.h>

int main(void){
	
	int tipoDeDado;
	float dado;
	float pi = 3.14;
	
	printf("Forneça o valor da medida: \n");
	scanf("%f", &dado);
	
	printf("Digite qual o tipo de medida fornecida: \n 1 para raio\n 2 para diametro");
	scanf("%i", &tipoDeDado);
	
	if (tipoDeDado == 1) { 
	return  printf ("A area do circulo e %.2f", (pi * dado * dado));
	}
	
	else if (tipoDeDado == 2) {
	 return printf("A area do circulo e %.2f", (pi / 4) * (dado*dado));
	 }
	
	else{
		return printf("Penis");
	}
}
