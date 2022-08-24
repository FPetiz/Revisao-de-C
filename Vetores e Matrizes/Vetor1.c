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
    maior = altura_aluno[0]; malto = num_aluno[0];
    menor = altura_aluno[0]; mbaixo = num_aluno[0];
    for(i = 0; i <= 9; i++){
        if(maior < altura_aluno[i]){
            maior = altura_aluno[i];
            malto = num_aluno[i];}
        if(menor > altura_aluno[i]){
            menor = altura_aluno[i];
            mbaixo = num_aluno[i];}
    }
    printf("\nO aluno mais alto eh o n° %d com %.2fm.", malto, maior);
    printf("\nO aluno mais baixo eh o n° %d com %.2fm\n", mbaixo, menor);
    return 0;
}