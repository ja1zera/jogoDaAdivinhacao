#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
printf("MMMMMMMMMMMMMMMWWWWWWMMMMMMMMMMMMMMM					\n");
printf("MMMMMMMMMMN0xoc:'''':cox0NMMMMMMMMMM					\n");
printf("MMMMMMMWKd;.            .;dXMMMMMMMM					\n");
printf("MMMMMMWk,      .''''..    .,kWMMMMMM					\n");
printf("MMMMMWk'    .,d0XNNXKx;.    'OMMMMMM    BEM VINDO	    \n");
printf("MMMMMNo...  ;0MMMMMMMMO'    .oWMMMMM       AO	       	\n");
printf("MMMMMWX0OkxxKWMMMMMMWKl.    .dWMMMMM      JOGO	        \n");
printf("MMMMMMMMMMMMMMMMMWN0o'.    .lXMMMMMM       DA	        \n");
printf("MMMMMMMMMMMMMMMWOc,.     .;kNMMMMMMM   ADIVINHAÇÃO      \n");
printf("MMMMMMMMMMMMMMXo.      .:kNMMMMMMMMM      !!!!	        \n");
printf("MMMMMMMMMMMMMWo.     .c0WMMMMMMMMMMM					\n");
printf("MMMMMMMMMMMMMX:     .oNMMMMMMMMMMMMM					\n");
printf("MMMMMMMMMMMMMXl;;;;;;OMMMMMMMMMMMMMM					\n");
printf("MMMMMMMMMMMMMWOc;;;;l0MMMMMMMMMMMMMM					\n");
printf("MMMMMMMMMMMMMMx.    .kMMMMMMMMMMMMMM					\n");
printf("MMMMMMMMMMMMMMk'....'kMMMMMMMMMMMMMM					\n");
printf("MMMMMMMMMMMMMMN0OOOO0NMMMMMMMMMMMMMM					\n\n");
	
	int segundos = time(0);
	srand(segundos);
	int numerogrande = rand();
	
	int numerosecreto = numerogrande % 100;
	int chute;
	int i;
	int tentativas = 1;
	double pontos = 1000;
	int acertou = 0;
	int numerodetentativas;
	
	int nivel;
	printf("(1) Fácil (2) Médio (3) Difícil\n");
	printf("Escolha a dificuldade: \n");
	scanf("%d", &nivel);
	
	switch(nivel) {
		case 1:
			numerodetentativas = 15;
			break;
			
		case 2:
			numerodetentativas = 10;
			break;
			
		default:
			numerodetentativas = 5;
			break;
		
	}
	
	for(i = 1; i <= numerodetentativas; i++) {
		printf("Tentativa %d.\n", tentativas);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
		
		if(chute < 0) {
			printf("Você não pode chutar números negativos.\n");
			continue;
		}
		
		acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;
		
		if(acertou){
			break;
		}
		
		else if(maior) {
			printf("Seu chute foi maior que o número secreto.\n");
		}
		
		else {
			printf("Seu chute foi menor que o número secreto.\n");
		}
		
		tentativas++;
		
		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
		
	}
		
	printf("Fim de jogo!\n\n");
		
	if(acertou){
printf("                    *****************                     \n");
printf("               ******               ******                \n");
printf("           ****                           ****            \n");
printf("        ****                                 ***          \n");
printf("      ***                                       ***       \n");
printf("     **           ***               ***           **      \n");
printf("   **           *******           *******          ***    \n");
printf("  **            *******           *******            **   \n");
printf(" **             *******           *******             **  \n");
printf(" **               ***               ***               **  \n");
printf("**                                                     ** \n");
printf("**       *                                     *       ** \n");
printf("**      **                                     **      ** \n");
printf(" **   ****                                     ****   **  \n");
printf(" **      **                                   **      **  \n");
printf("  **       ***                             ***       **   \n");
printf("   ***       ****                       ****       ***    \n");
printf("    **         ******             ******         **       \n");
printf("     ***            ***************            ***        \n");
printf("        ****                                 ****         \n");
printf("           ****                           ****            \n");
printf("               ******               ******                \n");
printf("                    *****************                     \n\n");
		printf("Parabéns, você acertou!\n");
		printf("Você acertou em %d tentativas.\n", tentativas);	
		printf("Total de pontos: %.1f\n", pontos);
		
	}	else{
	printf(" , ; ,   .-'''''-.   , ; ,      \n");
	printf(" \\\\|/  .'         '.  \\|//   \n");
	printf("  \\-;-/   ()   ()   \\-;-/     \n");
	printf("  // ;               ; \\\\     \n");
	printf(" //__; :.         .; ;__\\\\    \n");
	printf("`-----\'.'-.....-'.'/-----'     \n");
	printf("       '.'.-.-,_.'.'            \n");
	printf("          '(  (..-'             \n");
	printf("            '-'                 \n\n");
	printf("Você perdeu, Tente novamente.");
		
	}
			
}
