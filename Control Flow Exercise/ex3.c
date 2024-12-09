#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isVowel(char ch)
{
    // to lower case
    char lower = tolower(ch);
    bool result = isalpha(ch) && (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
    return result;
}

bool isConsonant(char ch)
{
    // to lower case
    char lower = tolower(ch);
    return isalpha(ch) && !isVowel(ch);
}

int main()
{
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    if (isalpha(input))
    {
        if (isVowel(input))
        {
            printf("This is vowel");
        }
        else if (isConsonant(input))
        {
            printf("This is consonant");
        }
    }
    else
    {
        printf("This is not alphabet !!");
    }
}