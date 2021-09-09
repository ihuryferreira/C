#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	char PAUSA;
	//char nome[10];
	float HT, VH, PD, TD, SB, SL;
	
	printf("Quantidade de Horas: ");
	scanf("%f", &HT);
	while((getchar() != '\n') && (!EOF));
	
	printf("Valor Hora: ");
	scanf("%f", &VH);
	while((getchar() != '\n') && (!EOF));
	
	printf("Percentual: ");
	scanf("%f", &PD);
	while((getchar() != '\n') && (!EOF));
	
	SB = HT * VH;
	TD = (PD * SB)/100;
	SL = SB - TD;
	
	printf("Salario bruto....: %8.2f\n",SB);
	printf("Desconto.........: %8.2f\n",TD);
	printf("Salário Liquido..: %8.2f\n",SL);
	
	//printf("Olá %s .\n", nome);
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
