#include <stdio.h>

int longestUniqueSubstring(char *s) {
    int seen[256] = {0};   // enough for all ASCII characters
    int left = 0, maxLen = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = (unsigned char)s[right];

        while (seen[ch]) {
            seen[(unsigned char)s[left]] = 0;
            left++;
        }

        seen[ch] = 1;

        int length = right - left + 1;
        if (length > maxLen) {
            maxLen = length;
        }
    }

    return maxLen;
}

int main() {
    char s[1000];
fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    printf("You entered: %s\n", s);
    printf("Longest unique substring length: %d\n", longestUniqueSubstring(s));

    return 0;
}
    
    