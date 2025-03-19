#include <stdio.h>


int kiemTraPalindrome(int number) {
    if (number < 0) {
        return 0; // Negative numbers are not considered palindromes
    }
    int reversed = 0;
    int original = number;
    while (number != 0) {
        int lastDigit = number % 10;
        reversed = reversed * 10 + lastDigit;
        number /= 10;
    }
    return original == reversed;
}

int main() {

    int num;
    printf("Nhap vao so: " );
    scanf("%d", &num);

    if (kiemTraPalindrome(num))
    {
        printf("dung\n");
    }else {
        printf("sai\n");
    }
    

}