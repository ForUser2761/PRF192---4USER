#include <stdio.h>

int main()
{
    int num1, num2, num3, largest;

    // prompt user input three integer
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // check the largest number
    if (num1 >= num2 && num1 >= num3)
    {
        /* code */
        largest = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    printf("The greatest number is: %d\n ", largest);
}