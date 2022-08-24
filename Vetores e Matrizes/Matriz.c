/* Leia uma matriz de 3 x 3 elementos. Calcule: a soma dos elementos que estao acima da diagonal principal, 
 * a soma dos elementos que estao abaixo da diagonal principal, a soma dos elementos que estão na diagonal principal, 
 * a soma dos elementos que estao na diagonal secundária. E calcule e imprima a sua transposta.
 * -> Junção dos exercícios 8, 9, 10, 11 e 12 da lista 4 de programacaodescomplicada.wordpress.com. */

#include <stdio.h>

int soma_acimaD(int m[3][3]);    // Cabeçalho das funções
int soma_abaixoD(int ma[3][3]);
int soma_diagonalP(int mat[3][3]);
int soma_diagonalS(int matr[3][3]);

int main(){
                        // Declaração de matrizes, contadores e variáveis
    int matriz[3][3], i, j, soma_diagP, soma_diagS, soma_elcima, soma_elbaixo, matriz_transposta[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor de (%d,%d): ", i, j);
            scanf("%d", &matriz[i][j]);  // Recebe o valor da posição da matriz
        }
    }
    soma_diagP = soma_diagonalP(matriz);    // Aqui as variáveis locais recebem os valores retornados 
    soma_diagS = soma_diagonalS(matriz);    // das funções correspondentes
    soma_elcima = soma_acimaD(matriz);
    soma_elbaixo = soma_abaixoD(matriz);
    printf("\nSoma da diagonal principal da matriz: %d", soma_diagP);
    printf("\nSoma da diagonal secundaria da matriz: %d", soma_diagS);
    printf("\nSoma dos elementos acima da diagonal principal da matriz: %d", soma_elcima);
    printf("\nSoma dos elementos abaixo da diagonal principal matriz: %d", soma_elbaixo);
    
    // Optei por fazer a transposta direto em vez de fazer uma função só para isso
    printf("\nMatriz transposta:\n");
    for(j = 0; j < 3; j++){         //  Para a transposta trato o j da original como linha
        for(i = 0; i < 3; i++){     //  e o i da original como coluna
            matriz_transposta[j][i] = matriz[i][j];  
            printf("%3d", matriz_transposta[j][i]); // %3d para deixar um espaço horizontal entre os múmeros maior que um espaço e menor que um tab: \t
        }printf("\n");  // printf fora do segundo for e dentro do primeiro é para imprimir a próxima linha da matriz em baixo da anterior
    }
    
    return 0;
}
int soma_acimaD(int m[3][3]){  // Nos elementoos acima da diagonal principal os índices
    int i, j, soma = 0;        // das colunas são maiores que os das linhas: 00 01 02
                               //                                            10 11 12
    for(i = 0; i < 3; i++){    //                                            20 21 22
        for(j = 0; j < 3; j++){
            if(j > i){
                soma += m[i][j];}
        }
    }
    return soma;
}
int soma_abaixoD(int ma[3][3]){  // Os índices das colunas são menores que os das linhas
    int i, j, sum = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(j < i){
                sum += ma[i][j];}
        }
    }
    return sum;
}
int soma_diagonalP(int mat[3][3]){  // Os índices das linhas e das colunas são iguais
    int i, j, add = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(j == i){
                add += mat[i][j];}
        }
    }
    return add;
}
int soma_diagonalS(int matr[3][3]){  // Os índices das colunas somados aos das linhas resultam no valor máximo de índice
    int i, j, mais = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(j + i == 2){
                mais += matr[i][j];}
        }
    }
    return mais;
}
