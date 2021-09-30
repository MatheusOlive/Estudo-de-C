//	Curso Vetores e Matrizes



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main ()
{

	// sao variaveis agrupadas sobre o mesmo tipo de dado e o mesmo tipo de informacao
	
	// Declaracao de um vetor
	float notas[6]; 
	int i;
	float media=0;
	
	
	// lendo dados para um vetor
	for( i = 0; i < 6; i++)
	{
		printf("Digite a nota %d: ", i+1);
		scanf("%f", &notas[i]);
		media = media + notas[i]; //somando as notas
	}
	
	media = media/6; // calculando a media 
	
	//Mostrando os dados armazenados em um vetor
	for(i = 0; i < 6; i++)
	{
		printf("Nota %d: %.2f \n", i+1,  notas[i]);
	}
	
	printf("A media do aluno foi: %.2f \n", media);

	
	
	

	// exercicio soma dos vetores
	
	//Declracao dos vetores
	int vetor[10], soma, i;
	
	soma =0;
	
	//Leitura dos vetores
	
	for(i =0;  i < 10; i++)
	{
		printf("Digite o elemento %d do vetor: ", i + 1);
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];	
	}
	
	//mostrar o valor 
	for (i=0; i < 10; i++)
	{
		printf("Elemento %d do vetor %d \n", i + 1, vetor[i]);
	}
	
	printf("A soma dos elementos do vetor: %d \n", soma);

	
	

	int vetA[20], vetB[20], vetC[20], i;
	
	
	
	for(i=0; i<20; i++)
	{
		printf("Digite o elemento %d do vetor A: ", i + 1);
		scanf("%d", &vetA[i]);
		printf("Digite o elemento %d do vetor B: ", i + 1);
		scanf("%d", &vetB[i]);	
		
		vetC[i] = vetA[i] + vetB[i];
		
	}
	
	for(i=0; i<20; i++)
	{
		printf("%d + %d  = %d \n", vetA[i], vetB[i], vetC[i]);
	}

	
	

	//matrizes- vetores multidimensionais
	// sao variaveis agrupadas sob o mesmo nome e que tenham o mesmo tipo de dado e o mesmo tipo de informacao
	
	// indice da linha  -> i; indice da coluna j
	
	
	//declaracao da matriz 
	float notas[5][6]; // 5x6 = 5 alunos e 6 notas escolares
	float media;
	int i,j ; // declaracao dos indices para a linha e para a coluna 
	
	//lendo os dados da matriz
	for (i= 0; i<5; i++) // lendo as informacoes de cada aluno
	{
		for(j=0; j<6; j++) //lendo as informacoes de cada nota de um aluno 
		{
			printf("Digite uma nota %d do aluno %d: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
		}
		
	}
	
	printf("\n");
	
	//mostrando a matriz
	for(i =0; i<5; i++) //aluno 
	{
		media =0;
		for(j = 0; j < 6; j++) // as notas do aluno 
		{
			printf("A nota %d do aluno %d foi %.2f \n", j+1, i+1, notas[i][j]);
			media = media + notas[i][j];
		}
		media = media/6;
		printf("A media do aluno foi: %.2f \n\n\n", media);
	}

	
	float caixa[3][6];
	int i, j ;
	
	//lendo os dados da matriz
	i = 0;
	
	for(j = 0; j < 6; j++)
	{
		printf("Digite a receita do mes: %d: ", j+1);
		scanf("%f", &caixa[i][j]);
	}
	
	printf("\n");
	
	i = 1; //lendo as despesas
	for(j = 0; j < 6; j++)
	{
		printf("Digite a Despesa do mes: %d: ", j+1);
		scanf("%f", &caixa [i][j]);
	}
	
	printf("\n");
	
	// mostrando os dados armazenados 
	for(j = 0; j < 6; j++)
	{
		printf("Receita do mes de %d foi %.2f  \n", j+1, caixa[0][j]);
		printf("Despesa do mes de %d foi %.2f  \n", j+1, caixa[1][j]);
		printf("\n");
		caixa[2][j] = caixa [0][j] - caixa[1][j];
		printf("Resultado do mes de %d foi %.2f \n", j+1, caixa[2][j]);
	}
	
	
	
	
	return 0;
}
