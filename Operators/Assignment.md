# Assign

Assignment operators are used for assigning value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. The value on the right side must be of the same data-type of the variable on the left side otherwise the compiler will raise an error.

## =
```C
a = 10;
b = 20;
ch = 'y';


```

## +=
This operator first adds the current value of the variable on left to the value on the right and then assigns the result to the variable on the left.

```C
(a += b) can be written as (a = a + b)

a+= 6 == 11 => a = 5
```

## ...


```C
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


```