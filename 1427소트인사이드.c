#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    char char_a = *(char*)a;
    char char_b = *(char*)b;

    if (char_a > char_b) return -1;
    else if (char_a < char_b) return 1;
    return 0;
}

int main() {
    char N[11];

    scanf("%s", N);

    int len = strlen(N);

    qsort(N, len, sizeof(char), compare);

    printf("%s\n", N);

    return 0;
}