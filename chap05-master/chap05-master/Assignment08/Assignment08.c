#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    unsigned int a, b, result;
    char op;

    printf("��Ʈ �����? (��: 0x12345678 & 0xFF00FF00): ");
    scanf("%i %c %i", &a, &op, &b);  

    switch (op) {
    case '&':
        result = a & b;
        break;
    case '|':
        result = a | b;
        break;
    case '^':
        result = a ^ b;
        break;
    default:
        printf("�������� �ʴ� ������\n");
        return 1;
    }

    printf("%X %c %X = %X\n", a, op, b, result);  
    return 0;
}