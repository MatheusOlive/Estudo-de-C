#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	// for -> usada para quantidades determinadas de repeticoes
	//while quantidade inderteminada de repeteicoes uso ideal
	/*
	int contar, resultado, numero;
	
	contar = 0; // inicializacao da variavel contadora
	while(contar < 5) // teste de repetição
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		resultado = numero * 3;
		printf("O resultado foi: %d \n", resultado);
		
		contar++; //reicinalizacao da variavel contadora;
	}
	*/
	
	/*
	int numero = 0, qtdDigitada = 0;
	
	while ( numero >= 0 )
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		qtdDigitada ++;
	} 
	
	printf("Quantidade de numeros digitados: %d \n", qtdDigitada);
	*/
	
	//errado exercicio 30 
	int numero = 1, numPos, numNeg;
	
	while( numero == 0 )
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);	
		if ( numero > 0 )
		numPos++;
		else
		numNeg--;
	}
	
	printf("Numeros Positivos: %d \n", numPos);
	printf("Numeros Negativos: %d \n", numNeg);
	
	
	
	
	return 0;
}
