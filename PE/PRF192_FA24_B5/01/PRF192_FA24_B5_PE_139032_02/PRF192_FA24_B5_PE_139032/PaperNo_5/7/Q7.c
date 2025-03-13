#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int i, upperCount = 0, lowerCount = 0, specialCount = 0;

  // input s
  char str[100];
  fgets(str, sizeof(str), stdin);

  // duyet qua tung phan tu o trong mang char

  for (i = 0; i < strlen(str); i++)
  {
    char ch = str[i];

    if (isupper(ch))
    {
      upperCount++;
    }
    else if (islower(ch))
    {
      lowerCount++;
    }
    else if (ch != '\n')
    {
      specialCount++;
    }
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", upperCount);
  printf("%d", lowerCount);
  printf("%d", specialCount);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
