#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 26

int main() {
    char str[1000001];
    int freq[MAX_CHAR] = { 0 };
    int maxFreq = 0;
    int i, idx;

    scanf("%s", str, sizeof(str));

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
        idx = str[i] - 'a';
        freq[idx]++;

        if (freq[idx] > maxFreq) {
            maxFreq = freq[idx];
        }
    }

    int count = 0;
    char result;
    for (i = 0; i < MAX_CHAR; i++) {
        if (freq[i] == maxFreq) {
            count++;
            result = i + 'A';
        }
    }

    if (count > 1) {
        printf("?\n");
    }
    else {
        printf("%c\n", result);
    }

    return 0;
}