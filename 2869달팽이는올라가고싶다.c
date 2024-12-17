#include <stdio.h>

int main() {
    int A, B, V;

    scanf("%d %d %d", &A, &B, &V);

    int days = (V - B) / (A - B);

    if ((V - B) % (A - B) != 0) {
        days++;
    }

    printf("%d\n", days);

    return 0;
}