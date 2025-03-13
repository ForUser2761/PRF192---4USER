#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char str[100]; // Chuỗi có tối đa 100 ký tự
    int upperCount = 0, lowerCount = 0, specialCount = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin); // Nhập chuỗi bao gồm cả khoảng trắng

    // Duyệt từng ký tự trong chuỗi
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        if (isupper(ch)) {
            upperCount++;
        } else if (islower(ch)) {
            lowerCount++;
        } else if (ch != '\n') { // Bỏ qua ký tự xuống dòng
            specialCount++; // Không phải chữ hoa, chữ thường thì là ký tự đặc biệt
        }
    }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("Upper: %d\\n", upperCount);
    printf("Lower: %d\\n", lowerCount);
    printf("Special: %d\\n", specialCount);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
