#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int t = 1, r = 1, b, e;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movendo o Bispo 5 casas na diagonal para cima e para a direita:\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita - Cima.\n"); //Imprime a direção do movimento.
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movendo a Torre 5 casas para a direita:\n");

    while (t <= 5)
    {
        printf("Direita.\n");
        t++;
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movendo a Rainha 8 casas para a esquerda:\n");

    do
    {
        printf("Esquerda.\n");
        r++;
    } while (r <= 8);
    
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movendo o cavalo duas casas para baixo e uma casa para a esquerda:\n");

    for (e = 0; e < 1; e++)
    {
        for (b = 0; b < 2; b++)
        {
            printf("Baixo.\n");
        }

        printf("Esquerda.\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
