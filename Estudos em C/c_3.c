//Curso Udemy - 
/*
Aprenda e Domine Uma Das Mais Populares Linguagens de programacao: “A Linguagem C”
Prof Antonio Henrique Reis
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	float volume, comprimento, altura , largura ; //delacaracao de variaveis
	
	printf ("Digite o valor do comprimento: "); //entrada de dados (lendo)
	scanf("%f", &comprimento);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	printf("Digite o valor da largura: ");
	scanf("%f", &largura);
	
	volume = comprimento * altura * largura; //processamento de dados calculando
	
	printf("O volume do pararelepido foi: %.2f\n ", volume);
	
	
	
	
	
	
	
	
	
	return 0 ;
}
