#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int years[5];
  int i;
  char input[100];

  printf("Enter 5 years: ");
  // fgets(input, sizeof(input), stdin);

  // char *token = strtok(input, " ");
  // for (i = 0; i < 5 && token != NULL; i++) {
  //   years[i] = atoi(token);
  //   token = strtok(NULL, " ");
  // }

  for (i = 0; i < 5; i++)
  {
    scanf("%d", &years[i]);
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  int hasLeapYear = 0; // Biến kiểm tra có năm nhuận hay không
  for (i = 0; i < 5; i++)
  {
    if ((years[i] % 4 == 0 && years[i] % 100 != 0) || (years[i] % 400 == 0))
    {
      printf("%d ", years[i]);
      hasLeapYear = 1;
    }
  }

  if (!hasLeapYear)
  {
    printf("No leap year found.");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
