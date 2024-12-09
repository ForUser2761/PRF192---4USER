#include <stdio.h>

void checkNumber(int number)
{
    if (number > 0)
    {
        printf("This is a positive");
    }
    else if (number < 0)
    {
        printf("This is negative");
    }
    else
    {
        printf("The number is zero");
    }
}

int main()
{
    int num;

    // prompt user to input
    printf("Enter the number: ");
    scanf("%d", &num);

    checkNumber(num);

    return 0;
}

//ueoai