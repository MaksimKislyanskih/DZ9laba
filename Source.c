#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    char simv;
    int h, top, bot;

    // Ввод символа и размеров
    printf("Введите символ: ");
    scanf(" %c", &simv);
    printf("Введите высоту: ");
    scanf("%d", &h);
    printf("Введите ширину верхней стороны: ");
    scanf("%d", &top);
    printf("Введите ширину нижней стороны: ");
    scanf("%d", &bot);

    // Рисовка трапеции
    for (int i = 0; i < h; i++) {
        int space = (bot - top) / 2 * (h - i) / h;

        for (int j = 0; j < space; j++) {
            printf(" ");
        }

        // Вывод символов
        int cw = top + (bot - top) * i / h;
        for (int j = 0; j < cw; j++) {
            printf("%c", simv);
        }
        printf("\n");
    }
    return 0;
}