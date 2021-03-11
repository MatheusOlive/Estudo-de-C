//Curso Udemy - 
/*
Aprenda e Domine Uma Das Mais Populares Linguagens de programação: “A Linguagem C”
Prof Antonio Henrique Reis
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
 // seção 4 variáveis
 

 /*
 int numero; //declaração de váriaveis.
 float nota1, nota2, nota3, media;
 char letra;
 
 numero = 39;
 
 printf("O valor da variavel numero: %d\n", numero);
 
 numero = numero + 10;
 
 printf("O novo valor da variavel numero: %d\n", numero); 
 */
 
 //iniciando váriaveis
 
    int numero = 46;
    float valor = 8.37;
    char letra = 'X';
    int valor1, valor2, valor3;
 
    valor1 = valor2 = valor3 = 0;
 
    printf("Variavel numero...: %d \n", numero);
    printf("Variavel numero...: %f \n", valor);
    printf("Variavel numero...: %10.2f \n", valor); // 10 numeros de espaço antes de começar e dois de limite aós o ponto 
    printf("Variavel numero...: %.2f \n", valor); // teste de float .2 somente dois numeros apareceram após o ponto.
    printf("Variavel numero...: %c \n", letra); //char
    printf("%d %d %d \n", valor1, valor2, valor3);
 
 
 
 return 0 ;


}

