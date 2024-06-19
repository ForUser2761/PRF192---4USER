// C program to demonstrate
// working of Assignment operators

#include <stdio.h>

int main()
{

    // Assigning value 10 to a
    // using "=" operator
    int a = 10;
    printf("Value of a is %d\n", a);

    // Assigning value by adding 10 to a
    // using "+=" operator
    a += 10;
    printf("Value of a is %d\n", a);

    // Assigning value by subtracting 10 from a
    // using "-=" operator
    a -= 10;
    printf("Value of a is %d\n", a);

    // Assigning value by multiplying 10 to a
    // using "*=" operator
    a *= 10;
    printf("Value of a is %d\n", a);

    // Assigning value by dividing 10 from a
    // using "/=" operator
    a /= 10;
    printf("Value of a is %d\n", a);

    return 0;
}
