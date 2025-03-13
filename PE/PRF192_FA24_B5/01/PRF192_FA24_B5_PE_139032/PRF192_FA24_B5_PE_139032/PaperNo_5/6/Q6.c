#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Hàm kiểm tra nguyên âm
// Trả về 1 nếu là nguyên âm, 0 nếu không phải
int isVowel(char c) {
    // Chuyển ký tự về chữ thường để đơn giản hóa việc kiểm tra
    c = tolower(c);
    
    // Kiểm tra xem ký tự có phải là một trong các nguyên âm a, e, i, o, u
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Hàm kiểm tra phụ âm
// Trả về 1 nếu là phụ âm, 0 nếu không phải
int isConsonant(char c) {
    // Chuyển ký tự về chữ thường
    c = tolower(c);
    
    // Kiểm tra xem ký tự có phải là chữ cái
    if (isalpha(c)) {
        // Nếu là chữ cái và không phải nguyên âm thì là phụ âm
        return !isVowel(c);
    }
    
    // Nếu không phải chữ cái thì không phải phụ âm
    return 0;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100]; // Giới hạn chuỗi tối đa 100 ký tự
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Đọc chuỗi có khoảng trắng

    // Duyệt qua từng ký tự trong chuỗi
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]); // Chuyển ký tự về chữ thường

        // Kiểm tra nguyên âm
        if (isVowel(ch)) {
            vowels++;
        }
        // Kiểm tra phụ âm (là chữ cái nhưng không phải nguyên âm)
        else if (isConsonant(ch)) {
            consonants++;
        }
    }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%d\\n", vowels);
    printf("%d\\n", consonants);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
