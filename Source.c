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

    // ���� ������� � ��������
    printf("������� ������: ");
    scanf(" %c", &simv);
    printf("������� ������: ");
    scanf("%d", &h);
    printf("������� ������ ������� �������: ");
    scanf("%d", &top);
    printf("������� ������ ������ �������: ");
    scanf("%d", &bot);

    // ������� ��������
    for (int i = 0; i < h; i++) {
        int space = (bot - top) / 2 * (h - i) / h;

        for (int j = 0; j < space; j++) {
            printf(" ");
        }

        // ����� ��������
        int cw = top + (bot - top) * i / h;
        for (int j = 0; j < cw; j++) {
            printf("%c", simv);
        }
        printf("\n");
    }
    return 0;
}