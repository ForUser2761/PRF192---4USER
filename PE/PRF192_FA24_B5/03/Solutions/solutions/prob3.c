#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[201], word[201], minWord[201];
    int minLen = INT_MAX, len = 0;

    fgets(str, sizeof(str), stdin);

    int j = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i]; 
        } else {
            if (j > 0) { 
                word[j] = '\0'; 
                len = strlen(word);
                if (len < minLen) { 
                    minLen = len;
                    strcpy(minWord, word);
                }
            }
            j = 0; 
        }
    }

    printf("%s\n", minWord);
    return 0;
}
