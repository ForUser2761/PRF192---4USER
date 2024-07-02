# For
for loop in C programming is a  repetition control structure that allows programmers to write a loop that will be executed a specific number of times. for loop enables programmers to perform n number of steps together in a single line.

```C
for (initialize expression; test expression; update expression)
{
    //
    // body of for loop
    //
}
```


# While
While loop does not depend upon the number of iterations. In for loop the number of iterations was previously known to us but in the While loop, the execution is terminated on the basis of the test condition. If the test condition will become false then it will break from the while loop else body will be executed.

```C
initialization_expression;

while (test_expression)
{
    // body of the while loop

    update_expression;
}
```

# Loop Infinite
```C
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


```

```C
// C program to demonstrate 
// infinite loop using while 
// loop
#include <stdio.h>

// Driver code
int main() 
{
while (1)
	printf("This loop will run forever.\n");
return 0;
}



```
