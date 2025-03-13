#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,j, count;

  scanf("%d", &n);

  int array[100], visited[100];
  
  for ( i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
    visited[i] = 0;
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for ( i = 0; i < n; i++)
  {
    if (array[i] % 2 != 0 && visited[i] == 0) // so le nay chua tung hien thi ra man hinh
    {
      count = 0;

      //them 1 vong lap for, de dem so lan xuat hien array[i]
      for ( j = 0; j < n; j++)
      {
        if (array[i] == array[j])
        {
          count++;
          visited[j] = 1;
        }
        
      }

      if (count > 1) 
      {
        printf("%d \n", array[i]);
      }
      
    }
    
    
  }
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
