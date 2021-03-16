//Curso Udemy -
/*
Aprenda e Domine Uma Das Mais Populares Linguagens de programacao: “A Linguagem C”
Prof Antonio Henrique Reis
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	//secao 5 Funcoes de entradas e saidas de dados
	float volume, comprimento, altura , largura ; //delacaracao de variaveis

	printf ("Digite o valor do comprimento: "); //entrada de dados (lendo)
	scanf("%f", &comprimento);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	printf("Digite o valor da largura: ");
	scanf("%f", &largura);

	volume = comprimento * altura * largura; //processamento de dados calculando

	printf("O volume do pararelepido foi: %.2f\n ", volume);
	

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
   
   
   
   
   //lendo uma string
   char nome[80];
   
   printf("Digite um nome: ");
   gets(nome);
   
   printf("Nome lido: %s \n", nome); 
   
   
   
   //exercicio 008
   int QuiloIn, QuiloFim, Diferenca;
   
   printf ("Digite a quilometragem inicial: ");
   scanf ("%d",&QuiloIn);
   printf ("Digite a quilometragem final: ");
   scanf ("%d",&QuiloFim);
   
   Diferenca = QuiloFim - QuiloIn ;
   
   printf ("A diferenca de quilometragem: %d" \n, Diferenca);

   
   
   
   //exercicio 009
   float Volume, Raio, Altura;
   
   printf ("Digite o raio do cilindro.: ");
   scanf ("%f",&Raio);
   printf ("Digite a altura do cilindro.: ");
   scanf ("%f", &Altura);
   
   Volume = Raio * Raio * Altura * 3.14159;
    
   printf("O volume do cilindro .: %.2f\n", Volume);

  
  
   
   //exercicio 010
 
   //declaracao de dados
   float Despesa, Receita, Lucro; 
   
   //Entrada de dados
   printf("Receita da empresa.: ");
   scanf("%f", &Receita);
   printf("Despesas da empresa.: ");
   scanf("%f", &Despesa);
   
   //Processamento de dados
   Lucro = Receita - Despesa;
   
   //saida de dados
   printf("O lucro foi de.: %.3f\n", Lucro);

   
   
   
   //exercicio 011
   float nota1, nota2, nota3, media;
   
   printf ("Digite a primeira nota.: ");
   scanf ("%f", &nota1);
   printf ("Digite a segunda nota.: ");
   scanf ("%f", &nota2);
   printf ("Digite a terceira nota.: ");
   scanf ("%f", &nota3);
   
   media = (nota1+ nota2 + nota3)/3;
   
   printf("A media foi de .: %.2f\n", media); 

   
   
   
   //exercicio 012
   int anoNascimento, idade, QtdDias, QtdHoras, QtdMinutos, QtdSegundos;
   
   printf("Em que ano nasceu ? ");
   scanf("%d", &anoNascimento);
   
   idade = 2021 - anoNascimento;
   QtdDias = idade * 365;
   QtdHoras = QtdDias * 24;
   QtdMinutos = QtdHoras * 60;
   QtdSegundos = QtdMinutos * 60;
   
   printf("A idade: %d\n\nQuantidade de dias: %d\nQuantidade de horas: %d\nQuantidade de minutos: %d\nQuantidade de segundos: %d\n",  
   idade, QtdDias, QtdHoras, QtdMinutos, QtdSegundos);
   
   
   
   
   
   
   
   
   
   
   
	return 0 ;
}
