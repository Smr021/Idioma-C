//incluindo biblioteca
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,""); 
	
	//Declarando vare�veis
	char continuar, situacao[200];
	int i, nota, soma = 0;
	float media;
	
	
	//Calculando dados
	do{
	soma = 0;

	for (i=1; i<=3; i++){
		do {
			printf("Digite a %d� nota: ",i);
			scanf("%d",&nota);
		} while (nota < 0 || nota > 10);			
	  soma += nota;
	}	
	media = soma /3;
	
	if (media >= 7 ){
		strcpy(situacao,"APROVADO!");
	} else if (media < 7 && media > 5){
		strcpy(situacao, "RECUPERA��O!");
	} else {
		strcpy(situacao,"REPROVADO!");
	}
	
	//Exibindo dados
	printf("Media: %.1f\n", media);
	printf("Situa��o: %s\n",situacao);
	
	//Deseja continuar
	printf("Deseja continuar? [s|n]\n");
	scanf("%s",&continuar);

	system("cls || clear"); // -> limpar a tela
	
} while (continuar == 's'); // -> voltar a nova intera��o
	
	return 0;	
}
