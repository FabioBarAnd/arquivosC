#include <stdio.h>
#include <string.h>

void reverseSubstring(char *s, int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int compareStrings(const char *s1, const char *s2) {
    return strcmp(s1, s2);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        char minString[n + 1];
        strcpy(minString, s);
        int minK = 1;

        for (int k = 2; k <= n; k++) {
            // Faz uma cópia da string original
            char tempString[n + 1];
            strcpy(tempString, s);

            for (int i = 0; i <= n - k; i++) {
                reverseSubstring(tempString, i, i + k - 1);
            }

            if (compareStrings(tempString, minString) < 0) {
                strcpy(minString, tempString);
                minK = k;
            }
        }

        printf("%s\n", minString);
        printf("%d\n", minK);
    }

    return 0;
}