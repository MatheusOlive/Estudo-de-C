#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{

	 int numero = 46;
	float valor = 8.37;
	char letra = 'X';
	int valor1, valor2, valor3;
	
	valor1 =  valor2 = valor3 = 0;
	
	printf("Variavel numero.....: %d\n", numero); 
	printf("Variavel valor......: %f\n", valor); 
	printf("Variavel valor......: %10.2f\n", valor); 
	printf("Variavel valor......: %.2f\n", valor); 
	printf("Variavel letra......: %c\n", letra); 
	printf("%d %d %d", valor1, valor2, valor3); "/

	

	int quiloInicial = 200000; 
	int quiloFinal = 207349;
	int quilo;
	
	printf("%d %d", quiloInicial, quiloFinal);
	printf("\n");
	
	quilo = quiloFinal -  quiloInicial ;	
	
	printf("Quilometragem: %d", quilo);


	float media, nota1, nota2, nota3;
	
	nota1 = 3;
	nota2 = 7;
	nota3 = 5;
	
	media = (nota1 + nota2 + nota3)/(3);
	
	printf("A media eh: %.2f \n", media);

	

	float volume, raio, altura;
	
	raio = 3.57;
	altura = 10;
	
	volume = (3.14159 )* (raio * raio) * (altura);
	
	printf("o valor do volume eh: %.2f \n", volume);

	

	float volume,  comprimento, largura, altura;
	
	printf("Digite o valor do comprimento: ");
	scanf("%f", &comprimento);
	printf("Digite o valor da largura: ");
	scanf("%f", &largura);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	
	volume = comprimento  * largura * altura;
	
	printf("O volume do paralelepipedo foi: %.2f \n", volume); 

	
	//30;08


	int valorA, valorB, soma;
	
	printf("Digite um valor: ");
	scanf("%d", &valorA);
	printf("Digite um valor: ");
	scanf("%d", &valorB);
	
	soma = valorA + valorB;
	
	printf("A soma foi: %d \n",soma);
	printf("%d + %d = %d \n", valorA, valorB, soma);



	char nome[80];
	
	printf("Digite um nome: ");
	gets(nome);
	
	printf("Nome lido: %s \n", nome);



    float raio, altura, volume;
 
    printf("Qual eh o raio ? ");
    scanf("%f", &raio);
    printf("qual eh a altura ? ");
    scanf("%f", &altura);
 
    volume = raio * raio * 3.14159 * altura;
 
    printf("O volume eh: %.2f", volume);



    float despesa, lucro, receita;
 
    printf("Qual eh a despesa ? ");
    scanf("%f", &despesa);
    printf("qual eh o receita ? ");
    scanf("%f", &receita);
 
    lucro = receita - despesa;
 
    printf("O lucro eh: %.2f", lucro);

	float nota1, nota2, nota3, media;
	
	printf("Digite a nota 1 do aluno: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2 do aluno: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3 do aluno: ");
	scanf("%f", &nota3);

	
	media = (nota1 + nota2 + nota3)/(3);
	
	printf("A media do aluno eh: %.2f \n", media);
 

	 	
	int anoNascimento, idade, qtdDias,  qtdHoras, qtdMinutos, qtdSegundos;
	
	printf("Em que ano voce nasceu ? ");
	scanf("%d", &anoNascimento);
	printf("\n");	
	
	idade = 2021 - anoNascimento;
	qtdDias = idade * 365;
	qtdHoras = qtdDias * 24;
	qtdMinutos =  qtdHoras * 60;
	qtdSegundos = qtdMinutos * 60;
	
	printf("A idade eh..................: %d \n", idade);
	printf("A quantidadade de dias eh...: %d \n", qtdDias);
	printf("A quantidade de horas.......: %d \n", qtdHoras);
	printf("A quantidade de minutos.....: %d \n", qtdMinutos);
	printf("A quanitidade de segundos...: %d \n", qtdSegundos);

	
	
	return 0;
}
