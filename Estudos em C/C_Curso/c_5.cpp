//Secao 7
//Curso Udemy -
//Aprenda e Domine Uma Das Mais Populares Linguagens de programacao: “A Linguagem C”
//Prof Antonio Henrique Reis

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Estruturas de repeticao

int main ()
{
//lacos de repeticao	
// for - estrutura determinada	
	int numero, resultado;
	
	//inicializacao; teste de repeticao; reinicializacao
	for (int i= 0; i < 5; i++ )
	{
		printf("Digite um numero: ");
		scanf("%d" & numero);
		resultado = numero * 3;
		printf("o resultado foi de: %d \n", resultado)
		
	}

//exercicio 023
	for(int i= 0; i <= 10; i++)
	{
		printf("%d\n",i);
	}
    
//exercicio 024

    for (int i=15; i<21; i++)
	{
		printf("%d\n",i);
	}
    
// exercicio 025
    for (int i=10; i>=0; i--)
    {
    	printf("%d\n",i);
	}
	
//exercicio 026
	int soma = 0, numero;
	
	for (int i= 0; i < 10; i++ )
	{
		printf("Digite um numero: ");
		scanf("%d", & numero);
		soma = soma + numero;	
	}
	
	printf("Soma dos numeros foi de: %d\n", soma);
	
//exercicio 027	
	int numero, somaPos, somaNeg, zeros;
	
	somaPos = somaNeg = zeros = 0;
	
	for(int i = 0;  i < 20; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		if(numero > 0)
		somaPos = somaPos + numero;
		else if(numero < 0)
		somaNeg = somaNeg + numero;
		else
		zeros++;
		
	}
	
	printf("Soma dos Positivos.....: %d\n", somaPos);
	printf("Soma dos Negativos.....: %d\n", somaNeg);
	printf("Soma dos Zeros.........: %d\n", zeros);			
 //exercicio 028
 int soma = 0;
 
  for (int i = 0; i<=100; i++)
  {
  	soma = soma + i; 
  }
  
  printf("Soma eh de: %d", soma);
  

// While -- uso ideal-> quantidade indeterminada de repeticoes

	int numero, resultado, contar;

	contar = 0; // inicializacao da variavel contadora
	while(contar < 5)	//teste de repticao
	{
		printf("Digite um numero: ");
		scanf("%d", & numero);
		resultado = numero * 3;
		printf("O resultado foi de : %d \n", resultado);
		contar++; //reinicializacao da variavel contadora
	}	


// exercicio 029
	int numero = 0, qtdDigitada = 0;
	
	while (numero >= 0)
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);	
		qtdDigitada++;
	}	
	
	printf("Quantidade de numeros  digitados: %d \n", qtdDigitada);	

// exercicio 030
	int somaNeg, somaPos, num ; 
	
	somaNeg = somaPos = num = 1 ;
	
	while ( num != 0 )
	{
		printf("Digite um numero: ");
		scanf("%d", & num);
		if (num > 0)
		somaPos += num;
		else
		somaNeg += num;
	}
	
	printf("soma negativo....: %d\n", somaNeg);
	printf("soma positivo....: %d\n", somaPos);	
	
//exercicio 031		
	int numero, soma = 0 , qtdLido = 0;
	float media ;
	char resposta = 's';
	
	while(resposta == 's')
	{
		printf("Digite um numero: ");
		scanf("%d", & numero);
		
		soma += numero ; //soma = soma + numero; -= *= /= %=
		qtdLido++;
		
		printf("Deseja digitar outro numero: (s/n)? ");
		resposta = _getche();
		printf("\n\n");
	}
	
	media = ((float)soma / (float)qtdLido);
	printf("A media dos  numeros lidos foi: %f \n", media);
		
