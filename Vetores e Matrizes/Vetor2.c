/* Faça um programa que receba 6 numeros inteiros e mostre:
 • Os números pares digitados;
 • A soma dos números pares digitados;
 • Os números ímpares digitados;
 • A quantidade de numeros ímpares digitados; */

#include <stdio.h>

 int main(){

    int vetor[6], i, soma = 0, impares = 0;

    for(i = 0; i <= 5; i++){
        printf("Digite o %d° inteiro: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            soma += vetor[i];}
        else{
            impares += 1;}
    }
    printf("\nOs numeros pares recebidos sao:\n");
    for(i = 0; i <= 5; i++){
        if(vetor[i] % 2 == 0){
            printf("\t%d", vetor[i]);}
    } printf("\nE a soma deles eh: %d", soma);
    printf("\nForam recebidos %d numeros impares, e eles sao:\n", impares);
    for(i = 0; i <= 5; i++){
        if(vetor[i] % 2 == 1){
            printf("\t%d", vetor[i]);}
    }
    return 0;
 }