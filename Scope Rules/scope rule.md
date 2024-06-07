# Scope rules in C
+ The scope of a variable in C is the block or the region in the program where a variable is declared, defined, and used. Outside this region, we cannot access the variable and it is treated as an undeclared identifier.

```C
// C program to illustrate the scope of a variable
// C program to illustrate the scope of a variable
#include <stdio.h>

int main()
{
	// Scope of this variable is within main() function
	// only.
	int var = 34;

	printf("%d", var);
	return 0;
}

// function where we try to access the var defined in main()
void func() { 
	printf("%d", var); 
}


```

## Types ò scripe rules in C

C scrope rules can be covered uder the following two categories:
+ Global scopes
+ Local scope

## Global scope
The global scope refers to the region outside any block or function.

- The variables declared in the global scope are called **global variables.**
- Global variables are visible in **every part of the program.**
- Global is also called **File Scope** as the scope of an identifier starts at the beginning of the file and ends at the end of the file.

```C
// C program to illustrate the global scope
#include <stdio.h>

// variable declared in global scope
int global = 5;

// global variable accessed from
// within a function
void display()
{
	printf("%d\n", global);
}

// main function
int main()
{
	printf("Before change within main: ");
	display();

	// changing value of global
	// variable from main function
	printf("After change within main: ");
	global = 10;
	display();
}

```

## Local scope
The local scope refers to the region inside a block or a function. It is the space enclosed between the **{ } braces.**

- The variables declared within the local scope are called **local variables.**
- Local variables are visible in the **block they are declared** in and **other blocks nested** inside that block.
- Local scope is also called **Block scope.**

```C
// C program to illustrate the local scope
#include <stdio.h>

// Driver Code
int main()
{
	{
		int x = 10, y = 20;
		{
			// The outer block contains
			// declaration of x and
			// y, so following statement
			// is valid and prints
			// 10 and 20
			printf("x = %d, y = %d\n", x, y);
			{
				// y is declared again,
				// so outer block y is
				// not accessible in this block
				int y = 40;

				// Changes the outer block
				// variable x to 11
				x++;

				// Changes this block's
				// variable y to 41
				y++;

				printf("x = %d, y = %d\n", x, y);
			}

			// This statement accesses
			// only outer block's
			// variables
			printf("x = %d, y = %d\n", x, y);
		}
	}
	return 0;
}


```