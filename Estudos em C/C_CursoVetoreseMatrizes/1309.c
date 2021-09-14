#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{
	//Ordenando Vetores pelo M�todos Bubble Sort
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
		Conceito: No m�todo de Pesquisa Sequencial o vetor � percorrido
    at� que seja encontrado o valor desejado ou at� que o vetor
	termine. Este � o m�todo utilizado para se fazer uma pesquisa em
	vetores que n�o est�o ordenados.
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
		Conceito:No m�todo de Pesquisa Bin�ria a l�gica � semelhante quando
	pesquisamos uma palavra no dicion�rio, ou seja, como o dicion�rio
	est� em ordem alfab�tica j� abrimos o mesmo pr�ximo da palavra
	pesquisa e assim sucessivamente. Ele � muito mais r�pido que o m�todo anterior.
	Este m�todo � utilizado em vetores que est�o ordenados, caso
	contr�rio, ele n�o vai funcionar.
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
