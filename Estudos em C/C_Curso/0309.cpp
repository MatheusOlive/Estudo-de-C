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
	
	/*
	int numero = 99, numPos = 0, numNeg = 0;
	
	while( numero != 0 )
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);	
		if ( numero > 0 )
		numPos = numPos + numero;
		else
		numNeg = numNeg + numero;
	}
	
	printf("Numeros Positivos: %d \n", numPos);
	printf("Numeros Negativos: %d \n", numNeg);
	*/
	
	/*
	int numero, soma = 0 , qtdLido = 0;
	float media ;
	char resposta = 's';
	
	while(resposta == 's')
	{
		printf("Digite um numero: ");
		scanf("%d", & numero);
		
		soma += numero ; //soma = soma + numero; -= *= /= %=
		qtdLido++;
		
		printf("Deseja digitar outro numero: (s/n)? ");
		resposta = _getche();
		printf("\n\n");
	}
	
	media = ((float)soma / (float)qtdLido); // cast forcando o resultado a ser float e economizando memoria 
	printf("A media dos  numeros lidos foi: %.3f \n", media);	
	*/
	
	
	/*
	float numero, numero2, numero3;
	float media;
	char resposta = 's';
	
		while(resposta == 's')
	{
		printf("Digite um numero.......: ");
		scanf("%f", &numero);
		
		printf("Digite segundo numero..: ");
		scanf("%f", &numero2);
		
		printf("Digite terceiro numero.: ");
		scanf("%f", &numero3);
		
		media = (numero + numero2 + numero3)/3;
		
		printf("A media do aluno foi.: %.2f\ns", media);
		printf("\n");
		
		if (media >= 6)
		{
			printf("Aluno Aprovado");
		}
		else
		{
			printf("aluno Reprovado");			
		}
		
		printf("\n");
		
		printf("Deseja digitar nota de outro aluno: (s/n)? ");
		resposta = _getche();
		printf("\n\n");
	}	
	*/
	
	
	
		int codigo, divisor1 = 0, divisor2 = 0, divisor3 = 0, idadeSol = 0, idadeCas = 0, idadeDiv = 0;
		float dividendo1 = 0, dividendo2 = 0, dividendo3 = 0;
		char resposta = 's';
		float mediaSolt, mediaDiv, mediaCas;
		
		while(resposta == 's')
		{
			system("cls");
			printf("Digite um codigo de  1 - solteiro / 2 - casado / 3 - Divorciado: ");
  			scanf("%d", & codigo);
  			
  			switch (codigo)
  			{
				case 1:					
				printf("Digite a sua idade: ");
				scanf("%d", & idadeSol);
				dividendo1 += idadeSol;
				divisor1++;		
				break;
				
				case 2:								
				printf("Digite a sua idade: ");
				scanf("%d", & idadeCas);
				dividendo2 += idadeCas;				
				divisor2++;							
				break;
				
				case 3:				
				printf("Digite a sua idade: ");
				scanf("%d", & idadeDiv);
				dividendo3 += idadeDiv; 				
				divisor3++;
				break;
				
				default:
				printf("Foi digitado o codigo errado");
				break;
			}
			
		printf("\n");	
		printf("Deseja digitar nota de outra pessoa: (s/n)? ");
		resposta = _getche();
		printf("\n\n");	
				
		}
		
  		mediaSolt = dividendo1 / divisor1;	
   		mediaCas = dividendo2 / divisor2; 			
    	mediaDiv = dividendo3 / divisor3;			
  		
		printf("A media dos  numeros lidos foi: %.2f \n", mediaSolt);
		printf("A media dos  numeros lidos foi: %.2f \n", mediaCas);
		printf("A media dos  numeros lidos foi: %.2f \n", mediaDiv);
		
		
	
	return 0;
}
