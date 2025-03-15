#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <limits.h>

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

/**
 * @brief Tính số Fibonacci thứ n.
 *
 * Hàm này tính toán số Fibonacci thứ n bằng phương pháp đệ quy.
 * Dãy Fibonacci bắt đầu với 0 và 1, mỗi số tiếp theo là tổng của hai số trước đó.
 *
 * @param n Vị trí của số Fibonacci cần tính (n >= 0).
 * @return Số Fibonacci thứ n.
 */
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int fib = 1;
    int prevFib = 1;

    for (int i = 2; i < n; ++i) {
        int temp = fib;
        fib += prevFib;
        prevFib = temp;
    }

    return fib;
}

/**
 * @brief Tính giai thừa của một số nguyên.
 *
 * Hàm này tính toán giai thừa của số nguyên n (n!), được định nghĩa là
 * tích của tất cả các số nguyên dương từ 1 đến n.
 *
 * @param n Số nguyên không âm cần tính giai thừa.
 * @return Giai thừa của n.
 */
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

/**
 * @brief Kiểm tra xem một số có phải là số nguyên tố không.
 *
 * Hàm này xác định liệu số nguyên đầu vào có phải là số nguyên tố hay không.
 * Số nguyên tố là số tự nhiên lớn hơn 1 và chỉ có đúng hai ước số là 1 và chính nó.
 *
 * @param number Số nguyên cần kiểm tra.
 * @return Trả về 1 (true) nếu số là số nguyên tố.
 *         Trả về 0 (false) nếu số không phải là số nguyên tố.
 */
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

/**
 * @brief Tính tổng các ước số của một số nguyên.
 *
 * Hàm này tính tổng tất cả các ước số của số nguyên n đầu vào,
 * bao gồm cả 1 và chính số đó.
 *
 * @param n Số nguyên dương cần tính tổng ước.
 * @return Tổng các ước số của n.
 */
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

/**
 * @brief Đếm số lượng ước số của một số nguyên.
 *
 * Hàm này đếm tổng số ước số của số nguyên n đầu vào,
 * bao gồm cả 1 và chính số đó.
 *
 * @param n Số nguyên dương cần đếm ước.
 * @return Số lượng ước số của n.
 */
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

/**
 * @brief Kiểm tra xem một số có phải là số chính phương không.
 *
 * Hàm này xác định liệu số nguyên đầu vào có phải là số chính phương hay không.
 * Số chính phương là số tự nhiên có căn bậc hai là một số nguyên.
 *
 * @param number Số nguyên cần kiểm tra.
 * @return true nếu số là số chính phương; false nếu không phải.
 */
bool isSquareNumber(int number)
{
    return sqrt(number) * sqrt(number) == number;
}

/**
 * Hàm này sử dụng để kiểm tra xem 1 số có phải số lẻ hay không
 *
 * @param number Số cần kiểm tra
 * @return true nếu là số lẻ, false nếu không phải
 */
bool kiemTraSoLe(int number) {
    return number % 2 != 0;
}

/**
 * Hàm này sử dụng để kiểm tra xem 1 số có phải là số chẵn không
 *
 * @param number Số cần kiểm tra
 * @return true nếu là số chẵn, false nếu không phải
 */
bool kiemTraSoChan(int number) {
    return number % 2 == 0;
}

/**
 * Hàm này sử dụng để kiểm tra 1 số có phải là palindrome không ví dụ: 121,
 * 12321, 4554
 *
 * @param number Số cần kiểm tra
 * @return true nếu là số palindrome, false nếu không phải
 */
bool kiemTraPalindrome(int number) {
    if (number < 0) {
        return false; // Negative numbers are not considered palindromes
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

/**
 * Kiểm tra năm nhuận
 *
 * @param year Năm cần kiểm tra
 * @return true nếu là năm nhuận, false nếu không phải
 */
bool kiemTraNamNhuan(int year) {
    // A leap year is divisible by 4 but not by 100, unless it is also divisible by 400.
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/**
 * Kiểm tra chuỗi đối xứng
 *
 * @param str Chuỗi cần kiểm tra
 * @return true nếu chuỗi đối xứng, false nếu không phải
 */
bool kiemTraChuoiDoiXung(const char* str) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false; // Characters do not match
        }
        i++;
        j--;
    }
    return true; // All characters matched, it's a palindrome
}

