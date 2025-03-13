#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, v, p; // Số phần tử, giá trị cần chèn, vị trí cần chèn
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[100]; // Giả sử tối đa 100 phần tử
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value v: ");
    scanf("%d", &v);

    printf("Enter position p: ");
    scanf("%d", &p);

    // Kiểm tra vị trí p có hợp lệ không
    if (p < 0 || p > n) {
        printf("Invalid position!\\n");
        return 1; // Kết thúc chương trình nếu vị trí không hợp lệ
    }

    // Dời phần tử sang phải để tạo chỗ trống cho v
    for (int i = n; i > p; i--) {
        arr[i] = arr[i - 1];
    }

    // Gán v vào vị trí p
    arr[p] = v;
    n++; // Tăng số lượng phần tử
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
