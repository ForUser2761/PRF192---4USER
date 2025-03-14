#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * @brief Kiểm tra xem một ký tự có phải là nguyên âm không.
 *
 * Hàm này xác định liệu ký tự đầu vào có phải là nguyên âm
 * (một trong các ký tự 'a', 'e', 'i', 'o', 'u' hoặc các ký tự viết hoa tương ứng)
 * hay không. Hàm đảm bảo rằng đầu vào là một ký tự chữ cái hợp lệ trước khi kiểm tra.
 *
 * @param ch Ký tự cần kiểm tra.
 * @return true nếu ký tự là nguyên âm; false nếu không phải.
 */
bool isVowel(char ch)
{
    // Chuyển ký tự thành chữ thường để dễ dàng so sánh
    char lower = tolower(ch);

    // Kiểm tra ký tự có phải chữ cái và có nằm trong danh sách nguyên âm không
    bool result = isalpha(ch) && (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
    return result;
}

/**
 * @brief Kiểm tra xem một ký tự có phải là phụ âm không.
 *
 * Hàm này xác định liệu ký tự đầu vào có phải là phụ âm hay không.
 * Phụ âm là bất kỳ ký tự chữ cái nào không phải là nguyên âm.
 *
 * @param ch Ký tự cần kiểm tra.
 * @return true nếu ký tự là phụ âm; false nếu không phải.
 */
bool isConsonant(char ch)
{
    // Chuyển ký tự thành chữ thường để dễ dàng so sánh
    char lower = tolower(ch);

    // Kiểm tra ký tự có phải chữ cái và không phải nguyên âm
    return isalpha(ch) && !isVowel(ch);
}

/**
 * @brief Kiểm tra xem một ký tự có phải là chữ cái hay không.
 *
 * Hàm này kiểm tra liệu ký tự đầu vào có thuộc bảng chữ cái tiếng Anh
 * (bao gồm các chữ cái viết hoa từ 'A' đến 'Z' và các chữ cái viết thường từ 'a' đến 'z') hay không.
 *
 * @param ch Ký tự cần kiểm tra.
 * @return Trả về 1 (true) nếu ký tự là chữ cái.
 *         Trả về 0 (false) nếu ký tự không phải là chữ cái.
 */
int isAlphabet(char ch) {
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}


int fibonacci(int n) {
    if (n == 0 || n == 1) 
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci ( n - 2);

}


int factorial(int n)
{
    int i = 1;
    int result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}


int isPrime(int number) {
    int i;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int tongUoc(int n) {
    int tong = 0, i = 1;

    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    return tong;
}



int demSoUoc(int n)
{
    int count = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}


bool isSquareNumber(int number)
{
    return sqrt(number) * sqrt(number) == number;
}