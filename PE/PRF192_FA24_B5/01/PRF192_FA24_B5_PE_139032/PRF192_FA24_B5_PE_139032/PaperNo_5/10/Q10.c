#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int binaryToDecimal(const char *binary) {
    int decimal = 0, length = strlen(binary);

    for (int i = 0; i < length; i++) {
        decimal += (binary[i] - '0') * pow(2, length - i - 1);
    }

    return decimal;
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  
  char binary[17]; // Tối đa 16 bit + 1 ký tự null
    printf("Enter a binary number (max 16 bits): ");
    scanf("%16s", binary);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   printf("%d\n", binaryToDecimal(binary));
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
