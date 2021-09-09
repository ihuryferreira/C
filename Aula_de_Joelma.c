#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	//Programa que mostra qual e menor número da media
	
	int v1[10], i, n, j, soma;
	float media;
	int v2[10];
	
	printf("quantos numeros queira usar?");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("Digite o valor %d: ",i+1);
		scanf("%d",&v1[i]);
		soma = soma + v1[i];
	}
	
	media = soma / n;
	
	j = 0;
	
	for(i=0;i<n;i++){
		if(v1[i]<= media){
			v2[j] = v1[i];
			j=j+1;
		}
	}
	
	for(i=0;i<j;i++){
		printf("A resposta é %d \n", v2[i]);
	}
	system("PAUSE");
	return 0;
}
