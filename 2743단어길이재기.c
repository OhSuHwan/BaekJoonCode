#include <stdio.h>
#include <string.h>

int main() {
    char word[101];

    scanf("%100s", word);

    printf("%lu\n", strlen(word));

    return 0;
}