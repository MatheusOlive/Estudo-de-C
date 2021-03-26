#include <stdio.h>
 
int main() 
{	
	char funcionario[20];
	double salarioFixo, totalVendas, comissao, recebe;
	
	scanf("%s",& funcionario);
	scanf("%lf",& salarioFixo);
	scanf("%lf",& totalVendas);

	comissao = totalVendas * 0.15;		
	recebe  = salarioFixo + comissao;

	printf("TOTAL = R$ %.2lf\n", recebe);	
	
	
	return 0 ;
}
