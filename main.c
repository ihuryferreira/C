#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	//Final da primeira aula
	setlocale(LC_ALL,"PORTUGUESE");
	char PAUSA;
	char nome[10];
	printf("Qual o seu nome: ");
	scanf("%[^\n]",&nome);
	while((getchar() != '\n') && (!EOF));
	
	printf("Olá %s .\n", nome);
	printf("Tecle <ENTER> para terminar \n");
	//PAUSA = getchar();
	PAUSA = getch();
	
	if(PAUSA == 13){
		printf("Você Apertou Enter \n");
	}else{
		printf("Você apertou %c \n", PAUSA);
	}
	
	return 0;
}
