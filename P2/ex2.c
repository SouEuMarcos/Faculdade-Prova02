/*
Crie um programa que leia dois vetores A e B de tamanho N, e ent˜ao
troquem seus elementos, de forma que o vetor A ficar´a com os elementos do vetor B e vice-versa. Seu
programa deve funcionar para diferentes valores de N, todos maiores que 1.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int i, N;

//Pedindo tamanho do vetor ao usuário.
  do{
  printf("Digite o tamanho dos vetores (maior que 1): ");
  scanf("%d", &N);
  }while(N <= 1);

  int vetorA[N], vetorB[N];

//Pedindo para inserir os elementos do vetor A e B.
  printf("\nDigite os %d elementos do vetor A:\n", N);
  for(i = 0; i < N; i++){
    printf("valor %d: ", i + 1);
    scanf("%d", &vetorA[i]);
  }//for

  printf("\n");

  printf("Digite os %d elementos do vetor B:\n", N);
  for(i = 0; i < N; i++){
    printf("valor %d: ", i + 1);
    scanf("%d", &vetorB[i]);
  }//for

  printf("\n");

//Fazendo a troca dos elementos.
  int temporario;
  for(i = 0; i < N; i++){
    temporario = vetorA[i];
    vetorA[i] = vetorB[i];
    vetorB[i] = temporario;
  }//for

//Imprimindo vetores após troca.
  printf("Inversao dos elementos dos vetores A e B:\n");
  printf("Vetor A: ");
  for (i = 0; i < N; i++) {
    printf("%d ", vetorA[i]);
  }//for

  printf("\nVetor B: ");
  for(i = 0; i < N; i++){
    printf("%d ", vetorB[i]);
  }//for

  printf("\n");
  return 0;
}//main
