#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Declaração da matriz
    int Tamanho = 10;

    char Tabuleiro[Tamanho][Tamanho];
    char Habilidades[Tamanho][Tamanho];

    for (int i = 0; i < Tamanho; i++)
    {
        for (int j = 0; j < Tamanho; j++)
        {
           Tabuleiro[i][j] = '0';
        }
    }

    printf("    "); 
    for (int j = 0; j < Tamanho; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    for (int i = 4; i < 7; i++)
    {
        Tabuleiro[i][4] = '1';
    }

    for (int j = 4; j < 7; j++)
    {
        Tabuleiro[8][j] = '1';
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.


    for (int i = 0; i < Tamanho; i++)
    {
        for (int j = 0; j < Tamanho; j++)
        {
            if (i == j && i >= 0 && i <= 2)
            {
                Tabuleiro[i][j] = '1';
            }
        }
    }



    for (int i = 0; i < Tamanho; i++)
    {
        for (int j = Tamanho - 1; j >= 0; j--)
        {
            if (j == (Tamanho - 1 - i) && i >= 0 && i <= 2)
        {
            Tabuleiro[i][j] = '1';
        }
        }
    }

    for (int i = 0; i < Tamanho; i++)
    {
        printf("%2d  ", i + 1);
        for (int j = 0; j < Tamanho; j++)
        {
            printf("%c ", Tabuleiro[i][j]);
        }
        printf("\n");
    }




 
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

      for (int i = 0; i < Tamanho; i++)
    {
        for (int j = 0; j < Tamanho; j++)
        {
           Habilidades[i][j] = '0';
        }
    }

    printf("    "); 
    for (int j = 0; j < Tamanho; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0 && j == 3)
            {
                Habilidades[i][j] = '1';
            }
            else if (i == 1 && j >= 2 && j < 4)
            {
                Habilidades[i][j] = '1';
            }
            else if (i == 2 && j >= 1 && j < 6)
            {
                Habilidades[i][j] = '1';
            }
            
        }
    }

    for (int i = 4; i < 8; i++)
    {
        for (int j = 6; j <= 9; j++)
        {
            if (i == 4 && j == 7)
            {
                Habilidades[i][j] = '1';
            }
            else if (i == 5 && j >= 6 && j < 9)
            {
                Habilidades[i][j] = '1';
            }
            else if (i == 6 && j == 7)
            {
                Habilidades[i][j] = '1';
            }
            
        }
    }


    for (int i = 7; i <= 9; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 7 && j == 2)
            {
                Habilidades[i][j] = '1';
            }
            else if (i == 8 && j >= 0 && j < 5)
            {
                Habilidades[i][j] = '1';
            }
            else if (i == 9 && j == 2)
            {
                Habilidades[i][j] = '1';
            }
            
        }
    }


    for (int i = 0; i < Tamanho; i++)
    {
        printf("%2d  ", i + 1);
        for (int j = 0; j < Tamanho; j++)
        {
            printf("%c ", Habilidades[i][j]);
        }
        printf("\n");
    }

    return 0;
}
