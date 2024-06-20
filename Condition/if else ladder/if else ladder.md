# If else ladder

```C
if (condition)
    statement;
else if (condition)
    statement;
.
.
else
    statement;

```

```C
// C program to illustrate nested-if statement 
#include <stdio.h> 

int main() 
{ 
	int i = 20; 

	if (i == 10) 
		printf("i is 10"); 
	else if (i == 15) 
		printf("i is 15"); 
	else if (i == 20) 
		printf("i is 20"); 
	else
		printf("i is not present"); 
}


```