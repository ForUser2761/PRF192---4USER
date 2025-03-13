#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; i < n; i++)
  {
    // Duyệt từng cột trong dòng
    for (int j = 0; j < n - i; j++)
    {
      // Điều kiện in '*'
      if (i == 0 || j == 0 || j == (n - i - 1))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n"); // Xuống dòng sau mỗi dòng
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
