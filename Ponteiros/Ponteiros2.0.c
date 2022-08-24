/* Apenas códigos simples de manipulação de ponteiros para revisão */

#include <stdio.h>

int main(){

    int variavel = 10;  // declaração de uma variável comum
    int *ptr;  // declaração de um ponteiro para um inteiro
    int vetor[5] = {1, 2, 3, 4, 5};  // declaração de um vetor comum
    int *vet[2];  // declaração de um vetor de ponteiros - cada posição é um ponteiro
    int i, x = 13, y[2] = {70, 71};
    int *p = vetor;  // Ponteiro que recebe o endereço de um vetor

    ptr = &variavel;  // O valor de ptr = endereço de variavel e o conteúdo de ptr = 10
    printf("\n\nValor de ptr: %p; Conteúdo de ptr: %d", ptr, *ptr);
    printf("\nO endereço de variavel eh: %p", ptr);  
    printf("\nO valor de variavel eh: %d\n", *ptr);

    *ptr = 3;
    printf("\nAgora o valor de variavel eh: %d\n", *ptr); // Vai imprimir o 3 recebido por *ptr
    
    for(i = 0; i < 5; i++){
        printf("\t%d", p[i]);  // Imprime o conteúdo de vetor[i]
    }printf("\n");
    for(i = 0; i < 5; i++){        // p aponta para a primeira posição do array porque recebeu o endereço do vetor (que aponta para sua primeira posição)
        printf("\t%d", * (p+i)); // acessa o conteúdo de (endereço + i posições de memória) - nesse caso i*4B que é o tamanho do int
    }
    printf("\nvetor[2]: %d", p[2]);  // Imprime conteúdo de vetor[2] = 3;
    printf("\nvetor[2]: %d", * (p+2));  // Imprime conteúdo de vetor[2] = 3;
    printf("\nEndereco de vetor[2]: %d", &vetor[2]);
    printf("\nEndereco de vetor[1]: %d", (vetor+1)); // (endereço do vetor + 1 posição de memória)

    vet[0] = &x;
    vet[1] = y;
    printf("\nvet[0]: %p", vet[0]);  // Imprime &x
    printf("\nvet[1]: %p", vet[1]);  // Imprime &y
    printf("\n*vet[0]: %d", *vet[0]);  // Imprime conteúdo de vet[0] = x, ou seja, o conteúdo de x = 13
    printf("\nvet[1][1]: %d", vet[1][1]);  // Imprime o conteúdo da posição 1 do vetor que está na posição 1 de vet = 71

    return 0;
}