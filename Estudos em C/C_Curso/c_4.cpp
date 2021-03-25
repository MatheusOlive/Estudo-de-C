//Secao 6
//Curso Udemy -
//Aprenda e Domine Uma Das Mais Populares Linguagens de programacao: “A Linguagem C”
//Prof Antonio Henrique Reis

#include <stdio.h>
#include <stdlib.h>

int main() 
{

//operadores relacionais.cpp
    int valorA, valorB;
	
	printf("Digite um valor: ");
	scanf("%d", & valorA);
	printf("digite outro valor: ");
	scanf("%d", & valorB);
	
	printf("valorA > valorB resultado em %d \n", valorA > valorB);
	printf("valorA >= valorB resultado em %d \n", valorA >= valorB);
	printf("valorA < valorB resultado em %d \n", valorA < valorB);
	printf("valorA <= valorB resultado em %d \n", valorA <= valorB);
	printf("valorA == valorB resultado em %d \n", valorA == valorB);
	printf("valorA != valorB resultado em %d \n", valorA != valorB);

//Desvio condicional simples	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", & numero);
	
	if  (numero > 0)
	    printf ("numero lido eh: POSITIVO\n");   
	    
//Exercicio 013	
	int num1;
	
	printf("Digite um numero: ");
	scanf("%d", & num1);	
	
	if (num1 > 1000)
		printf("numero lido eh maior que mil");		
	
//Desvio condicional composto	
	int numero2;
	
	printf("Digite um numero: ");
	scanf("%d", & numero2);
	
	if (numero2 > 0)
		printf("numero lido eh positivo\n");
	else
		printf("numero lido eh negativo\n");	    
	
//Exercicio 014
	int a, b;
	
	printf("Digite um numero: ");
	scanf("%d",& a);
	printf("Digite um segundo numero: ");
	scanf("%d",& b);
	printf("\n");
	
	if(a > b)
		printf("O primeiro valor eh o maior\n");
	else
	 	printf("O segundo valor eh maior\n");	

//exercicio 015
	int valorX;
	
	printf("Digite um numero: ");
	scanf("%d", & valorX);
	printf("\n");
	
	if (valorX != 1000)
		printf("valor eh diferente de mil\n");
	else
		printf("valor eh igual a mil\n");

//exercicio 016	
	float valorI, valorP, valorF;
	
	printf ("Digite um numero: ");
	scanf ("%f", & valorI);
	printf ("Digite outro numero: ");
	scanf ("%f", & valorP);
	
	if(valorI > valorP)
		valorF = valorI/valorP;
	else
		valorF = valorP/valorI;
		
	printf("o valor da divisao eh: %.3f", valorF);		

//exercicio 017
	float Receita, Despesa;
	
	printf("Digite a receita: ");
	scanf("%f", & Receita);
	printf("Digite a despesa: ");
	scanf("%f", & Despesa);
	
	if (Receita > Despesa)
		printf ("Lucro",Receita);
	else
		printf ("Prejuizo", Despesa);

//Desvio Condicional Encadeado	
	int numero5;
	
	printf("Digite um numero: ");
	scanf("%d", &numero5);
	
	if(numero5 > 0)
		printf("Positivo\n");
	else if(numero5 < 0 )
	    printf("Negativo");
	else 
		printf("Esse numero eh neutro");

//Exercicio 018
	float salarioVelho, taxadeReajuste, salarioNovo;
	
	printf("Digite o salario do funcionário: ");
	scanf("%f", &salarioVelho);
	
	if(salarioVelho <= 1000)
		taxadeReajuste = 15 ;
	else if (salarioVelho <= 2000)
	    taxadeReajuste = 10;
	else
		taxadeReajuste = 5;
		
	salarioNovo = salarioVelho + (salarioVelho*(taxadeReajuste / 100));
	
	printf("Salario velho.......: %.2f   \n",salarioVelho);
	printf("Taxa de Reajuste....: %.2f%% \n",taxadeReajuste);
	printf("Salario novo........: %.2f   \n",salarioNovo);

//Exercicio 019
	float valor_salario, taxa, desconto, valor_liquido;
	
	printf("Digite o valor do salario.: ");
	scanf("%f", & valor_salario);
	
	if (valor_salario <= 1317.07)
	taxa = 8;
	else if(valor_salario <= 2195.12)
	taxa = 9;
	else
	taxa = 11;
	
	printf("O valor do salario bruto.: %.2f\n", valor_salario);
	printf("taxa eh de: %.2f\n", taxa);
	
	desconto = valor_salario * (taxa/ 100);
	valor_liquido = valor_salario - desconto;
	
	printf("O valor do desconto foi de: %.2f\n", desconto);
	printf("Valor liquido eh de: %.2f\n", valor_liquido);


//Exercicio 020
 int QtdFilhos;
 float SalarioHora, HorasTrabalhadas, salarioBruto, valor_filho, salario_liquido;
 
 printf("Quantas horas foram trabalhadas.: ");
 scanf("%f", & HorasTrabalhadas);
 printf("\n");	
 printf("Quanto recebe a hora.: ");
 scanf("%f", & SalarioHora);
 printf("\n");
 printf("Quantos filhos tem.: ");
 scanf("%d", & QtdFilhos);
 printf("\n"); 
  
  salarioBruto = SalarioHora * HorasTrabalhadas;	
 
 if (salarioBruto <= 700)
 valor_filho = QtdFilhos * 8.5;
 else if (salarioBruto <= 1000)
 valor_filho = QtdFilhos * 6.5;
 else
 valor_filho = QtdFilhos * 2.5;
 
 salario_liquido = valor_filho + salarioBruto;
 
 printf("Salario Bruto eh de.: %.2f\n", salarioBruto);
 printf("Salario Familia eh de.: %.2f\n", valor_filho);
 printf("Salario Liquido eh de.: %.2f\n", salario_liquido);			
	
	
//exercicio 021 
 int codigo;
 
 printf("Digite um codigo: ");
 scanf("%d", & codigo);
 
 switch (codigo)
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
		printf("codigo digita eh invalido \n");
		break;	 		
 }	
	

//exercicio 022
 int numero_digitado;
  
  printf("Digite um numero entre 0 e 10: ");
  scanf("%d", & numero_digitado);
  
  switch(numero_digitado)
  {
  	case 0:
	printf("Numero digitado eh: Zero\n");
	break;
  	case 1:
	printf("Numero digitado eh: Um\n");
	break;
  	case 2:
	printf("Numero digitado eh: Dois\n");
	break;
  	case 3:
	printf("Numero digitado eh: Tres\n");
	break;
  	case 4:
	printf("Numero digitado eh: Quatro\n");
	break;					
  	case 5:
	printf("Numero digitado eh: Cinco\n");
	break;
  	case 6:
	printf("Numero digitado eh: Seis\n");
	break;
  	case 7:
	printf("Numero digitado eh: Sete\n");
	break;
  	case 8:
	printf("Numero digitado eh: Oito\n");
	break;
  	case 9:
	printf("Numero digitado eh: Nove\n");
	break;
  	case 10:
	printf("Numero digitado eh: Dez\n");
	break;						  	
  	default:
  	printf("Numero digitado esta fora da faixa de 0 a 10\n");
  	break;
  	
  }
	return 0;
}
