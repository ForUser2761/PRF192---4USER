# Relation operator

In C, relational operators are the symbols that are used for comparison between two values to understand the type of relationship a pair of numbers shares. The result that we get after the relational operation is a boolean value, that tells whether the comparison is true or false. Relational operators are mainly used in conditional statements and loops to check the conditions in C programming.

| Operator | Operator name | 
| --- | --- | 
| == | Equal to |
| != | Not equal to |
| < | Less than | 
| > | Greater than | 
| <= | Less than |
| >= | Greater than equal to |

```C
// C program to demonstrate working of relational operators 
#include <stdio.h> 

int main() 
{ 
	int a = 10, b = 4; 

	// greater than example 
	if (a > b) 
		printf("a is greater than b\n"); 
	else
		printf("a is less than or equal to b\n"); 

	// greater than equal to 
	if (a >= b) 
		printf("a is greater than or equal to b\n"); 
	else
		printf("a is lesser than b\n"); 

	// less than example 
	if (a < b) 
		printf("a is less than b\n"); 
	else
		printf("a is greater than or equal to b\n"); 

	// lesser than equal to 
	if (a <= b) 
		printf("a is lesser than or equal to b\n"); 
	else
		printf("a is greater than b\n"); 

	// equal to 
	if (a == b) 
		printf("a is equal to b\n"); 
	else
		printf("a and b are not equal\n"); 

	// not equal to 
	if (a != b) 
		printf("a is not equal to b\n"); 
	else
		printf("a is equal b\n"); 

	return 0; 
}


```