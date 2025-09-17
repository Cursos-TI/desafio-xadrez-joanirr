#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverbispo (){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 1; j++){
            printf("Direita.\n");
        }
        printf("Cima.\n");
    }

}

void movertorre (int casas){
    if (casas > 0){
        printf("Direita.\n");

        movertorre (casas - 1);
    }
}

void moverrainha (int casas){
    if (casas > 0){
        printf("Esquerda.\n");

        moverrainha (casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int casasBispo = 5, casasTorre = 5, casasRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movendo o Bispo 5 casas na diagonal para cima e para a direita:\n");

    moverbispo();

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movendo a Torre 5 casas para a direita:\n");

    movertorre (5);

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movendo a Rainha 8 casas para a esquerda:\n");

    moverrainha (8);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movendo o cavalo duas casas para cima e uma casa para a direita:\n");

    for (int i = 0, j = 0; i < 3; i++, j++) {
        
        if (i < 2) {
            printf("Cima.\n");
            continue;
        }

        if (i == 2) {
            printf("Direita.\n");
            break;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
