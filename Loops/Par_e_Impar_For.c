/* Faça um programa que leia um número n inteiro positivo par ou ímpar. Se par, imprima todos os números pares de 0 a N 
 * em ordem decrescente. Se ímpar, imprima todos os números ímpares de 1 ate N em ordem crescente. 
 * E e calcule a soma dos n primeiros números naturais. 
 * ~~ Junção dos exercísios 14, 15 e 17 da Lista 3 do programacaodescomplicada.wordpress.com ~~ */

#include <stdio.h>

int main(){

    int num, i, soma=0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 1){  // Ímpar 
        for(i = 1; i <= num; i++){  // Crescente
            if(i % 2 == 1){  // Verifica se é par para imprimir
                printf("\t%d", i);
                soma += i;}  // A soma dentro do if para somar apenas  os ímpares
        }
        printf("\n  A soma dos impares de 1 a %d eh %d", num, soma);  // printf final fora do laço for para imprimir só uma vez
    }
    else{  // Par 
        for(i = num; i >= 0; i--){  // Decrescente
            if(i % 2 == 0){  // Verifica se é par para imprimir
                printf("\t%d", i);
                soma += i;} 
        } 
        printf("\n  A soma dos pares de 0 a %d eh %d", num, soma);  
    }
    return 0;
}
