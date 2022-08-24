// Apenas um código de manipulação de ponteiros para testes

#include <stdio.h>
void main(){
  
  int a;
  int b;
  int c;
  int *ptr;  // declara um ponteiro para um inteiro
             // um ponteiro para uma variável do tipo inteiro
  a = 90;
  b = 2;
  c = 3;
  ptr = &a;  // O valor de ptr = endereço de a e o conteúdo de ptr = 90
  printf("\n\nValor de ptr: %p, Conteúdo de ptr: %d\n", ptr, *ptr);
  printf("B: %d, C: %d\n", b, c);

  // Outro código para exemplificar
  int x;
  int *pont;
  pont = &x;
  printf("\nO endereço de X é: %p\n", pont);

  // Código para acessar o conteúdo de uma posição de memória em um ponteiro
  int y;
  int *pt;
  y = 5;
  pt= &y;
  printf("\nO valor da variável Y é: %d\n", *pt);  // derreferenciando um ponteiro
  *pt = 10;  // usando derreferencia no "lado esquerdo" de uma atribuição
  printf("\nAgora, Y vale: %d\n", *pt);
}
