#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("%d\n", 10000 + a * 1000);
    }
    else if (a == b || b == c || a == c) {
        int same = (a == b) ? a : (b == c) ? b : c;
        printf("%d\n", 1000 + same * 100);
    }
    else {
        int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        printf("%d\n", max * 100);
    }

    return 0;
}