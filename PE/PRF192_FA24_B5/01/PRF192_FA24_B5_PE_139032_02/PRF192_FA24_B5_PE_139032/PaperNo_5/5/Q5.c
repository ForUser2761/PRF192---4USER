#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  //khai bao n, v, p
  int n,v,p, i;
  //nhap vao n
  scanf("%d", &n);

  //khai bao ra mang
  int array[100];
  //nhap vao cac phan tu cua mang
  for(i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  //nhap toi v, p
  scanf("%d", &v);
  scanf("%d", &p);

  //chen`
  for(i = n ; i > p; i--) {
    array[i] = array[i - 1];
  }
  
  //gan th arr[p] = v
  array[p] = v;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
  //hien thi ra man hinh
  for(i = 0; i <= n; i++) {
    printf("%d ", array[i]);
  }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
