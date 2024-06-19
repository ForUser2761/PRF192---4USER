# Ternary

The conditional operator in C is kind of similar to the if-else statement as it follows the same algorithm as of if-else statement but the conditional operator takes less space and helps to write the if-else statements in the shortest way possible. It is also known as the ternary operator in C as it operates on three operands.

## Syntax
```C
variable = Expression1? Expression2: Expression3;
```

```
variable = (condition)?Expression2 : Expression3;
```
```
(condition)? (variable = Expression2): (variable = Expression3);
```



```C
// C program to find largest among two 
// numbers using ternary operator 

#include <stdio.h> 

int main() 
{ 
	int m = 5, n = 4; 

	(m > n) ? printf("m is greater than n that is %d > %d", 
					m, n) 
			: printf("n is greater than m that is %d > %d", 
					n, m); 

	return 0; 
}

```