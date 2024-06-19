# Unary

## Definition
The unary arithmetic operators operate or work with a single operand. In C, we have two unary arithmetic operators which are as follows:

| Operator | Symbol | Operation | Implementation |
| --- | --- | --- | --- |
| Decrement Operator | -- | Decreases the integer value of the variable by one. | -–h or h–- |
| Increment Operator | ++ | Increases the integer value of the variable by one. | ++h or h++ |
| Unary Plus Operator | + | Returns the value of its operand. | +h |
| Unary Minus Operator | – | Returns the negative of the value of its operand. | -h |

```C
// C program to demonstrate working
// of Unary arithmetic
// operators
#include <stdio.h>

int main()
{
	int a = 10, b = 4, res;

	printf("Post Increment and Decrement\n");
	// post-increment example:
	// res is assigned 10 only, a is not updated yet
	res = a++;
	printf("a is %d and result is %d\n", a, res); // a becomes 11 now

	// post-decrement example:
	// res is assigned 11 only, a is not updated yet
	res = a--;
	printf("a is %d and result is %d\n", a, res); // a becomes 10 now

	printf("\nPre Increment and Decrement\n");
	// pre-increment example:
	// res is assigned 11 now since
	// a is updated here itself
	res = ++a;

	// a and res have same values = 11
	printf("a is %d and result is %d\n", a, res);

	// pre-decrement example:
	// res is assigned 10 only since a is updated here
	// itself
	res = --a;

	// a and res have same values = 10
	printf("a is %d and result is %d\n", a, res);

	return 0;
}

```

```c
int x = 0, a = 0;
	a = x++;
=> thuc chat la gi:
a = x;
x = x + 1;

```

```c
int x = 0, a = 0;
	a = ++x;
=> thuc chat la gi:
x = x + 1;
a = x;

```