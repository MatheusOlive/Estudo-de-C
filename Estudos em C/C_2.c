//Curso Udemy - 
/*
Linguagens de programacao: area Linguagem C
Prof Antonio Henrique Reis
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
 // seção 4 variaveis
 

 
 int numero; //declaração de váriaveis.
 float nota1, nota2, nota3, media;
 char letra;
 
 numero = 39;
 
 printf("O valor da variavel numero: %d\n", numero);
 
 numero = numero + 10;
 
 printf("O novo valor da variavel numero: %d\n", numero); 
 
 
 //iniciando váriaveis
 
 
    int numero1 = 46;
    float valor = 8.37;
    char letra = 'X';
    int valor1, valor2, valor3;
 
    valor1 = valor2 = valor3 = 0;
 
    printf("Variavel numero...: %d \n", numero1);
    printf("Variavel numero...: %f \n", valor);
    printf("Variavel numero...: %10.2f \n", valor); // 10 numeros de espaco antes de comecar e dois de limite antes do ponto 
    printf("Variavel numero...: %.2f \n", valor); // teste de float .2 somente dois numeros apareceram apÃ³s o ponto.
    printf("Variavel numero...: %c \n", letra); //char
    printf("%d %d %d \n", valor1, valor2, valor3);
 
 
 // execicicio 005
 
 int Quilometragem, QuiloI, QuiloF;
 
 QuiloI = 200000;
 QuiloF = 207349;
 
 Quilometragem = QuiloF - QuiloI; // diferença
 
 printf("A quilometragem do automovel ...: %d \n",Quilometragem); 
 
 
 //exercicio 006
 
 float nota1, nota2, nota3;
 float media;
 
 //nota1 = nota2 = nota3 = 8.22345;
 nota1 = 4;
 nota2 = 6;
 nota3 = 10;
 
 
 media = (nota1+ nota2 + nota3)/3;
 
 printf("\t\ A media do aluno..: %1.2f \n", media);
 
 
 
 
 //exercicio 007
 
 float raio, altura, volume;

 raio = 10;
 altura = 5;
 volume = 3.14459*raio*raio*altura;
 printf("O Volume..: %.2f",volume);
 
 
 return 0 ;


}

