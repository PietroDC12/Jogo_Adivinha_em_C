#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  printf("Bem vindo ao nosso jogo de adivinhação \n");
  printf("\n");

  //ordem sempre tipo, nome e valor
  int segundos = time(0);
  srand(segundos);

  int numero_rand = rand();

  int num_secreto = numero_rand % 100;
  int valor_user;
  int tentativa_user = 0;

  printf("Quantas tentativas deseja ter? \n");
  scanf("%d", &tentativa_user);

  for (int i = 1; i <= tentativa_user; i++){
    printf("Tentativa %d de %d \n", i, tentativa_user);
    printf("\n");

    printf("Qual seu chute? \n");
    scanf("%d", &valor_user);

    printf("\n");
    printf("Seu chute foi: %d \n", valor_user);

    if (valor_user < 0){
      printf("Números negativos não são válidos \n");
      //não vai contar no número de tentativas do usuário
      i--;
      continue;
    }

    if (num_secreto == valor_user){
      printf("Você acertou, parabéns! \n");
      break;
    }
    else{
      printf("Você errou, tente novamente. \n");
      printf("\n");
      if (valor_user > num_secreto){
        printf("Diminua o valor. \n");
        printf("\n");
      }
      //não é preciso sempre usar o if/else
      if(valor_user < num_secreto){
        printf("Aumente o valor. \n");
        printf("\n");
      }
    }
  }
  printf("\n");
  printf("Fim de jogo!");



  //printf("O número %d é o secreto. Não conte \n", num_secreto);

  return 0;
};

