#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    char z;
    scanf("%d %d", &x, &y);
    scanf(" %c", &z);

    if (z == '+') {
        printf("%d", x + y);
    }
    else if (z == '-') {
        printf("%d", x - y);
    }
    else if (z == '*') {
        printf("%d", x * y);
    }
    else if (z == '/') {
        printf("%d", x / y);
    }
    else {
        printf("No such operator");
    }

    return 0;
}