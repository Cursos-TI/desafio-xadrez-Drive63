#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("--- Desafio de Movimentação de Peças de Xadrez ---\n\n");

    // --------------------------------------------------------
    // 1. Simulação da Torre: 5 casas para a direita
    //    Estrutura de repetição utilizada: 'for'
    // --------------------------------------------------------
    printf("1. Movimento da TORRE (5 casas para a DIREITA) - Usando FOR:\n");
    
    // Variável para armazenar o número de casas a mover.
    const int casas_torre = 5; 
    int i; // Contador para o loop 'for'

    // O loop 'for' é ideal quando o número de iterações é conhecido (5 casas).
    for (i = 1; i <= casas_torre; i++) {
        // A Torre move-se em linha reta horizontal ou vertical.
        printf("Direita\n"); 
        // A cada iteração (casa), a direção "Direita" é impressa.
    }

    printf("\n");

    // --------------------------------------------------------
    // 2. Simulação do Bispo: 5 casas na diagonal (Cima e Direita)
    //    Estrutura de repetição utilizada: 'while'
    // --------------------------------------------------------
    printf("2. Movimento do BISPO (5 casas na diagonal Cima/Direita) - Usando WHILE:\n");

    // Variável para armazenar o número de casas a mover.
    const int casas_bispo = 5; 
    int contador_bispo = 0; // Contador para o loop 'while', inicia em 0.

    // O loop 'while' executa enquanto a condição for verdadeira.
    while (contador_bispo < casas_bispo) {
        // O Bispo move-se na diagonal. A diagonal é representada pela combinação
        // das duas direções ("Cima" e "Direita").
        printf("Cima, Direita\n");

        // Incrementa o contador para avançar para a próxima casa/iteração.
        contador_bispo++; 
    }

    printf("\n");

    // --------------------------------------------------------
    // 3. Simulação da Rainha: 8 casas para a esquerda
    //    Estrutura de repetição utilizada: 'do-while'
    // --------------------------------------------------------
    printf("3. Movimento da RAINHA (8 casas para a ESQUERDA) - Usando DO-WHILE:\n");

    // Variável para armazenar o número de casas a mover.
    const int casas_rainha = 8; 
    int contador_rainha = 0; // Contador para o loop 'do-while', inicia em 0.

    // O loop 'do-while' garante que o bloco de código seja executado pelo menos uma vez,
    // e repete enquanto a condição for verdadeira.
    do {
        // A Rainha pode se mover em todas as direções.
        // Neste caso, a simulação é de 8 casas para a Esquerda.
        printf("Esquerda\n");

        // Incrementa o contador para avançar para a próxima casa/iteração.
        contador_rainha++; 

    } while (contador_rainha < casas_rainha); // A condição verifica se o movimento total (8 casas) foi atingido.

    printf("\n--- Fim da Simulação ---\n");

    return 0;
}
    

    return 0;
}
