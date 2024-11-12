/*
Fa¸ca um programa que leia dois vetores de n´umeros inteiros A e B, cada
um com n elementos, sendo n inserido pelo usu´ario. Fa¸ca com que o programa imprima:
• Um vetor C, sendo que cada elemento de C ´e a soma dos elementos de A e B na mesma posi¸c˜ao;
• Um vetor D, sendo que cada elemento de D ´e a m´edia dos elementos de A e B na mesma posi¸c˜ao;
• Um vetor E, sendo que os elementos de E s˜ao a intersec¸c˜ao entre os elementos de A e B (elementos
presentes nos dois vetores.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int i, N;

//Pedindo tamanho do vetor ao usuário.
  do{
    printf("Digite o tamanho dos vetores (maior que 0): ");
    scanf("%d", &N);
  }while(N <= 0);

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

//Fazendo o vetorC, que é a soma do vetor A e B.
  int vetorC[N];
  for(i = 0; i < N; i++){
    vetorC[i] = vetorA[i] + vetorB[i];
  }//for

//Fazendo vetorD, que é a média do vetor A e B.
  float vetorD[N];
  for(i = 0; i < N; i++){
    vetorD[i] = (vetorA[i] + vetorB[i]) / 2;
  }//for

//Fazendo o vetorE, que é a intersecção de A e B.
  int vetorE[N], j, k, tamanhoE = 0, interseccao = 0;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(vetorA[i] == vetorB[j]){
        for(int k = 0; k < tamanhoE; k++){
          if(vetorE[k] == vetorA[i]){
            interseccao = 1;
            break;
          }//if
        }//for
        if(!interseccao){
          vetorE[tamanhoE] = vetorA[i];
          tamanhoE++;
        }//if
        break;
      }//if
    }//for
  }//for

//   ===============IMPRIMINDO OS RESULTADOS===============

//Imprimindo a soma. (vetor C).
  printf("Soma do vetor A + B: ");
  for(i = 0; i < N; i++){
    printf("%d ", vetorC[i]);
  }//for

  printf("\n");

//Imprimindo a média. (vetor D).
  printf("Media do vetor A e B: ");
  for( i = 0; i < N; i++){
    printf("%.2f ", vetorD[i]);
  }//for

  printf("\n");

//Imprimindo a intersecção. (vetor E).
  printf("Interseccao do vetor A e B: ");
  for(i = 0; i < tamanhoE; i++){
    printf("%d ", vetorE[i]);
  }//for

  printf("\n");
  return 0;
}//main
