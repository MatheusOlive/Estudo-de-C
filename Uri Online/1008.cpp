#include <stdio.h>
 
int main() 
{	
	int qtdTrab, numFunc;
	float recebeHora, salario;
	
	scanf("%d", & numFunc);
	scanf("%d", & qtdTrab);
	scanf("%f", & recebeHora);
	
	salario = qtdTrab * recebeHora;
	
	printf("NUMBER = %d\n", numFunc);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0 ;
}
