#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int checkVowel(char c)
{
  // Chuyển ký tự về chữ thường để dễ so sánh
  char lower = tolower(c);

  // Kiểm tra nguyên âm
  if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  char str[100];
  int i, countVowel = 0, countConsonant = 0;

  // input string
  fgets(str, sizeof(str), stdin);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  for (i = 0; i < strlen(str); i++)
  {
    /* code */
    // chuan hoa chuoi
    char ch = tolower(str[i]);

    if (checkVowel(ch))
    {
      /* code */
      countVowel++;
    }
    else if (isalpha(ch))
    {
      countConsonant++;
    }
  }

  printf("%d\n", countVowel);
  printf("%d\n", countConsonant);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
