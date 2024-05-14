# Syntax
+ printf(), print formatted, function can print a string to console, including variables within the string

```
    printf(string, value1, value2, value3);
```

# Example
```
    printf("%d is a number", 5);
    printf("%d is a number, but %s is a string", 5, "4user.net");
```

# Format Specifiers
|type| Size(bytes) |Format Specifier|
|---| ----| ---|
|int| at least 2, usually 4| %d, %i|
|char|1| %c|
|float|4|%f|
|double| 8 | %lf|
|long|at least 4, usally 8 | %ld|

# Practice
```
#include <stdio.h>

int main() {
  
 int ageLearnedToRide = 5;


 printf("I was years old when I learned to ride a bike.\n");
 printf("I hope I still remember how to ride.");
}
```