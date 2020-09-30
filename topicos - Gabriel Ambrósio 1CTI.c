#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    int x, y;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor de x ");
    scanf("%d,%d", &x);
    printf("Digite o valor de y ");
    scanf("%d,%d", &y);

    if ((x > 10 || x < -10) || (y > 10 || y < -10)) {
        printf("Errou o alvo, mais sorte na próxima! ");
    } else if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
        printf("Você fez 10 pontos");
    } else if ((x >= -5 && x <= 5) && (y >= -5 && y <= 5)) {
        printf("Você fez 5 pontos ");
    } else if ((x >= -10 && x <= 10) && (y >= -10 && y <= 10)) {
        printf("Você fez 1 ponto ");
    }

    return 0;
}

