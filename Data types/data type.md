# Data type

| Type | Description | Values |
|------|-------------|---------|
|int | integer numbers | -2,147,483,648 to 2,147,483,647 or -2^31  to 2^31 - 1|
|float| a number with possible decimals| 6 decimal places|
| double |  a number with possible decimals | 15 decimal places |
| char | store on character (letter or number), luon luon nam trong dau  '' | a single character |

# Practice 
```
#include <stdio.h>

int main() {
  
  // Fix the missing data types
  studentRank;
  studentFeeTotal;
  studentGradeLetter;
  
  // No need to make any changes below here, use these as a hint to how each variable above should be declared
 studentRank = 1;
 studentFeeTotal = 100.56;
 studentGradeLetter = 'A';

 printf("Student's Rank in class: %dst\n", studentRank);
 printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
 printf("Student's Grade: %c\n", studentGradeLetter);
}
```
