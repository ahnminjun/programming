#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    unsigned int a, b, result;
    char op;

    printf("비트 연산식? (예: 0x12345678 & 0xFF00FF00): ");
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
        printf("지원하지 않는 연산자\n");
        return 1;
    }

    printf("%X %c %X = %X\n", a, op, b, result);  
    return 0;
}