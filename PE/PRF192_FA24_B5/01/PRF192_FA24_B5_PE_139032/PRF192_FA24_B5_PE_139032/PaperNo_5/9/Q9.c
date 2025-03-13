#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isPrime(int n) {
    if (n < 2) return 0; // Số nhỏ hơn 2 không phải số nguyên tố
    if (n == 2) return 1; // 2 là số nguyên tố
    if (n % 2 == 0) return 0; // Số chẵn >2 không phải số nguyên tố

    // Kiểm tra từ 3 đến sqrt(n), bỏ qua số chẵn
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1; // Nếu không chia hết cho số nào, là số nguyên tố
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  
   int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
  if (isPrime(n)) {
        printf("0x%X\n", n); // In số nguyên tố dưới dạng hệ hexa
    } else {
        printf("%d is not a prime number\n", n);
    }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
