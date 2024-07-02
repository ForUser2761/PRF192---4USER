// C program to demonstrate infinite
// loops using for loop
#include <stdio.h>

// Driver code
int main ()
{
int i;

// This is an infinite for loop 
// as the condition expression 
// is blank
for ( ; ; )
{
	printf("This loop will run forever.\n");
}

return 0;
}

