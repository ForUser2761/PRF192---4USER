**Operators** used to perform operations on values.

First, we will discuss the most basic **arithmetic operators**, maybe they are familiar from math classes.

| Operator | Operation | Example |
| --- | --- | --- |
| + | Addition | 3 + 2 = 5 |
| - | Subtraction | 3 - 2 = 1 |
| * | Multiplication | 3 * 2 = 6 |
| / | Division | 4 / 2 = 2 |
| % | Modulus (reminder after division) | 3 % 2 = 1 |


```C
int a = 3;
int b = 5;
int c = a + b; // c holds 8
```

# Challenge
```C
#include <stdio.h>

int main() {
    // Write code here
    
    // Don't change below this line
    printf("a = %2.1f, b = %2.1f, c = %2.1f", a, b, c);
    return 0;
};

```

```
a = 5.0, b = 2.0, c = 2.5
```