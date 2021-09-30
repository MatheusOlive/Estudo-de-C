#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	
	int valorA, valorB;
	
	printf("Digite um valor: ");
	scanf("%d", &valorA);
	printf("Digite outro valor: ");
	scanf("%d", &valorB);
	
	printf("\n");
	
	printf("valorA >  valorB  resulta em %d \n", valorA > valorB);
	printf("valorA >= valorB  resulta em %d \n", valorA >= valorB);
	printf("valorA <  valorB  resulta em %d \n", valorA < valorB);
	printf("valorA <  valorB  resulta em %d \n", valorA <= valorB);
	printf("valorA == valorB  resulta em %d \n", valorA == valorB);
	printf("valorA != valorB  resulta em %d \n", valorA != valorB);					
		
	// 1 == verdadeiro; 0 == falso 
	
	
	
	int numero;
	 
	printf ("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero > 0)   	//desvio condicional simples 
	{
		printf("Numero lido eh posivitivo: \n");
	}
	*/
	
	
	int valorX;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &valorX);
	
	if(valorX > 1000)
	{
		printf("numero maior do que 1000 \n");
	}
	
	
	
	
	int valorY ;
	
	printf("Digite um numero: ");
	scanf("%d", &valorY);
	
	// desvio condicional composto 
	if(valorY > 0 )
	{
		printf("Positivo \n");		
	}	
	else
	{
		printf("Negativo \n");
	}
	*/
	
		
	int valor1, valor2;
	
	printf("Digite um valor: ");
	scanf("%d", &valor1);
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	
	if(valor1 > valor2)
	{
		printf("Primeiro valor maior que o segundo: ");
	}
	else
	{
		printf("Segundo valor maior que o primeiro: ");
	}
	*/
	
	
	int numeroQualquer;
	
	printf("Digite um numero: ");
	scanf("%d", &numeroQualquer);
	
	
	if( numeroQualquer != 1000)
	{
		printf("Numero diferente de 1000 \n");
	}
	else
	{
		printf("Numero igual a 1000 \n");
	}
	
	
	
	float resultado, valorA, valorB;
	
	printf("Digite um valor: ");
	scanf("%f", &valorA);
	printf("Digite outro valor: ");
	scanf("%f", &valorB);
	
	if(valorA > valorB)
	 resultado = valorA/valorB;
	else
	 resultado = valorB/valorA;
	 
	 
	printf("O resultado eh: %.3f", resultado);
	
	
	
	float receita, despesa, res;
	
	printf("Qual foi a despesa ? ");
	scanf("%f", &despesa);
	printf("Qual foi a receita ? ");
	scanf("%f", &receita);
	
	printf("\n");
	
	if (receita > despesa)
	{
		res = receita - despesa;
		printf("O lucro eh de: %.2f \n", res);
	}
	
    else
	{
		res = despesa - receita;
		printf("O prejuizo eh de %.2f \n", res);
	}
	
	
	
	int num1;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	//Desvio condicional encadeado
	if(num1 > 0 )
		printf("Numero positivo");
	else if ( num1 < 0)
		printf("Numero negativo");
	else
		printf("Esse numero eh ZERO");

    	   
	float salarioVelho, salarioNovo, taxaReajuste;
	
	printf("Digite  o salario do funcionario: ");
	scanf("%f", &salarioVelho);
	
	if (salarioVelho <= 1000)
	{
		taxaReajuste = 15;
	}
	else if(salarioVelho <= 2000)
	{
		taxaReajuste = 10;
	}
	else
	{
		taxaReajuste = 5;
	}
	
	salarioNovo = salarioVelho + (salarioVelho * (taxaReajuste/100));
	
	printf("Salario Velho....: R$ %.2f \n", salarioVelho);
	printf("Taxa de reajuste.:    %.1f%% \n", taxaReajuste);
	printf("Salario Novo.....: R$ %.2f \n", salarioNovo);


	float salarioBruto, salarioLiquido, taxaInss, desconto; 
	
	printf("Digite o valor do salario Bruto: ");
	scanf("%f", &salarioBruto);
	
	if(salarioBruto <= 1317.07)
	taxaInss = 8;
	else if (salarioBruto <= 2195.12)
	taxaInss = 9;
	else 
	taxaInss = 11;
	
	desconto = ( salarioBruto * (taxaInss/100));
	salarioLiquido = salarioBruto - desconto;
	
	printf("O valor do salario Bruto...: %.2f \n", salarioBruto);
	printf("O valor da taxa de INSS....: %.2f%%\n", taxaInss);
	printf("O valor de desconto de INSS: %.2f\n", desconto);
	printf("O valor do salario liquido.: %.2f \n", salarioLiquido);


	float salarioHora, salarioBruto, salarioFamilia, salarioLiquido, valorFilho;
	int quantTrab, quantFilhos;
	
	printf("Qual o salario hora do professor: ");
	scanf("%f", &salarioHora);
	printf("Quantas horas foram trabalhadas ? ");
	scanf("%d", &quantTrab);
	printf("Quantos filhos tem a familia ? ");
	scanf("%d", &quantFilhos);	
	
	
	salarioBruto = salarioHora * quantTrab;
	
	if(salarioBruto <= 700)
	valorFilho = 8.5;
	else if (salarioBruto <= 1000)
	valorFilho = 6.5;
	else
	valorFilho = 2.5;
	
	
	salarioFamilia = valorFilho * quantFilhos;
	salarioLiquido = salarioBruto + salarioFamilia;
	
	printf("O valor do salario Bruto....: %.2f\n", salarioBruto);
	printf("O valor do salario familia..: %.2f\n", salarioFamilia);
	printf("O valor do salario liquido..: %.2f\n", salarioLiquido);


	int codigo;
	
	printf("Digite um codigo numerico: ");
	scanf("%d", &codigo);
	
	//desvio condicional de multiplos casos 
	switch(codigo)
	{
		case 1:
			printf("Panela\n");
			break;
		case 2:
			printf("Chaleira\n");
			break;
		case 3:
			printf("Prato\n");
			break;
		default:	
			printf("Codigo invalido\n");
			break;
	}


	int cod;
	
	printf("Digite um numero de 0 ate 10: ");
	scanf("%d", &cod);
	
	switch(cod)
	{
		case 1:
			printf("UM");
			break;	
		case 2:
			printf("DOIS");
			break;	
		case 3:
			printf("TRES");
			break;
		case 4:
			printf("QUATRO");
			break;
		case 5:
			printf("CINCO");
			break;
		case 6:
			printf("SEIS");
			break;
		case 7:
			printf("SETE");
			break;
		case 8:
			printf("OITO");
			break;
		case 9:
			printf("NOVE");
			break;
		case 10:
			printf("DEZ");
			break;
		case 0:
			printf("ZERO");
			break;
		default:
			printf("numero digitado esta fora da faixa");
			break;
	} 

	
	
	
	
	return 0;
}
