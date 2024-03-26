#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,""); 
	
	//Declarando vareáveis
	char resultado[200];
	int i, nota;
	float media;
	
	
	//Calculando dados
	for (i = 1; i <=3; i++){
		printf("Digite a %d nota:\n",i);
		scanf("%d",&nota);
		media += nota;
	}
	media = media / 3;
	
	if (media >= 7){
		strcpy (resultado, "Aprovado!");
		
	} else if (media < 7 && media > 4) {
		strcpy (resultado, "Recuperação!");
	
	} else {
		strcpy (resultado, "Reprovado!");
		
	}
	//Exibindo dados
	printf("=== Exibindo dados ===\n");
	printf("Media: %.1f\n",media);
	printf("%s\n",resultado);
	
	system("pause");
	return 0;	
}
