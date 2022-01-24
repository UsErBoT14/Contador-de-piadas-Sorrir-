#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	system("cls");
	int piadasPadrao=25;
	int quantidadePiadas=0;
	int opc=0;
	char opc2;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("\n\t+===+ Sorrir +===+\n\n");
	printf("\tAutor: Nicolas\n");
	printf("\tData de criacao: 24/01/2022");
	printf("\n\n\t+--- Menu ---+\n");
	printf("\n\tDigite 1 para iniciar o contador de piadas\n");
	printf("\n\tDigite 2 para sair o contador de piadas\n");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1:
			system("cls");
			setlocale(LC_ALL,"portuguese");
			printf("\nBem-vindo!\nPadrão do programa 'Sorrir' sao 25 piadas\n\n");
			printf("Qual piada você gostaria ver de 1 a 25: ");
			scanf("%d", &opc);
			
			//Escolha da piada pelo usuário.
			
			switch(opc)
			{
				setlocale(LC_ALL,"portuguese");	
				case 1:
					system("notepad piada1.txt");
					break;
				case 2:
					system("notepad piada2.txt");
					break;				
				case 3:
					system("notepad piada3.txt");
					break;	
				case 4:
					system("notepad piada4.txt");
					break;	
				case 5:
					system("notepad piada5.txt");
					break;	
  				case 6:
					system("notepad piada6.txt");
					break;	
				case 7:
					system("notepad piada7.txt");
					break;	
				case 8:
					system("notepad piada8.txt");
					break;	
				case 9:
					system("notepad piada9.txt");
					break;	
				case 10:
					system("notepad piada10.txt");
					break;	
				case 11:
					system("notepad piada11.txt");
					break;	
				case 12:
					system("notepad piada12.txt");
					break;	
				case 13:
					system("notepad piada13.txt");
					break;	
				case 14:
					system("notepad piada14.txt");
					break;	
				case 15:
					system("notepad piada15.txt");
					break;	
				case 16:
					system("notepad piada16.txt");
					break;	
				case 17:
					system("notepad piada17.txt");
					break;	
				case 18:
					system("notepad piada18.txt");
					break;	
             	case 19:
					system("notepad piada19.txt");
					break;
				case 20:
					system("notepad piada20.txt");
					break;
				case 21:
					system("notepad piada21.txt");
					break;
				case 22:
					system("notepad piada22.txt");
					break;
				case 23:
					system("notepad piada23.txt");
					break;
				case 24:
					system("notepad piada24.txt");
					break;
				case 25:
					system("notepad piada25.txt");
				default:
					break;
			}
			
			break;

		case 2:
			exit(1);
			break;
			
		default:
			printf("\nLamento tente inserir novamente...\n");
			break;
	}
	system("pause");
	return 0;
}
