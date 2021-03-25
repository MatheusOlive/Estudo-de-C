//Secao 7
//Curso Udemy -
//Aprenda e Domine Uma Das Mais Populares Linguagens de programacao: “A Linguagem C”
//Prof Antonio Henrique Reis

#include <stdio.h>
#include <stdlib.h>

//Estruturas de repeticao

int main ()
{
//lacos de repeticao	
// for - estrutura determinada	
/*
	int numero, resultado;
	
	//inicializacao; teste de repeticao; reinicializacao
	for (int i= 0; i < 5; i++ )
	{
		printf("Digite um numero: ");
		scanf("%d" & numero);
		resultado = numero * 3;
		printf("o resultado foi de: %d \n", resultado)
		
	}
*/

	//exercicio 023
/*
	for(int i= 0; i <= 10; i++)
	{
		printf("%d\n",i);
	}
*/
    
    //exercicio 024
    /*
    for (int i=15; i<21; i++)
	{
		printf("%d\n",i);
	}
*/
    
    // exercicio 025
/*
    for (int i=10; i>=0; i--)
    {
    	printf("%d\n",i);
	}
*/
	
	//exercicio 026
	/*
	int soma = 0, numero;
	
	for (int i= 0; i < 10; i++ )
	{
		printf("Digite um numero: ");
		scanf("%d", & numero);
		soma = soma + numero;	
	}
	
	printf("Soma dos numeros foi de: %d\n", soma);
*/
	
	//exercicio 027
/*	
	int numero, somaPos, somaNeg, zeros;
	
	somaPos = somaNeg = zeros = 0;
	
	for(int i = 0;  i < 20; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		if(numero > 0)
		somaPos = somaPos + numero;
		else if(numero < 0)
		somaNeg = somaNeg + numero;
		else
		zeros++;
		
	}
	
	printf("Soma dos Positivos.....: %d\n", somaPos);
	printf("Soma dos Negativos.....: %d\n", somaNeg);
	printf("Soma dos Zeros.........: %d\n", zeros);			
 */	
 
 /*
 
 //exercicio 028
 int soma = 0;
 
  for (int i = 0; i<=100; i++)
  {
  	soma = soma + i; 
  }
  
  printf("Soma eh de: %d", soma);
*/


// While -- uso ideal-> quantidade indeterminada de repeticoes
/*
	int numero, resultado, contar;

	contar = 0; // inicializacao da variavel contadora
	while(contar < 5)	//teste de repticao
	{
		printf("Digite um numero: ");
		scanf("%d", & numero);
		resultado = numero * 3;
		printf("O resultado foi de : %d \n", resultado);
		contar++; //reinicializacao da variavel contadora
	}	
*/


// exercicio 029
/*
	int numero = 0, qtdDigitada = 0;
	
	while (numero >= 0)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);	
		qtdDigitada++;
	}	
	
	printf("Quantidade de numeros  digitados: %d \n", qtdDigitada);
*/	
	
	
	
	
	
	
	
	
	

	return 0;

}
