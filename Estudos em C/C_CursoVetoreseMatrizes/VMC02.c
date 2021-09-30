#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{
	//Ordenando Vetores pelo Métodos Bubble Sort
	/*
	 Conceito o metodo de ordenar vetores citados: "Bubble sort"
	eh o metodo da bolha que serve para colocar em ordem crescente os conteudos 
	em um vetor 
	*/
	

	// exemplo ordenando os numeros na ordem
	int vetor[6], i, pos, ultimo, aux;
	
	for(i = 0; i < 6; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
	}
	pos = 0; 
	ultimo = 5;
	while (ultimo != 0)
	{
		while(pos != ultimo)
		{
			if(vetor[pos] > vetor[pos+1])
			{
				aux = vetor[pos];
				vetor[pos] = vetor[pos+1];
				vetor[pos + 1] = aux;
			}			
			pos = pos +1;
		}
		pos = 0; 
		ultimo = ultimo - 1;
	}
	
	printf("\n");
	
	for(i=0; i < 6; i++)
	{
		printf("Elemento %d do Vetor tem o valor: %d \n", i, vetor[i]);
	}
		

	
	//Metodo pesquisa sequencial 
	/*
		Conceito: No método de Pesquisa Sequencial o vetor é percorrido
    até que seja encontrado o valor desejado ou até que o vetor
	termine. Este é o método utilizado para se fazer uma pesquisa em
	vetores que não estão ordenados.
	*/
	

	int vetor[6], i, valor;
	
	for(i = 0; i < 6 ; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &valor);
	}
	
	printf("Digite um valor a ser pesquisa no vetor: ");
	scanf("%d", &valor);
	
	i=0;
	
	while(i <= 5 && valor[i] != valor)
	{
		i++;
	}
	
	if(vetor[i] == valor)
	{
		printf("O valor  %d  foi encontrado na posicao %d\n");
	}
	else
	{
		printf("O valor nao foi encontrado no vetor \n");
	}
	
	
	//Metodo pesquisa binaria
	/*
		Conceito:No método de Pesquisa Binária a lógica é semelhante quando
	pesquisamos uma palavra no dicionário, ou seja, como o dicionário
	está em ordem alfabética já abrimos o mesmo próximo da palavra
	pesquisa e assim sucessivamente. Ele é muito mais rápido que o método anterior.
	Este método é utilizado em vetores que estão ordenados, caso
	contrário, ele não vai funcionar.
	*/
	
	int vetor[6], i;
	int valor, primeira, ultima, metade;
	int achou;
	
	for(i = 0; i < 6; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite um valor a ser pesquisado no vetor: ");
	scanf("%d", &valor);
	
	primeira = 0;
	ultima = 5;
	achou = 0;
	
	while(primeira <= ultima && achou == 0)
	{
		metade = (primeira + ultima)/2;
		
		if(vetor[metade] == valor);
		achou = 1;
		
		if(vetor[metade] < valor)
		primeira = metade + 1;
		
		else
		ultima = metade - 1;
	}
	
	if(achou == 1)
	{
		printf("O valor %d foi encontrado na posicao %d %d %d %d\n", valor, metade);
	}
	else
	{
		printf("O valor nao foi encontrado no vetor \n");
	}
	
	return 0;
}
