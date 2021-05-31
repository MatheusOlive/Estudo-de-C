#include <stdio.h>
#include <stdlib.h>

int main()
{

 // declaracao do vetor
 int vetor[10], soma, i;
 
 soma = 0;
 
 // Leittura
 
 for(i = 0 ; i < 10; i++)
 {
 	printf ("Digite  o elemento %d do vetor: ", i + 1 );
 	scanf ("%d", &vetor[i]);
 	soma = soma + vetor[i];
 } 
 	
 	// Mostrar o vetor
 	
 	for(i = 0 ; i < 10; i++)
 	{
 		printf("Elemento %d do vetor %d \n : ", i + 1);	
	}
	
	printf("A soma dos elementos do vetor: %d \n", soma);
	
	
 	
  return 0;		
	  
}
