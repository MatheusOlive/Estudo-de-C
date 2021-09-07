#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	/*
//Do while faz o teste ao fim sempre fara no minimo um teste.
	
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
	//parte interessante pois vai mostrar tudo oq foi adiconado
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
	*/
	
	
	
	int codigo, unidade = 0, saida = 0, entrada = 0;
	
	do
	{	
		system("cls");
		printf("Menu de opcoes \n");
		printf("0 - encerrar o programa \n");
		printf("1 - incluir uma unidade no estoque \n");
		printf("2 - excluir uma unidade no estoque \n");
		printf("3 - mostrar o total disponivel no estoque \n");
		printf("4 - mostrar o total entradas no estoque \n");
		printf("5 - mostrar o total de saidas no estoque \n");
		printf("\n");
	    printf("Escolha uma opcao: ");
	    scanf("%d", &codigo);		
				
		switch (codigo)
		{
			case 0:
        	printf("Encerrando o programa \n");
			break;

			case 1:
			printf("Incluindo uma panela no estoque \n");
			unidade++;
			entrada ++;
			break;
			
			case 2:
			if( unidade < 0)	
			printf("Não tem unidades no estoque \n");
			else
			unidade--;
			saida --;
			break;

			case 3:
			if( unidade == 0)
			printf("Nao tem nado no estoque \n");
			else	
			printf("Total disponivel no estoque %d\n", unidade);
			break;

			case 4:
			printf("%d Entradas no estoque \n", entrada);
			break;
			
			case 5:
			printf("%d Saidas no estoque \n", saida);
			break;			
			
			default:
			printf("Opcao invalida \n");
			break;				
			
		}
	
	system("pause");
    
	} while (codigo != 0);
	
	
		
	
	return 0;
	
}