/**
 * tính tổng số lẻ từ 0 -> số truyền vào
 *
 * @param upto Giới hạn trên để tính tổng
 * @return Tổng các số lẻ từ 0 đến upto
 */
int tinhTongSoLe(int upto) {
    int sum = 0;
    for (int number = 1; number <= upto; number++) {
        if (kiemTraSoLe(number)) {
            sum += number;
        }
    }
    return sum;
}

/**
 * tính tổng số chẵn từ 0 -> số truyền vào
 *
 * @param upto Giới hạn trên để tính tổng
 * @return Tổng các số chẵn từ 0 đến upto
 */
int tinhTongSoChan(int upto) {
    int sum = 0;
    for (int i = 0; i <= upto; i++) {
        if (kiemTraSoChan(i)) {
            sum += i;
        }
    }
    return sum;
}

/**
 * kiểm tra 1 số có phải là số chính phương không
 *
 * @param number Số cần kiểm tra
 * @return true nếu là số chính phương, false nếu không phải
 */
bool kiemTraSoChinhPhuong(int number) {
    if (number < 0) {
        return false; // Negative numbers cannot be perfect squares
    }

    int sqrt_num = (int)sqrt(number);
    return sqrt_num * sqrt_num == number;
}

/**
 * tìm ước chung lớn nhất của 2 số
 *
 * @param a Số thứ nhất
 * @param b Số thứ hai
 * @return Ước chung lớn nhất của a và b
 */
int timUocChungLonNhat(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/**
 * Tìm bội số chung nhỏ nhất của 2 số
 *
 * @param a Số thứ nhất
 * @param b Số thứ hai
 * @return Bội số chung nhỏ nhất của a và b
 */
int timBoiSoChungNhoNhat(int a, int b) {
    return abs(a * b) / timUocChungLonNhat(a, b);
}

/**
 * tìm ra n số là bội chung nhỏ nhât của 2 số num1 và num2
 *
 * @param num1 Số thứ nhất
 * @param num2 Số thứ hai
 * @param n Số lượng bội chung cần tìm
 * @param result Mảng để lưu kết quả
 */
void findNLCMs(int num1, int num2, int n, int* result) {
    int lcm = timBoiSoChungNhoNhat(num1, num2);
    for (int i = 1; i <= n; i++) {
        result[i-1] = lcm * i;
    }
}

/**
 * Tìm bội chung nhỏ nhất của một mảng số
 *
 * @param arr Mảng các số
 * @param size Kích thước của mảng
 * @return Bội chung nhỏ nhất của tất cả các số trong mảng
 */
int lcmOfArray(int* arr, int size) {
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result = timBoiSoChungNhoNhat(result, arr[i]);
    }
    return result;
}

/**
 * tìm ước chung nhỏ nhất của 2 số
 *
 * @param a Số thứ nhất
 * @param b Số thứ hai
 * @return Ước chung nhỏ nhất của a và b
 */
int timUocChungNhoNhat(int a, int b) {
    return a * (b / timUocChungLonNhat(a, b));
}

/**
 * code tính tổng các số từ 0 -> số được truyền vào trong C
 *
 * @param number Giới hạn trên để tính tổng
 * @return Tổng các số từ 0 đến number
 */
int tinhTongTu0(int number) {
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        sum += i;
    }
    return sum;
}

/**
 * code đảo ngược 1 số
 *
 * @param number Số cần đảo ngược
 * @return Số đã đảo ngược
 */
int daoNguocSo(int number) {
    int reversed = 0;
    while (number != 0) {
        int lastDigit = number % 10;
        reversed = reversed * 10 + lastDigit;
        number /= 10;
    }
    return reversed;
}

/**
 * code tính giai thừa 1 số
 *
 * @param number Số cần tính giai thừa
 * @return Giai thừa của số
 */
long tinhGiaiThua(int number) {
    long result = 1;
    for (int factor = 2; factor <= number; factor++) {
        result *= factor;
    }
    return result;
}

/**
 * kiểm tra xem đủ tuổi chưa
 *
 * @param birthYear Năm sinh
 * @param birthMonth Tháng sinh
 * @param birthDay Ngày sinh
 * @param age Số tuổi cần kiểm tra
 * @return true nếu đủ tuổi, false nếu chưa đủ
 */
