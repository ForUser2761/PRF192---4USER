#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//1 nam nhuan la: 1 nam chia het cho 4 nhung ko chia het cho 100

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  //khai bao mang gom 5 phan tu
  int year[5];
  int i;

  //input array with 5 element
  for(i = 0; i < 5; i++) {
    scanf("%d", &year[i]);
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  //display the leap year
  for ( i = 0; i < 5; i++)
  {
    // check the year is leap
    if ((year[i] % 4 == 0 && year[i] % 100 != 0) || (year[i] % 400 == 0))
    {
      printf("%d ", year[i]);
    }
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
