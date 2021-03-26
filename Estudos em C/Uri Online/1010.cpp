#include <stdio.h>
 
int main() 
{	
    int cod1, cod2, qte1, qte2;
    double preco1, preco2, total;
	
	scanf("%d %d %lf ", &cod1, &qte1, &preco1);
	
	scanf("%d %d %lf", & cod2, &qte2, &preco2);
	
	total = preco1 * qte1 + preco2 * qte2;
	
	printf("VALOR A PAGAR: R$ %.2lf\n",total);
	return 0 ;
}
