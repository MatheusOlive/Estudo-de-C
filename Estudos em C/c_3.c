//Curso Udemy -
/*
Aprenda e Domine Uma Das Mais Populares Linguagens de programacao: “A Linguagem C”
Prof Antonio Henrique Reis
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	//secao 5 Funcoes de entradas e saidas de dados

	/*
	float volume, comprimento, altura , largura ; //delacaracao de variaveis

	printf ("Digite o valor do comprimento: "); //entrada de dados (lendo)
	scanf("%f", &comprimento);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	printf("Digite o valor da largura: ");
	scanf("%f", &largura);

	volume = comprimento * altura * largura; //processamento de dados calculando

	printf("O volume do pararelepido foi: %.2f\n ", volume);
	*/

	int valorA, valorB, soma; //declaracao da variaveis

	printf ("Digite um numero inteiro: ");
	scanf  ("%d", &valorA);
	printf ("Digite um numero inteiro: ");
	scanf  ("%d", &valorB);

	//Processamento de dados
	soma = valorA + valorB;

	//saida de dados
	printf("A soma foi: %d \n",soma);
	printf("%d + %d = %d \n",valorA, valorB, soma);

	return 0 ;
}
