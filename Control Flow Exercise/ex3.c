#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isVowel(char ch) {

    char lower = islower(ch);
    bool result = isalpha(lower) && (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
    return result;
}

bool isConsonant(char ch) {
    char lower = islower(ch);
    bool result = isalpha(lower) && !isVowel(lower);
}

int main()
{   
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    if (!isalpha(input)) 
    {
        printf("This is not alphabet");
    } else {
        if (isVowel(input))
        {
            printf("This is vowel");
        }

        if (isConsonant) 
        {
            printf("This is consonant");
        }
        
        
    }
    
}