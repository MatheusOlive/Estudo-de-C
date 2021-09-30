#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	
	//int numero, resultado;
	
	// estrutura de repeticao for
	
	//i = i +1 == i++
	//for (int i = 0; i < 5; i++ i = i+1)

	
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		resultado = numero * 3;
		printf("O resultado foi: %d \n", resultado);
		printf("\n");
	} 


	for (int i = 0; i <= 10; i++)
	{
		printf("%d \n", i);
	}


	for(int i = 15; i <= 20; i++)
	{
		printf("%d", i);
		printf("\n");
	}


	for(int i = 10; i>=0; i--)
	{
	    printf("%d", i);	
	}


	int numero, soma = 0;
	
	for (int i = 0; i < 10; i++)
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero);
	    soma = soma + numero; 
	}	
	
	printf("Soma dos valores digitados: %d \n", soma);


	int numero, somaPos, somaNeg, somaZero;
	
	somaPos = somaNeg = somaZero = 0;
	
	for (int i = 0; i < 6; i++)
	{ 
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		if( numero > 0)
		somaPos = somaPos + numero;
		else if ( numero < 0 ) 
		somaNeg = somaNeg + numero ;
		else
		somaZero++;
		
	}
	
	printf("Soma dos valores Positivos digitados: %d \n", somaPos);
	printf("Soma dos valores Negativos digitados: %d \n", somaNeg);
	printf("Quantidade de zeros digitados.......: %d \n", somaZero);	

	
	int soma;
	soma = 0;
	
	for (int i = 0; i <= 100; i++)
	{
		soma = soma + i ;
	}
	
	printf("Valor eh: %d \n", soma);
	
	
	
	return 0;	
}
