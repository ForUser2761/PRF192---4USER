#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void sortDescending(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
      for (j = 0; j < n - i - 1; j++) {
          if (arr[j] < arr[j + 1]) { // Đổi chỗ nếu phần tử trước nhỏ hơn phần tử sau
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
          }
      }
  }
}

int isOdd(int number) {
  return (number % 2 != 0);
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  //nhap n phan tu
  int sizeArray, i = 0;

  scanf("%d", &sizeArray);

  //khai bao mang
  int array[100];

  //nhap cac phan tu trong mang vao
  for(i = 0; i < sizeArray; i++) {
    scanf("%d", &array[i]);
  }

  //sap xep mang theo thu tu giam dan
  sortDescending(array, sizeArray);


  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  // duyet qua mang va hien thi ra nhung so le
  for ( i = 0; i < sizeArray; i++)
  {
    if (isOdd(array[i]))
    {
      /* code */
      printf("%d ", array[i]);
    }
    
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