//exercicio 032
 float media, nota1, nota2, nota3;
 char resposta = 's';
 
  while(resposta == 's')
  {
	printf("Digite a primeira nota.: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota..: ");
	scanf("%f", &nota2);	
	printf("Digite a terceira nota.: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("A media do aluno foi.: %.2f\ns", media);
	
	if(media >= 6 )
		printf("Aprovado  \n");		
	else
		printf("Reprovado \n");

	
	printf("Deseja digitar as notas de outro aluno? (s/n)");
	resposta = _getche();
	printf(" \n \n ");  
   }

//exercicio 033
	char resposta = 's';
	int codigo, idade, qtdSolt, qtdCas, qtdDiv;
	float mediaSolt, mediaCas, mediaDiv;
	
	qtdSolt = qtdCas = qtdDiv = 0;
	mediaSolt = mediaCas = mediaDiv = 0 ;
	
	while(resposta == 's')
	{
		system("cls");
		printf("Codigo do estado civil \n");
		printf("1 - Solteiro \n");
		printf("2 - Casado \n");
		printf("3 - Divorciado \n");
		printf("Escolha um codigo civil: ");
		scanf("%d", &codigo);
		printf("Digite a idade desta pessoa: ");
		scanf("%d", &idade);
		
		switch(codigo)
		{
			case 1:
				mediaSolt += idade;
				qtdSolt ++;
    			break;
			case 2:
				mediaCas += idade;
				qtdSolt ++;
			    break;
			case 3:
				mediaDiv += idade;
				qtdDiv ++;
			break;
			default:
			printf("Codigo invalido \n");
			break;
		}
	
		printf("Deseja digitar as notas de outro aluno? (s/n)");
		resposta = _getche();
		printf(" \n");  
	}
 
 	mediaSolt /= qtdSolt ;
 	mediaCas /= qtdCas;
 	mediaDiv /= qtdDiv;
 	
 	printf("\n\n");
 	printf("A mediada idade dos solteiros eh......: %.2f\n", mediaSolt);
 	printf("A mediada idade dos casados eh........: %.2f\n", mediaCas);
 	printf("A mediada idade dos divorciados eh....: %.2f\n", mediaDiv);	

//Do while fz o teste ao fim sempre fara no minimo um teste.
//exercicio 034
	int codigo, contPan, contCha, contVas;
	contPan = contCha = contVas = 0;
	    do 
		{
	    system("cls");
	    printf("Menu de opcoes \n");
	    printf("0 - Encerrar o programa \n");
	    printf("1 - Incluir uma panela no estoque \n");
	    printf("2 - Incluir uma chaleira no estoque \n");
	    printf("3 - Incluir uma vassoura no estoque \n");
	    printf("4 - Relatorio de inclusoes \n");
	    printf("Escolha uma opcao: ");
	    scanf("%d", &codigo);
	
	//Tratamento das opções do menu
    switch (codigo)
   {      
        case 0:
        printf("Encerrando o programa \n");
		break;
		case 1:
		printf("Incluindo uma panela no estoque \n");
		contPan++;
		break;
		case 2:
		printf("Incluindo uma chaleira no estoque \n");
		contCha++;
		break;
		case 3:
		printf("Incluindo uma vassoura no estoque \n");
		contVas++;
		break;
		case 4:
		printf("Relatorio de inclusoes \n");
		printf("%d Panelas no estoque \n", contPan);
		printf("%d Chaleiras no estoque \n", contCha);
		printf("%d Vassouras no estoque \n", contVas);
		break;
		default:
		printf("Opcao invalida \n");
		break;
   	}
	    
	  system("pause");
    
	} while (codigo != 0);

// Exercicio 035
	int codigo, totEnt, totSai, disponivel;
	totEnt = totSai = disponivel = 0;
	do 
	{
	system("cls");
	printf("Menu de opcoes \n");
	printf("0 - Encerrar o programa \n");
	printf("1 - Incluir uma unidade no estoque \n");
	printf("2 - Excluir uma unidade no estoque \n");
	printf("3 - Mostrar o disponivel no estoque \n");
	printf("4 - Mostrar o total de entradas no estoque \n");
	printf("5 - Mostrar o total de saidas no estoque \n");
	printf("Escolha uma opcao: ");
	scanf_s("%d", &codigo);
	switch (codigo)
	{
		case 0:
		printf("Encerrando o programa \n");
		break;
		case 1:
		printf("Incluindo uma unidade no estoque \n");
		totEnt++;
		disponivel++;
		break;
		case 2:
		if (disponivel == 0)
		{
		printf("Nao pode excluir porque o estoque esta vazio \n");
		}
		else
		{
		printf("Excluindo uma unidade no estoque \n");
		totSai++;
		disponivel--;
		}
		break;
		case 3:
		printf("Mostrando o disponivel no estoque \n");
		printf("Disponivel no estoque: %d \n", disponivel);
		break;
		case 4:
		printf("Mostrando o total de entradas no estoque \n");
		printf("Total de entradas no estoque: %d \n", totEnt);
		break;
		case 5:
		printf("Mostranto o total de saidas no estoque \n");
		printf("Total de saidas no estoque: %d \n", totSai);
		break;
		default:
		printf("Escolheu uma opcao invalida \n");
		break;
	}		
		system("pause");
	} while (codigo != 0);

// Exercício 036

	int codigo, disponivel, totEnt, totSai;
	disponivel = 40;
	totEnt = totSai = 0;
	do 
	{
	system("cls");
	printf("Menu de opcoes \n");
	printf("0 - Encerrar o programa \n");
	printf("1 - Entrando uma pessoa no restaurante \n");
	printf("2 - Saindo uma pessoa do restaurante \n");
	printf("3 - Mostrando vagas disponiveis no restaurante \n");
	printf("4 - Mostrando o total de pessoas que entraram no restaurante \n");
	printf("5 - Mostranto o total de pessoas que sairam do restarante \n");
	printf("Escolha uma opcao: ");
	scanf_s("%d", &codigo);
	switch (codigo)
	{			
	case 0:
	printf("Encerrando o programa \n");
	break;
	case 1: //entrando uma pessoa
	if (disponivel > 0)
	{
	printf("Entrando uma pessoa no restaurante \n");
	totEnt++;
	disponivel--;
	}
	else
	{
	printf("Aguarde, Restaurante esta lotado \n");
	}
	break;
	case 2: //saindo uma pessoa
	if (disponivel == 40)
	{
	printf("Restaurante esta vazio \n");
	}
	else
	{
	printf("Saindo uma pessoa do restaurante \n");
	disponivel++;
	totSai++;
	}
	break;
	case 3:
	printf("Existem %d vagas disponiveis \n", disponivel);
	break;
	case 4:
	printf("Entraram %d pessoas no restaurante \n", totEnt);
	break;
	case 5:
	printf("Sairam %d pessoas do restaurante \n", totSai);
	break;
	default:
	printf("Opcao invalida \n");
	break;
	}
		system("pause");
	} while (codigo != 0);

	return 0; 	
	
}


