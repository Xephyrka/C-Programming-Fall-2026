#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    char z;
    scanf("%d %d", &x, &y);
    scanf(" %c", &z);

    switch (z) {
        case '+':
            printf("%d", x + y);
            break;
        case '-':
            printf("%d", x - y);
            break;
        case '*':
            printf("%d", x * y);
            break;
        case '/':
            printf("%d", x / y);
            break;
        default:
            printf("No such operator");
    }
}