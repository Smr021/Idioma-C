//incluindo biblioteca
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //
#include <string.h> //incluir strcpy

int main (){
	setlocale(LC_ALL,""); 
	
	//Declarando vareáveis
	char continuar, situacao[200], resposta;
	int i, nota, soma = 0, numero, contador = 0;
	float media;
	
	
	//Calculando dados
		
	do{
	soma = 0;
	contador = 0;
	i=1;
	do{
		printf("Digite a %dª nota: ",i);
		scanf("%d",&nota);
		contador = contador + 1;
		i = i++;
		soma += nota;
		
		printf("Deseja continuar ? [s|n] ");
		scanf("%s",&resposta);
		system("cls || clear"); // -> limpar a tela
	} while (resposta == 's');

	
	media = soma /3;
	
	if (media >= 7 ){
		strcpy(situacao,"APROVADO!");
	} else if (media < 7 && media > 5){
		strcpy(situacao, "RECUPERAÇÃO!");
	} else {
		strcpy(situacao,"REPROVADO!");
	}
	
	//Exibindo dados
	printf("Media: %.1f\n", media);
	printf("Situação: %s\n",situacao);
	printf("Contagem: %d\n",contador);
	
	//Deseja continuar
	printf("Deseja continuar? [s|n]\n");
	scanf("%s",&continuar);

	system("cls || clear"); // -> limpar a tela
	
} while (continuar == 's'); // -> voltar a nova interação
	
	return 0;	
}
