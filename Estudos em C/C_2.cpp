//Curso Udemy - 
/*
Aprenda e Domine Uma Das Mais Populares Linguagens de programa��o: �A Linguagem C�
Prof Antonio Henrique Reis
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
 // se��o 4 vari�veis
 

 /*
 int numero; //declara��o de v�riaveis.
 float nota1, nota2, nota3, media;
 char letra;
 
 numero = 39;
 
 printf("O valor da variavel numero: %d\n", numero);
 
 numero = numero + 10;
 
 printf("O novo valor da variavel numero: %d\n", numero); 
 */
 
 //iniciando v�riaveis
 
    int numero = 46;
    float valor = 8.37;
    char letra = 'X';
    int valor1, valor2, valor3;
 
    valor1 = valor2 = valor3 = 0;
 
    printf("Variavel numero...: %d \n", numero);
    printf("Variavel numero...: %f \n", valor);
    printf("Variavel numero...: %10.2f \n", valor); // 10 numeros de espa�o antes de come�ar e dois de limite a�s o ponto 
    printf("Variavel numero...: %.2f \n", valor); // teste de float .2 somente dois numeros apareceram ap�s o ponto.
    printf("Variavel numero...: %c \n", letra); //char
    printf("%d %d %d \n", valor1, valor2, valor3);
 
 
 
 return 0 ;


}

