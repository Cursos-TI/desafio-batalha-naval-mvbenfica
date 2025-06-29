#include <stdio.h>

int main() {
    const int navioVerticalInicioLinha = 2;
    const int navioVerticalInicioColuna = 3;
    const int navioVerticalTamanho = 4;

    const int navioHorizontalInicioLinha = 5;
    const int navioHorizontalInicioColuna = 1;
    const int navioHorizontalTamanho = 3;

    int i;
    printf("Navio Vertical (tamanho %d) posicionado em (%d,%d):\n",
           navioVerticalTamanho,
           navioVerticalInicioLinha,
           navioVerticalInicioColuna);
    for (i = 0; i < navioVerticalTamanho; i++) {
        printf(" Parte %d -> Linha %d, Coluna %d\n",
               i + 1,
               navioVerticalInicioLinha + i,
               navioVerticalInicioColuna);
    }
    printf("\n");

    printf("Navio Horizontal (tamanho %d) posicionado em (%d,%d):\n",
           navioHorizontalTamanho,
           navioHorizontalInicioLinha,
           navioHorizontalInicioColuna);
    for (i = 0; i < navioHorizontalTamanho; i++) {
        printf(" Parte %d -> Linha %d, Coluna %d\n",
               i + 1,
               navioHorizontalInicioLinha,
               navioHorizontalInicioColuna + i);
    }

    return 0;
}