bool kiemTraXemDuTuoiChua(int birthYear, int birthMonth, int birthDay, int age) {
    time_t t = time(NULL);
    struct tm* now = localtime(&t);
    
    int currentYear = now->tm_year + 1900;
    int currentMonth = now->tm_mon + 1;
    int currentDay = now->tm_mday;
    
    if (currentYear - birthYear > age) {
        return true;
    } else if (currentYear - birthYear == age) {
        if (currentMonth > birthMonth) {
            return true;
        } else if (currentMonth == birthMonth) {
            return currentDay >= birthDay;
        }
    }
    
    return false;
}

/**
 * kiểm tra xem chuỗi truyền vào có đủ số lượng kí tự từ min tới max hay không
 *
 * @param input Chuỗi cần kiểm tra
 * @param min Độ dài tối thiểu
 * @param max Độ dài tối đa
 * @return true nếu độ dài chuỗi nằm trong khoảng [min, max], false nếu không
 */
bool kiemTraXemCoDuSoLuongKiTuKhong(const char* input, int min, int max) {
    if (input == NULL) {
        return false; // Null string does not meet any length requirements
    }
    int length = strlen(input);
    return length >= min && length <= max;
}

/**
 * kiểm tra số nguyên tố
 *
 * @param number Số cần kiểm tra
 * @return true nếu là số nguyên tố, false nếu không phải
 */
bool kiemTraSoNguyenTo(int number) {
    if (number <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false; // Number is divisible by another number, so not prime
        }
    }
    return true; // Number is prime
}

/**
 * Kiểm tra xem một số có phải là số hoàn hảo không ? Ví dụ số 6, 28, 496, 8128
 * 6 = 1 + 2 + 3
 *
 * @param a Số cần kiểm tra
 * @return true nếu là số hoàn hảo, false nếu không phải
 */
bool kiemtraSoHoanHao(int a) {
    int sum = 0;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) // tổng các ước số của a
        {
            sum += i;
        }
    }
    if (sum == a) {
        return true;
    }
    return false;
}

/**
 * Tính chu vi của hình tam giác.
 *
 * @param sideA Cạnh thứ nhất
 * @param sideB Cạnh thứ hai
 * @param sideC Cạnh thứ ba
 * @return Chu vi của hình tam giác
 */
double calculatePerimeter(int sideA, int sideB, int sideC) {
    return sideA + sideB + sideC;
}

/**
 * Tính diện tích của hình tam giác sử dụng công thức Heron.
 *
 * @param sideA Cạnh thứ nhất
 * @param sideB Cạnh thứ hai
 * @param sideC Cạnh thứ ba
 * @return Diện tích của hình tam giác
 */
