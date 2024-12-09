#include <stdio.h>

int isAlphabet(char ch) {
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}


int main() {
    char input;

    printf("Enter: ");
    scanf("%c", &input);

    if (isAlphabet(input))
    {
        printf("This is alphabet");
    }else {
        printf("This is NOT alphabet");
    }
    

}