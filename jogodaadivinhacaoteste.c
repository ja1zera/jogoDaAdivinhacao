#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Bem vindo ao Jogo da Adivinha��o!\n\n");
	
	int chute;
	int numerosecreto = 50;
	
	int i;
	int tentativa = 1;
	int numerodetentativas = 10;
	int acertou = chute == numerosecreto;
	
	for(i = 1; i <= numerodetentativas; i++){
		printf("Tentativa %d\n", tentativa);
		printf("Qual � o seu chute? \n");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
		
		if(acertou){
			printf("Parab�ns, voc� acertou!\n");
			printf("Voc� ganhou em %d chances.\n", tentativa);
			break;


		}
		else if(chute < numerosecreto){
			printf("Seu chute foi menor que o n�mero secreto.\n");
			
		}
		
		else{
			printf("Seu chute foi maior que o n�mero secreto.\n");
			
		}
		
		tentativa++;
		
	}
	
	
}
