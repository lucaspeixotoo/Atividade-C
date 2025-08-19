#include <stdio.h>
#include <math.h>

float salary (int valor1, float valor2, int valor3){
	float operation = valor1*valor2*valor3;
	return operation;
}

int main(void) {
	int work_hours;
	float wage;
	int work_days;
	
	printf("Quanto voce ganha por hora trabalhada?\n");
	scanf("%f", &wage);
	
	printf("Quantas horas voce trabalhar por dia?\n");
	scanf("%i", &work_hours);
	
	printf("Quantos dias voce trabalha por mes?\n");
	scanf("%i", &work_days);
	
	float resultado = salary(work_hours, wage, work_day);
	
	printf("O seu salario mensal e de %.2f reais", resultado);
	
	return 0;
}