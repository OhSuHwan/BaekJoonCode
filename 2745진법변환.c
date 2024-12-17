#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char N[31];
    int B, decimal = 0;

    scanf("%s %d", N, &B);

    int len = strlen(N);

    for (int i = 0; i < len; i++) {
        char digit = N[i];
        int value;

        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        }
        else {
            value = digit - 'A' + 10;
        }
        decimal += value * pow(B, len - 1 - i);
    }

    printf("%d\n", decimal);

    return 0;
}