double calculateArea(int sideA, int sideB, int sideC) {
    double s = (sideA + sideB + sideC) / 2.0;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

/**
 * Kiểm tra xem ba cạnh cho trước có thể tạo thành một hình tam giác hay không.
 *
 * @param sideA Cạnh thứ nhất của tam giác
 * @param sideB Cạnh thứ hai của tam giác
 * @param sideC Cạnh thứ ba của tam giác
 * @return true nếu ba cạnh có thể tạo thành một hình tam giác, ngược lại false
 */
bool isValidTriangle(double sideA, double sideB, double sideC) {
    return (sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA);
}

/**
 * Tính diện tích của hình chữ nhật.
 *
 * @param width Chiều rộng của hình chữ nhật
 * @param height Chiều dài của hình chữ nhật
 * @return Diện tích của hình chữ nhật
 */
double calculateRectangleArea(double width, double height) {
    return width * height;
}

/**
 * Tính chu vi của hình chữ nhật.
 *
 * @param width Chiều rộng của hình chữ nhật
 * @param height Chiều dài của hình chữ nhật
 * @return Chu vi của hình chữ nhật
 */
double calculateRectanglePerimeter(double width, double height) {
    return 2 * (width + height);
}

/**
 * Tính diện tích của hình thoi.
 *
 * @param diagonal1 Đường chéo thứ nhất của hình thoi
 * @param diagonal2 Đường chéo thứ hai của hình thoi
 * @return Diện tích của hình thoi
 */
double calculateRhombusArea(double diagonal1, double diagonal2) {
    return (diagonal1 * diagonal2) / 2;
}

/**
 * Tính chu vi của hình thoi.
 *
 * @param side Cạnh của hình thoi
 * @return Chu vi của hình thoi
 */
double calculateRhombusPerimeter(double side) {
    return 4 * side;
}

/**
 * Kiểm tra xem tứ giác với bốn cạnh cho trước có phải là hình thoi hay không.
 *
 * @param sideA Cạnh thứ nhất của tứ giác
 * @param sideB Cạnh thứ hai của tứ giác
 * @param sideC Cạnh thứ ba của tứ giác
 * @param sideD Cạnh thứ tư của tứ giác
 * @return true nếu tứ giác là hình thoi, ngược lại false
 */
bool isRhombus(double sideA, double sideB, double sideC, double sideD) {
    return (sideA == sideB) && (sideB == sideC) && (sideC == sideD);
}

/**
 * Tính diện tích của hình tròn.
 *
 * @param radius Bán kính của hình tròn
 * @return Diện tích của hình tròn
 */
double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

/**
 * Kiểm tra xem các điểm cho trước có tạo thành một hình tròn hay không.
 *
 * @param centerX Tọa độ x của tâm hình tròn
 * @param centerY Tọa độ y của tâm hình tròn
 * @param radius Bán kính dự kiến của hình tròn
 * @param points Mảng các điểm trên đường biên cần kiểm tra
 * @param numPoints Số lượng điểm
 * @return true nếu tất cả các điểm đều cách tâm một khoảng bằng bán kính, ngược lại false
 */
bool isCircle(double centerX, double centerY, double radius, double points[][2], int numPoints) {
    for (int i = 0; i < numPoints; i++) {
        double distance = sqrt(pow(points[i][0] - centerX, 2) + pow(points[i][1] - centerY, 2));
        if (fabs(distance - radius) > 1e-6) { // Sử dụng ngưỡng nhỏ để so sánh khoảng cách
            return false;
        }
    }
    return true;
}

/**
 * Tính chu vi của hình tròn.
 *
 * @param radius Bán kính của hình tròn
 * @return Chu vi của hình tròn
 */
double calculateCircleCircumference(double radius) {
    return 2 * M_PI * radius;
}

/**
 * Chuyển đổi một số từ hệ cơ số hiện tại sang hệ cơ số mong muốn.
 *
 * @param number Số cần chuyển đổi dưới dạng chuỗi
 * @param currentBase Hệ cơ số hiện tại của số
 * @param targetBase Hệ cơ số muốn chuyển đổi sang
 * @param result Chuỗi kết quả sau khi chuyển đổi
 * @return 0 nếu thành công, -1 nếu thất bại
 */
int convertBase(const char* number, int currentBase, int targetBase, char* result) {
    // Chuyển đổi số từ hệ cơ số hiện tại sang hệ cơ số 10
    long decimalValue = strtol(number, NULL, currentBase);
    
    // Chuyển đổi số từ hệ cơ số 10 sang hệ cơ số mong muốn
    if (targetBase < 2 || targetBase > 36) {
        return -1; // Hệ cơ số không hợp lệ
    }
    
    // Xử lý trường hợp đặc biệt
    if (decimalValue == 0) {
        strcpy(result, "0");
        return 0;
    }
    
    int index = 0;
    char temp[100];
    
    while (decimalValue > 0) {
        int remainder = decimalValue % targetBase;
        if (remainder < 10) {
            temp[index++] = remainder + '0';
        } else {
            temp[index++] = remainder - 10 + 'A';
        }
        decimalValue /= targetBase;
    }
    
    // Đảo ngược chuỗi kết quả
    for (int i = 0; i < index; i++) {
        result[i] = temp[index - i - 1];
    }
    result[index] = '\0';
    
    return 0;
}

/**
 * Tính khoảng cách giữa hai điểm trong không gian 2D.
 *
 * @param x1 Tọa độ x của điểm thứ nhất
 * @param y1 Tọa độ y của điểm thứ nhất
 * @param x2 Tọa độ x của điểm thứ hai
 * @param y2 Tọa độ y của điểm thứ hai
 * @return Khoảng cách giữa hai điểm
 */
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

/**
 * Chuyển đổi một chuỗi sao cho tất cả các chữ cái đầu tiên của mỗi từ được in hoa.
 *
 * @param input Chuỗi đầu vào
 * @param result Chuỗi kết quả sau khi chuyển đổi
 */
void capitalizeFirstLetters(const char* input, char* result) {
    if (input == NULL || strlen(input) == 0) {
        if (result != NULL) {
            result[0] = '\0';
        }
        return;
    }

    int i = 0, j = 0;
    bool newWord = true;

    while (input[i] != '\0') {
        if (isspace(input[i])) {
            result[j++] = input[i];
            newWord = true;
        } else if (newWord) {
            result[j++] = toupper(input[i]);
            newWord = false;
        } else {
            result[j++] = tolower(input[i]);
        }
        i++;
    }
    
    result[j] = '\0';
}

/**
 * Tìm vị trí đầu tiên của một từ trong một chuỗi.
 *
 * @param sentence Chuỗi đầu vào
 * @param word Từ cần tìm vị trí
 * @return Vị trí đầu tiên của từ trong chuỗi, hoặc -1 nếu từ không tồn tại trong chuỗi
 */
int findWordIndex(const char* sentence, const char* word) {
    if (sentence == NULL || word == NULL) {
        return -1;
    }

    char* copy = strdup(sentence);
    char* token = strtok(copy, " \t\n");
    int index = 0;

    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            free(copy);
            return index;
        }
        index += strlen(token) + 1; // Cộng thêm 1 để tính khoảng trắng giữa các từ
        token = strtok(NULL, " \t\n");
    }

    free(copy);
    return -1;
}

