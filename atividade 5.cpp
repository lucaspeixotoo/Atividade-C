#include <stdio.h>
#include <math.h>


    float questaoA (int numero1, int numero2, float numero3){
    
		float resultadoA = (numero1*2) * (numero2/2);   
		return resultadoA;
}
	float questaoB (int numero1, int numero2, float numero3){
		
		return ((numero1 * 3) + numero3);
}
	
	float questaoC (int numero1, int numero2, float numero3){
		
		float resultadoC = numero3 * numero3 * numero3;
		return resultadoC;
}
	
	int main(void){

	int numero1;
	int numero2;
	float numero3;
	
	printf("Digite um numero inteiro: \n");
	scanf("%i", &numero1);
	printf("Digite outro numero inteiro: \n");
	scanf("%i", &numero2);
	printf("Digite um numero real: \n");
	scanf("%f", &numero3); 	

	float respostaA = questaoA(numero1, numero2, numero3);
    float respostaB = questaoB(numero1, numero2, numero3);
    float respostaC = questaoC(numero1, numero2, numero3);

	printf("O produto do dobro do primeiro numero com a metade do segundo numero e %.2f\n", respostaA);
	printf("A soma do triplo do primeiro numero com o terceiro numero e %.2f\n", respostaB);
	printf("O valor do terceiro numero elevado ao cubo e %.2f\n", respostaC);
	
	getchar ();
}