/* Além de tudo isso, é possível criar um arquivo para salvar até as últimas 5 interações e colocar a opção de listá-las na tela.
 * (Fazer mais um cálculo/ Listar últimas interações/ Encerrar/ Listar últimas interações e encerrar)
 * De repende fazer uma função de leitura para 1 a 5 e outra para 6 para receber os valores do usuário*/

#include <stdio.h>  // Biblioteca padrão
#include <math.h>  // Para cálculos como potência, raiz quadrada, seno, cosseno, etc

void menu();                            // Aqui declarei o cabeçalho das funções antes da main para que quando a função for chamada
float sum(float a, float b);            // no corpo do código, o compilador já a tenha reconhecido.
float sub(float d, float e);            // É possível, ainda, criar um header file - "nome.h".
float mult(float g, float h);
float div(float j, float k);
float power(float m, float n);
float sqroot(float p);                  

int main(){

    printf("\n\n\tBem-vindo a calculadora!\n"); // Deixei na main só a mensagem de boas vindas que não faz
    menu();                                     // sentido ser repetida na recursão

    return 0;
}
// Implementação da função de interação com o usuário
void menu(){
    // Declaração das variáveis:
    float num1, num2, result; // Para poder receber números reais - a precisão de float é suficiente nesse caso e precisa de menos memória que double
    int escolha;
    char opcao;  // Não precisa ser uma string porque é apenas um caractere

    printf("\n\tO que deseja calcular?\n\n");
    do{
        printf("Digite o numero correspondente a operacao que deseja realizar:\n");
        printf("| 1: Soma | 2: Subtracao | 3: Multiplicacao | 4: Divisao | 5: Potencia | 6: Raiz quadrada |\n ");
        scanf("%d", &escolha);
        if(escolha < 1 || escolha > 6){
            printf("Essa opcao eh invalida, por favor escolha entre as operacoes disponiveis\n");} // Aviso de que o usuario precisa mudar a resposta
    }while(escolha < 1 || escolha > 6);  // Para não encerrar a execução ao receber um número errado
    
    switch (escolha)
        {
        case 1:
            printf("Digite o primeiro valor: "); // Recebe os valores a serem calculados
            scanf("%f", &num1);
            printf("Digite o segundo valor: ");
            scanf("%f", &num2);
            fflush (stdin);    // Para limpar o buffer do teclado 

            result = sum(num1, num2);  // Chama a função correspondente
            printf("\n%.2f + %.2f = %.2f", num1, num2, result); // Imprime a resposta ao usuário

            printf("\nDeseja fazer mais um calculo?");  
            do{
                printf("\n\tS - Sim \t |\tN - Nao\n");  // Está dentro do laço para que ao digitar uma letra errada, o programa lembre o usuário as opções
                scanf(" %c",&opcao); // Às vezes o fflush não resolve, por isso coloquei um espaço antes no scanf, os espaços extras caem ali - não sei bem porquê

                if(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'){ 
                    printf("\nEssa opcao eh invalida!\n");}  // Para avisar o usuário que ele prcisa mudar a resposta
                else{
                    if(opcao == 'S' || opcao == 's'){ 
                        menu();}  // Recursividade para um novo cálculo
                    if(opcao == 'N' || opcao == 'n'){
                        printf("\nVoce encerrou suas atividades por aqui\n\n");}
                        break;}   // Para encerrar depois da mensagem
            }while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'); // Para não encerrar ao receber uma letra errada
            break;
        case 2:
            printf("Digite o primeiro valor: ");  // Mesma coisa do 1 ao 5, mudando apenas a função que é chamada
            scanf("%f", &num1);
            printf("Digite o segundo valor: ");
            scanf("%f", &num2);
            fflush (stdin);

            result = sub(num1, num2);
            printf("\n%.2f - %.2f = %.2f", num1, num2, result);
            
            printf("\nDeseja fazer mais um calculo?");
            do{
                printf("\n\tS - Sim \t |\tN - Nao\n");
                scanf(" %c",&opcao);

                if(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'){ 
                    printf("\nEssa opcao eh invalida!\n");}
                else{
                    if(opcao == 'S' || opcao == 's'){ 
                        menu();}
                    if(opcao == 'N' || opcao == 'n'){
                        printf("\nVoce encerrou suas atividades por aqui\n\n");}
                        break;} 
            }while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'); 
            break;
        case 3:
            printf("Digite o primeiro valor: ");
            scanf("%f", &num1);
            printf("Digite o segundo valor: ");
            scanf("%f", &num2);
            fflush (stdin);
            
            result = mult(num1, num2);
            printf("\n%.2f * %.2f = %.2f", num1, num2, result);

            printf("\nDeseja fazer mais um calculo?");
            do{
                printf("\n\tS - Sim \t |\tN - Nao\n");
                scanf(" %c",&opcao);

                if(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'){ 
                    printf("\nEssa opcao eh invalida!\n");}
                else{
                    if(opcao == 'S' || opcao == 's'){ 
                        menu();}
                    if(opcao == 'N' || opcao == 'n'){
                        printf("\nVoce encerrou suas atividades por aqui\n\n");}
                        break;} 
            }while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'); 
            break;
        case 4:
            printf("Digite o primeiro valor: ");
            scanf("%f", &num1);
            printf("Digite o segundo valor: ");
            scanf("%f", &num2);
            fflush (stdin);

            result = div(num1, num2);
            printf("\n%.2f / %.2f = %.2f", num1, num2, result);

            printf("\nDeseja fazer mais um calculo?");
            do{
                printf("\n\tS - Sim \t |\tN - Nao\n");
                scanf(" %c",&opcao);

                if(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'){ 
                    printf("\nEssa opcao eh invalida!\n");}
                else{
                    if(opcao == 'S' || opcao == 's'){ 
                        menu();}
                    if(opcao == 'N' || opcao == 'n'){
                        printf("\nVoce encerrou suas atividades por aqui\n\n");}
                        break;} 
            }while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'); 
            break;
        case 5:
            printf("Digite o primeiro valor: "); 
            scanf("%f", &num1);
            printf("Digite o segundo valor: ");
            scanf("%f", &num2);
            fflush (stdin);

            result = power(num1, num2);
            printf("\n%.2f ^ %.2f = %.2f", num1, num2, result);

            printf("\nDeseja fazer mais um calculo?");
            do{
                printf("\n\tS - Sim \t |\tN - Nao\n");
                scanf(" %c",&opcao);

                if(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'){ 
                    printf("\nEssa opcao eh invalida!\n");}
                else{
                    if(opcao == 'S' || opcao == 's'){ 
                        menu();}
                    if(opcao == 'N' || opcao == 'n'){
                        printf("\nVoce encerrou suas atividades por aqui\n\n");}
                        break;} 
            }while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'); 
            break;
        case 6:     // Repeti várias vezes o mesmo código porque na raiz quadrada só é necessário um número de entrada
            printf("Digite o valor: ");
            scanf("%f", &num1);
            fflush (stdin);

            result = sqroot(num1);
            printf("\nRaiz quadrada de %.2f  = %.2f", num1, result);

            printf("\nDeseja fazer mais um calculo?");
            do{
                printf("\n\tS - Sim \t |\tN - Nao\n");
                scanf(" %c",&opcao);

                if(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'){ 
                    printf("\nEssa opcao eh invalida!\n");}
                else{
                    if(opcao == 'S' || opcao == 's'){ 
                        menu();}
                    if(opcao == 'N' || opcao == 'n'){
                        printf("\nVoce encerrou suas atividades por aqui\n\n");}
                        break;} 
            }while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n'); 
            break;
    }
}
// Implemnetaçõa das funções para realizar os cálculos
float sum(float a, float b){ //(1)  Usei float para tipo das funções já que o valor retornado será um float
    float c;    // Só é necessário declarar variáveis que não foram recebidas por parâmetro
    c = a + b;  // Também poderia retirar essa linha e retornar a + b direto
    return c;   // Cada função retorna o resultado do cálculo correspondente para poder imprimir a resposta na tela - pedida nos cases
}

float sub(float d, float e){ //(2)

    float f;
    f = d - e;
    return f;
}

float mult(float g, float h){ //(3)

    float i;
    i = g * h;
    return i;
}

float div(float j, float k){ //(4)
    
    float l;
    l = j / k;
    return l;
}

float power(float m, float n){ //(5)

    float o;
    o = pow(m, n);
    return o;
}

float sqroot(float p){ //(6)

    float q;
    q = sqrt(p);
    return q;
}