/**
 * Tìm số lần xuất hiện của một từ trong một chuỗi.
 *
 * @param sentence Chuỗi đầu vào
 * @param word Từ cần đếm số lần xuất hiện
 * @return Số lần xuất hiện của từ trong chuỗi
 */
int countWordOccurrences(const char* sentence, const char* word) {
    if (sentence == NULL || word == NULL || strlen(word) == 0) {
        return 0;
    }

    char* copy = strdup(sentence);
    char* token = strtok(copy, " \t\n");
    int count = 0;

    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " \t\n");
    }

    free(copy);
    return count;
}

/**
 * Tìm số lớn nhất trong một mảng.
 *
 * @param array Mảng đầu vào
 * @param size Kích thước của mảng
 * @return Số lớn nhất trong mảng, hoặc INT_MIN nếu mảng rỗng hoặc NULL
 */
int findMaxInArray(int* array, int size) {
    if (array == NULL || size == 0) {
        return INT_MIN;
    }

    int max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

/**
 * Tìm số lớn thứ n trong một mảng.
 *
 * @param array Mảng đầu vào
 * @param size Kích thước của mảng
 * @param n Thứ tự lớn của số cần tìm (n = 1 nghĩa là số lớn nhất, n = 2 nghĩa là số lớn thứ hai, ...)
 * @return Số lớn thứ n trong mảng, hoặc INT_MIN nếu mảng không đủ phần tử hoặc n không hợp lệ
 */
int findNthLargestInArray(int* array, int size, int n) {
    if (array == NULL || size < n || n <= 0) {
        return INT_MIN;
    }
    
    // Sao chép mảng
    int* sortedArray = (int*)malloc(size * sizeof(int));
    if (sortedArray == NULL) {
        return INT_MIN; // Không thể cấp phát bộ nhớ
    }
    
    for (int i = 0; i < size; i++) {
        sortedArray[i] = array[i];
    }
    
    // Sắp xếp mảng (sử dụng thuật toán sắp xếp đơn giản)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (sortedArray[j] < sortedArray[j + 1]) {
                int temp = sortedArray[j];
                sortedArray[j] = sortedArray[j + 1];
                sortedArray[j + 1] = temp;
            }
        }
    }
    
    // Lấy phần tử thứ n
    int result = sortedArray[n - 1];
    
    free(sortedArray);
    return result;
}

// Hàm main để kiểm tra
int main() {
    int array[] = {2, 4, 6};
    int size = sizeof(array) / sizeof(array[0]);
    
    printf("%d\n", lcmOfArray(array, size));
    
    return 0;
}