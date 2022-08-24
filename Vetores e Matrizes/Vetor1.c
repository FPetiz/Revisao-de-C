/*24. Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o 
segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto. Mostre o numero do 
aluno mais baixo e do mais alto, juntamente com suas alturas.*/

#include <stdio.h>

int main(){

    int num_aluno[10], malto, mbaixo;
    float altura_aluno[10], maior, menor;
    int i;

    for(i = 0; i < 10; i++){
        printf("\nDigite o numero do %d°  aluno : ", i+1);
        scanf("%d", &num_aluno[i]);
        printf("Digite a altura do %d° aluno: ", i+1);
        scanf("%f", &altura_aluno[i]);
    }
    maior = altura_aluno[0]; malto = num_aluno[0];    // Nesse momento, todos recebem o conteúdo da posição 0 para
    menor = altura_aluno[0]; mbaixo = num_aluno[0];   // fazer as comparações dentro do laço e mudar caso precise
    for(i = 0; i <= 9; i++){
        if(maior < altura_aluno[i]){    // Se o conteúdo de altura_aluno[i] for maior
            maior = altura_aluno[i];    // a variável maior recebe um novo valor
            malto = num_aluno[i];}      // e a variável malto recebe o conteúdo da posição de num_aluno[i] correspondente
        if(menor > altura_aluno[i]){    // O mesmo acontece na verificação do menor
            menor = altura_aluno[i];
            mbaixo = num_aluno[i];}
    }
    printf("\nO aluno mais alto eh o n° %d com %.2fm.", malto, maior);
    printf("\nO aluno mais baixo eh o n° %d com %.2fm\n", mbaixo, menor);
    return 0;
}
