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

// Hàm kiểm tra số lẻ
// Trả về 1 nếu là số lẻ, 0 nếu là số chẵn
int isOdd(int number) {
    return (number % 2 != 0);
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n; // Số lượng phần tử
  int i, j, temp; // Biến phụ cho vòng lặp và hoán đổi
  int arr[100]; // Mảng lưu các số nguyên (giả sử tối đa 100 phần tử)
  
  // Nhập số lượng phần tử
  printf("Enter n: ");
  scanf("%d", &n);
  
  // Nhập n số nguyên
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  // Sắp xếp mảng theo thứ tự giảm dần (sử dụng thuật toán sắp xếp nổi bọt)
  sortDescending(arr, n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  // In ra các số lẻ
  for (i = 0; i < n; i++) {
    if (isOdd(arr[i])) { // Sử dụng hàm isOdd để kiểm tra
      printf("%d ", arr[i]);
    }
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
