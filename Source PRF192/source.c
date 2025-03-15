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

/**
 * Đổi vị trí số lẻ lớn nhất và nhỏ nhất trong mảng
 * 
 * @param arr Mảng cần xử lý
 * @param size Kích thước của mảng
 * @return true nếu đổi thành công, false nếu không có đủ số lẻ
 */
bool doiViTriSoLeLonNhatVaNhoNhat(int arr[], int size) {
    int maxOdd = -1, minOdd = -1;
    int maxOddIndex = -1, minOddIndex = -1;
    
    // Tìm vị trí số lẻ lớn nhất và nhỏ nhất
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { // Nếu là số lẻ
            if (maxOddIndex == -1 || arr[i] > maxOdd) {
                maxOdd = arr[i];
                maxOddIndex = i;
            }
            if (minOddIndex == -1 || arr[i] < minOdd) {
                minOdd = arr[i];
                minOddIndex = i;
            }
        }
    }
    
    // Kiểm tra xem có tìm thấy ít nhất 2 số lẻ không
    if (maxOddIndex == -1 || minOddIndex == -1 || maxOddIndex == minOddIndex) {
        return false; // Không có đủ số lẻ để đổi
    }
    
    // Đổi vị trí
    int temp = arr[maxOddIndex];
    arr[maxOddIndex] = arr[minOddIndex];
    arr[minOddIndex] = temp;
    
    return true;
}

/**
 * Kiểm tra số Armstrong
 * Số Armstrong là số mà tổng các lũy thừa của các chữ số bằng chính nó
 * Ví dụ: 153 = 1^3 + 5^3 + 3^3
 * 
 * @param num Số cần kiểm tra
 * @return true nếu là số Armstrong, false nếu không phải
 */
bool kiemTraSoArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    int temp = num;
    
    // Đếm số chữ số
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    
    // Tính tổng lũy thừa
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    return sum == original;
}

/**
 * Vẽ hình vuông đặc
 * 
 * @param size Kích thước cạnh hình vuông
 */
void veHinhVuong(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/**
 * Vẽ hình vuông rỗng dưới (phần dưới đặc)
 * 
 * @param size Kích thước cạnh hình vuông
 */
void veHinhVuongRongDuoi(int size) {
    int half = size / 2;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i < half) {
                if (j == 0 || j == size - 1 || i == 0) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
}

/**
 * Vẽ hình vuông rỗng trên (phần trên đặc)
 * 
 * @param size Kích thước cạnh hình vuông
 */
void veHinhVuongRongTren(int size) {
    int half = size / 2;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i >= half) {
                if (j == 0 || j == size - 1 || i == size - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
}

/**
 * Vẽ hình vuông rỗng giữa (phần giữa rỗng)
 * 
 * @param size Kích thước cạnh hình vuông
 */
void veHinhVuongRongGiua(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác ngược 1 (đỉnh ở dưới)
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacNguoc1(int height) {
    for (int i = height; i > 0; i--) {
        for (int j = 0; j < height - i; j++) {
            printf("  ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác ngược 2 (đỉnh ở trên)
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacNguoc2(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = 0; j < 2 * (height - i) - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác ngược 3 (tam giác vuông ngược)
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacNguoc3(int height) {
    for (int i = height; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác cân 1 (đỉnh ở trên)
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacCan1(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf("  ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác cân 2 (đỉnh ở dưới)
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacCan2(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = 0; j < 2 * (height - i) - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác có số (1)
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacCoSo1(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác có số (2)
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacCoSo2(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

/**
 * Vẽ tam giác chữ đối xứng
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacChuDoiXung(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf("  ");
        }
        
        // In chữ cái tăng dần
        for (int j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);
        }
        
        // In chữ cái giảm dần
        for (int j = i - 1; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        
        printf("\n");
    }
}

/**
 * Vẽ hình bình hành
 * 
 * @param width Chiều rộng hình bình hành
 * @param height Chiều cao hình bình hành
 */
void veHinhBinhHanh(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf("  ");
        }
        for (int j = 0; j < width; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/**
 * Vẽ ngôi nhà đơn giản
 * 
 * @param size Kích thước ngôi nhà
 */
void veNgoiNha(int size) {
    // Vẽ mái nhà (tam giác)
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Vẽ thân nhà (hình chữ nhật)
    for (int i = 0; i < size; i++) {
        // Vẽ cạnh trái
        printf("|");
        
        // Vẽ phần giữa
        for (int j = 0; j < 2 * size - 3; j++) {
            if (i == 0 || i == size - 1) {
                printf("-"); // Vẽ nền và trần
            } else if (j == (2 * size - 3) / 2 - 1 && i > size / 2) {
                printf("|"); // Vẽ cửa
            } else {
                printf(" ");
            }
        }
        
        // Vẽ cạnh phải
        printf("|\n");
    }
}

/**
 * Vẽ hình thoi
 * 
 * @param size Kích thước hình thoi (nửa chiều cao)
 */
void veHinhThoi(int size) {
    // Vẽ nửa trên
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            printf("  ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Vẽ nửa dưới
    for (int i = size - 2; i >= 0; i--) {
        for (int j = 0; j < size - i - 1; j++) {
            printf("  ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}


/**
 * Vẽ tam giác rỗng
 * 
 * @param height Chiều cao tam giác
 */
void veTamGiacRong(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == 2 * i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/**
 * Tính tổng các thành phần trong mảng
 * 
 * @param arr Mảng cần tính tổng
 * @param size Kích thước của mảng
 * @return Tổng các phần tử trong mảng
 */
int tinhTongMang(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

/**
 * Đếm số nguyên âm trong mảng
 * 
 * @param arr Mảng cần đếm
 * @param size Kích thước của mảng
 * @return Số lượng số nguyên âm trong mảng
 */
int demSoNguyenAm(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

/**
 * Tìm số nhỏ nhất trong mảng
 * 
 * @param arr Mảng cần tìm
 * @param size Kích thước của mảng
 * @return Số nhỏ nhất trong mảng
 */
int timSoNhoNhat(int arr[], int size) {
    if (size <= 0) return INT_MIN;
    
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

/**
 * Tìm số lớn nhất trong mảng
 * 
 * @param arr Mảng cần tìm
 * @param size Kích thước của mảng
 * @return Số lớn nhất trong mảng
 */
int timSoLonNhat(int arr[], int size) {
    if (size <= 0) return INT_MAX;
    
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/**
 * Tìm số nhỏ thứ 2 trong mảng
 * 
 * @param arr Mảng cần tìm
 * @param size Kích thước của mảng
 * @return Số nhỏ thứ 2 trong mảng, hoặc INT_MIN nếu không tìm thấy
 */
int timSoNhoThu2(int arr[], int size) {
    if (size < 2) return INT_MIN;
    
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }
    
    return (min2 == INT_MAX) ? INT_MIN : min2;
}

/**
 * Tìm số lớn thứ 2 trong mảng
 * 
 * @param arr Mảng cần tìm
 * @param size Kích thước của mảng
 * @return Số lớn thứ 2 trong mảng, hoặc INT_MIN nếu không tìm thấy
 */
int timSoLonThu2(int arr[], int size) {
    if (size < 2) return INT_MIN;
    
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    
    return (max2 == INT_MIN) ? INT_MIN : max2;
}

/**
 * Đảo ngược số
 * 
 * @param num Số cần đảo ngược
 * @return Số sau khi đảo ngược
 */
int daoNguocSo(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

/**
 * Sắp xếp mảng tăng dần
 * 
 * @param arr Mảng cần sắp xếp
 * @param size Kích thước của mảng
 */
void sapXepTangDan(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * Sắp xếp mảng giảm dần
 * 
 * @param arr Mảng cần sắp xếp
 * @param size Kích thước của mảng
 */
void sapXepGiamDan(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * Giảm số lượng phần tử trùng nhau trong mảng
 * 
 * @param arr Mảng cần xử lý
 * @param size Con trỏ đến kích thước của mảng, sẽ được cập nhật sau khi xử lý
 * @return Kích thước mới của mảng sau khi loại bỏ các phần tử trùng
 */
int giamPhanTuTrung(int arr[], int *size) {
    if (*size <= 1) return *size;
    
    int newSize = 1;
    
    for (int i = 1; i < *size; i++) {
        int j;
        for (j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        
        if (j == newSize) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    *size = newSize;
    return newSize;
}

/**
 * Tìm số xuất hiện nhiều nhất trong mảng
 * 
 * @param arr Mảng cần tìm
 * @param size Kích thước của mảng
 * @param count Con trỏ để lưu số lần xuất hiện của số đó
 * @return Số xuất hiện nhiều nhất
 */
int timSoXuatHienNhieuNhat(int arr[], int size, int *count) {
    if (size <= 0) {
        *count = 0;
        return 0;
    }
    
    int maxCount = 1;
    int currentCount;
    int mostFrequent = arr[0];
    
    for (int i = 0; i < size; i++) {
        currentCount = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }
        
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequent = arr[i];
        }
    }
    
    *count = maxCount;
    return mostFrequent;
}

/**
 * Chuyển đổi giây thành giờ, phút, giây
 * 
 * @param totalSeconds Tổng số giây
 * @param hours Con trỏ để lưu số giờ
 * @param minutes Con trỏ để lưu số phút
 * @param seconds Con trỏ để lưu số giây
 */
void tinhGioPhutGiay(int totalSeconds, int *hours, int *minutes, int *seconds) {
    *hours = totalSeconds / 3600;
    *minutes = (totalSeconds % 3600) / 60;
    *seconds = totalSeconds % 60;
}

/**
 * Bình phương các số lẻ trong mảng
 * 
 * @param arr Mảng cần xử lý
 * @param size Kích thước của mảng
 */
void binhPhuongSoLe(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = arr[i] * arr[i];
        }
    }
}

/**
 * Kiểm tra số nguyên tố
 * 
 * @param n Số cần kiểm tra
 * @return true nếu là số nguyên tố, false nếu không phải
 */
bool kiemTraSoNguyenTo(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

/**
 * Tính tổng n số đầu tiên
 * 
 * @param n Số lượng số cần tính tổng
 * @return Tổng n số đầu tiên
 */
int tinhTongNSo(int n) {
    return n * (n + 1) / 2;
}

/**
 * Kiểm tra số chính phương
 * 
 * @param n Số cần kiểm tra
 * @return true nếu là số chính phương, false nếu không phải
 */
bool kiemTraSoChinhPhuong(int n) {
    if (n < 0) return false;
    
    int sqrt_n = (int)sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

/**
 * Kiểm tra số Fibonacci
 * 
 * @param n Số cần kiểm tra
 * @return true nếu là số Fibonacci, false nếu không phải
 */
bool kiemTraSoFibonacci(int n) {
    if (n < 0) return false;
    if (n == 0 || n == 1) return true;
    
    int a = 0, b = 1, c = a + b;
    while (c < n) {
        a = b;
        b = c;
        c = a + b;
    }
    
    return (c == n);
}

/**
 * Tính diện tích hình chữ nhật
 * 
 * @param width Chiều rộng
 * @param height Chiều cao
 * @return Diện tích hình chữ nhật
 */
double tinhDienTichHinhChuNhat(double width, double height) {
    return width * height;
}

/**
 * Tính chu vi hình chữ nhật
 * 
 * @param width Chiều rộng
 * @param height Chiều cao
 * @return Chu vi hình chữ nhật
 */
double tinhChuViHinhChuNhat(double width, double height) {
    return 2 * (width + height);
}

/**
 * Tính diện tích tam giác
 * 
 * @param a Cạnh a
 * @param b Cạnh b
 * @param c Cạnh c
 * @return Diện tích tam giác
 */
double tinhDienTichTamGiac(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

/**
 * Tính chu vi tam giác
 * 
 * @param a Cạnh a
 * @param b Cạnh b
 * @param c Cạnh c
 * @return Chu vi tam giác
 */
double tinhChuViTamGiac(double a, double b, double c) {
    return a + b + c;
}

/**
 * Tính diện tích hình tròn
 * 
 * @param radius Bán kính
 * @return Diện tích hình tròn
 */
double tinhDienTichHinhTron(double radius) {
    return M_PI * radius * radius;
}

/**
 * Tính chu vi hình tròn
 * 
 * @param radius Bán kính
 * @return Chu vi hình tròn
 */
double tinhChuViHinhTron(double radius) {
    return 2 * M_PI * radius;
}

/**
 * Sắp xếp mảng bằng thuật toán Insertion Sort
 * 
 * @param arr Mảng cần sắp xếp
 * @param size Kích thước của mảng
 */
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

/**
 * Sắp xếp mảng bằng thuật toán Bubble Sort
 * 
 * @param arr Mảng cần sắp xếp
 * @param size Kích thước của mảng
 */
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * Sắp xếp mảng float giảm dần
 * 
 * @param arr Mảng cần sắp xếp
 * @param size Kích thước của mảng
 */
void sapXepGiamDanFloat(float arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * Sắp xếp mảng bằng thuật toán Selection Sort
 * 
 * @param arr Mảng cần sắp xếp
 * @param size Kích thước của mảng
 */
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

/**
 * Tính độ dài chuỗi
 * 
 * @param str Chuỗi cần tính độ dài
 * @return Độ dài của chuỗi
 */
int tinhDoDaiChuoi(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

/**
 * Đếm số chữ số trong chuỗi
 * 
 * @param str Chuỗi cần đếm
 * @return Số lượng chữ số trong chuỗi
 */
int demSoChuSoTrongChuoi(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }
    return count;
}

/**
 * In số chẵn lớn nhất trong n số
 * 
 * @param arr Mảng các số
 * @param size Kích thước của mảng
 * @return Số chẵn lớn nhất, hoặc INT_MIN nếu không có số chẵn
 */
int inSoChanLonNhat(int arr[], int size) {
    int maxEven = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
        }
    }
    
    return maxEven;
}

/**
 * Tìm ước chung lớn nhất (GCD)
 * 
 * @param a Số thứ nhất
 * @param b Số thứ hai
 * @return Ước chung lớn nhất của a và b
 */
int timUCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

/**
 * Tìm bội chung nhỏ nhất (LCM)
 * 
 * @param a Số thứ nhất
 * @param b Số thứ hai
 * @return Bội chung nhỏ nhất của a và b
 */
int timBCNN(int a, int b) {
    return (a * b) / timUCLN(a, b);
}

/**
 * In số chẵn tại vị trí chẵn và sắp xếp
 * 
 * @param arr Mảng cần xử lý
 * @param size Kích thước của mảng
 */
void inSoChanTaiViTriChanVaSort(int arr[], int size) {
    // Tạo mảng mới để lưu các số chẵn tại vị trí chẵn
    int evenCount = 0;
    int* evenNumbers = (int*)malloc(size * sizeof(int));
    
    if (evenNumbers == NULL) {
        printf("Lỗi cấp phát bộ nhớ\n");
        return;
    }
    
    // Lấy các số chẵn tại vị trí chẵn
    for (int i = 0; i < size; i += 2) {
        if (arr[i] % 2 == 0) {
            evenNumbers[evenCount++] = arr[i];
        }
    }
    
    // Sắp xếp các số chẵn tăng dần
    for (int i = 0; i < evenCount - 1; i++) {
        for (int j = 0; j < evenCount - i - 1; j++) {
            if (evenNumbers[j] > evenNumbers[j + 1]) {
                int temp = evenNumbers[j];
                evenNumbers[j] = evenNumbers[j + 1];
                evenNumbers[j + 1] = temp;
            }
        }
    }
    
    // In ra các số chẵn đã sắp xếp
    printf("Các số chẵn tại vị trí chẵn (đã sắp xếp):\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");
    
    free(evenNumbers); // Giải phóng bộ nhớ
}

/**
 * Nếu là số lẻ, bình phương rồi cộng vào
 * 
 * @param arr Mảng cần xử lý
 * @param size Kích thước của mảng
 * @return Tổng bình phương các số lẻ
 */
int binhPhuongSoLeCongVao(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i] * arr[i];
        }
    }
    
    return sum;
}

/**
 * In tích các chữ số của n
 * 
 * @param n Số cần tính tích
 * @return Tích các chữ số
 */
int tichCacChuSo(int n) {
    if (n == 0) return 0;
    
    int product = 1;
    n = abs(n); // Lấy giá trị tuyệt đối để xử lý số âm
    
    while (n > 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    
    return product;
}

/**
 * Kiểm tra xem một số có phải là lũy thừa của 2 không
 * 
 * @param n Số cần kiểm tra
 * @return true nếu là lũy thừa của 2, false nếu không phải
 */
bool kiemTraPowerOf2(int n) {
    if (n <= 0) return false;
    
    // Một số là lũy thừa của 2 nếu chỉ có 1 bit 1 trong biểu diễn nhị phân
    return (n & (n - 1)) == 0;
}

/**
 * In ký tự viết hoa ở vị trí chẵn
 * 
 * @param str Chuỗi cần xử lý
 */
void inKyTuVietHoaOViTriChan(const char *str) {
    printf("Các ký tự viết hoa ở vị trí chẵn: ");
    
    for (int i = 0; str[i] != '\0'; i += 2) {
        if (isupper(str[i])) {
            printf("%c ", str[i]);
        }
    }
    
    printf("\n");
}

/**
 * In các ký tự là chữ cái
 * 
 * @param str Chuỗi cần xử lý
 */
void inCacKyTuLaChuCai(const char *str) {
    printf("Các ký tự là chữ cái: ");
    
    for (int i =0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            printf("%c ", str[i]);
        }
    }
    
    printf("\n");
}

/**
 * Kiểm tra số hoàn hảo (Perfect number)
 * Số hoàn hảo là số có tổng các ước số (không kể chính nó) bằng chính nó
 * 
 * @param n Số cần kiểm tra
 * @return true nếu là số hoàn hảo, false nếu không phải
 */
bool kiemTraPerfectNumber(int n) {
    if (n <= 1) return false;
    
    int sum = 1; // Bắt đầu với 1 vì 1 luôn là ước số
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            
            // Nếu i khác với n/i thì cộng thêm n/i
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    
    return sum == n;
}

/**
 * Đếm chữ số trong chuỗi
 * 
 * @param str Chuỗi cần đếm
 * @return Số lượng chữ số trong chuỗi
 */
int demChuSoTrongChuoi(const char *str) {
    int count = 0;
    
    for (int i =0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }
    
    return count;
}

/**
 * Viết hoa 1/2 độ dài chuỗi
 * 
 * @param str Chuỗi cần xử lý
 */
void vietHoaNuaDoDaiChuoi(char *str) {
    int length = strlen(str);
    int halfLength = length / 2;
    
    for (int i = 0; i < halfLength; i++) {
        str[i] = toupper(str[i]);
    }
}

/**
 * Kiểm tra tên hợp lệ
 * Tên hợp lệ: bắt đầu bằng chữ cái, chỉ chứa chữ cái, số và dấu gạch dưới
 * 
 * @param name Tên cần kiểm tra
 * @return true nếu tên hợp lệ, false nếu không hợp lệ
 */
bool kiemTraValidName(const char *name) {
    if (!name || !isalpha(name[0])) {
        return false;
    }
    
    for (int i = 1; name[i] != '\0'; i++) {
        if (!isalnum(name[i]) && name[i] != '_') {
            return false;
        }
    }
    
    return true;
}

/**
 * Tính trung bình các số dương trong mảng
 * 
 * @param arr Mảng cần tính
 * @param size Kích thước của mảng
 * @return Trung bình các số dương, hoặc 0 nếu không có số dương
 */
double trungBinhSoDuong(int arr[], int size) {
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }
    
    return count > 0 ? (double)sum / count : 0;
}

/**
 * Tính diện tích hình tròn
 * 
 * @param radius Bán kính hình tròn
 * @return Diện tích hình tròn
 */
double tinhDienTichHinhTron(double radius) {
    return M_PI * radius * radius;
}

/**
 * Kiểm tra số chính phương
 * 
 * @param n Số cần kiểm tra
 * @return true nếu là số chính phương, false nếu không phải
 */
bool kiemTraSoChinhPhuong(int n) {
    if (n < 0) return false;
    
    int sqrt_n = (int)sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

/**
 * Xóa phần tử tại vị trí người dùng nhập
 * 
 * @param arr Mảng cần xử lý
 * @param size Con trỏ đến kích thước của mảng, sẽ được cập nhật sau khi xử lý
 * @param position Vị trí cần xóa (0-based)
 * @return true nếu xóa thành công, false nếu vị trí không hợp lệ
 */
bool xoaPhanTuTaiViTri(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        return false;
    }
    
    // Di chuyển các phần tử sau vị trí cần xóa lên trước một vị trí
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    (*size)--;
    return true;
}

/**
 * Chèn số bất kỳ vào mảng tại vị trí chỉ định
 * 
 * @param arr Mảng cần xử lý
 * @param size Con trỏ đến kích thước của mảng, sẽ được cập nhật sau khi xử lý
 * @param maxSize Kích thước tối đa của mảng
 * @param value Giá trị cần chèn
 * @param position Vị trí cần chèn (0-based)
 * @return true nếu chèn thành công, false nếu vị trí không hợp lệ hoặc mảng đầy
 */
bool chenSoBatKy(int arr[], int *size, int maxSize, int value, int position) {
    if (position < 0 || position > *size || *size >= maxSize) {
        return false;
    }
    
    // Di chuyển các phần tử từ vị trí chèn trở đi lên một vị trí
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = value;
    (*size)++;
    return true;
}

/**
 * Hoán đổi 2 vị trí trong mảng
 * 
 * @param arr Mảng cần xử lý
 * @param pos1 Vị trí thứ nhất
 * @param pos2 Vị trí thứ hai
 * @param size Kích thước của mảng
 * @return true nếu hoán đổi thành công, false nếu vị trí không hợp lệ
 */
bool swap2ViTri(int arr[], int pos1, int pos2, int size) {
    if (pos1 < 0 || pos1 >= size || pos2 < 0 || pos2 >= size) {
        return false;
    }
    
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
    
    return true;
}

/**
 * Xóa phần tử tại vị trí nhập
 * 
 * @param arr Mảng cần xử lý
 * @param size Con trỏ đến kích thước của mảng, sẽ được cập nhật sau khi xử lý
 * @param position Vị trí cần xóa
 * @return true nếu xóa thành công, false nếu vị trí không hợp lệ
 */
bool xoaPhanTuTaiViTri(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        return false;
    }
    
    // Di chuyển các phần tử sau vị trí cần xóa lên trước một vị trí
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    (*size)--;
    return true;
}

/**
 * In ra giờ phút giây
 * 
 * @param seconds Tổng số giây
 */
void inGioPhutGiay(int seconds) {
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;
    
    printf("%d giây = %d giờ %d phút %d giây\n", seconds, hours, minutes, secs);
}

/**
 * Tính tổng số đầu và cuối của một số nguyên
 * 
 * @param n Số cần tính
 * @return Tổng chữ số đầu và cuối
 */
int tongSoDauVaCuoi(int n) {
    int lastDigit = n % 10;
    
    // Tìm chữ số đầu tiên
    int firstDigit = n;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    
    return firstDigit + lastDigit;
}

/**
 * Kiểm tra xem một số có phải là lũy thừa của một số khác không
 * 
 * @param n Số cần kiểm tra
 * @param base Cơ số
 * @return true nếu n là lũy thừa của base, false nếu không phải
 */
bool kiemTraExponent(int n, int base) {
    if (n <= 0 || base <= 0) return false;
    if (base == 1) return (n == 1);
    if (n == 1) return true;
    
    while (n > 1) {
        if (n % base != 0) return false;
        n /= base;
    }
    
    return true;
}

/**
 * Kiểm tra n%5==0 và đếm số lần xuất hiện trong mảng
 * 
 * @param arr Mảng cần kiểm tra
 * @param size Kích thước của mảng
 * @return Số lượng phần tử chia hết cho 5
 */
int demSoChiaHetCho5(int arr[], int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 5 == 0) {
            count++;
        }
    }
    
    return count;
}

/**
 * Chuyển đổi từ hệ nhị phân sang hệ bát phân
 * 
 * @param binary Chuỗi nhị phân
 * @return Giá trị bát phân
 */
int binaryToOctal(const char *binary) {
    // Chuyển nhị phân sang thập phân
    int decimal = 0;
    for (int i = 0; binary[i] != '\0'; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    
    // Chuyển thập phân sang bát phân
    int octal = 0;
    int position = 1;
    
    while (decimal > 0) {
        octal += (decimal % 8) * position;
        decimal /= 8;
        position *= 10;
    }
    
    return octal;
}

/**
 * Kiểm tra mảng có tăng dần không
 * 
 * @param arr Mảng cần kiểm tra
 * @param size Kích thước của mảng
 * @return true nếu mảng tăng dần, false nếu không
 */
bool kiemTraMangTangDan(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

/**
 * Kiểm tra mảng có đối xứng không
 * 
 * @param arr Mảng cần kiểm tra
 * @param size Kích thước của mảng
 * @return true nếu mảng đối xứng, false nếu không
 */
bool kiemTraMangDoiXung(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

/**
 * In ra số nguyên tố đầu tiên trong mảng
 * 
 * @param arr Mảng cần kiểm tra
 * @param size Kích thước của mảng
 * @return Số nguyên tố đầu tiên, hoặc -1 nếu không có số nguyên tố
 */
int inSoNguyenToDauTien(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (kiemTraSoNguyenTo(arr[i])) {
            return arr[i];
        }
    }
    return -1;
}

/**
 * Kiểm tra số nguyên tố
 * 
 * @param n Số cần kiểm tra
 * @return true nếu là số nguyên tố, false nếu không phải
 */
bool kiemTraSoNguyenTo(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

/**
 * Tính (-1)^(n+1) * x^n
 * 
 * @param x Cơ số
 * @param n Số mũ
 * @return Kết quả của biểu thức
 */
double tinhBieuThuc(double x, int n) {
    double result = pow(x, n);
    
    if ((n + 1) % 2 == 0) {
        return result;  // (-1)^(n+1) = 1 khi n+1 chẵn
    } else {
        return -result; // (-1)^(n+1) = -1 khi n+1 lẻ
    }
}

/**
 * Đảo ngược dãy số
 * 
 * @param arr Mảng cần đảo ngược
 * @param size Kích thước của mảng
 */
void daoNguocDaySo(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

/**
 * Bình phương số lẻ trong mảng
 * 
 * @param arr Mảng cần xử lý
 * @param size Kích thước của mảng
 */
void binhPhuongSoLe(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = arr[i] * arr[i];
        }
    }
}

/**
 * In vị trí có tổng bằng số nào đó
 * 
 * @param arr Mảng cần kiểm tra
 * @param size Kích thước của mảng
 * @param sum Tổng cần tìm
 * @return true nếu tìm thấy, false nếu không
 */
bool inViTriCoTongBang(int arr[], int size, int sum) {
    bool found = false;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Vị trí %d và %d có tổng bằng %d\n", i, j, sum);
                found = true;
            }
        }
    }
    
    return found;
}

/**
 * Tính diện tích hình chữ nhật
 * 
 * @param width Chiều rộng
 * @param height Chiều cao
 * @return Diện tích hình chữ nhật
 */
double tinhDienTichHinhChuNhat(double width, double height) {
    return width * height;
}

/**
 * Tính chu vi hình chữ nhật
 * 
 * @param width Chiều rộng
 * @param height Chiều cao
 * @return Chu vi hình chữ nhật
 */
double tinhChuViHinhChuNhat(double width, double height) {
    return 2 * (width + height);
}

/**
 * Tính diện tích tam giác
 * 
 * @param a Cạnh a
 * @param b Cạnh b
 * @param c Cạnh c
 * @return Diện tích tam giác
 */
double tinhDienTichTamGiac(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

/**
 * Tính chu vi tam giác
 * 
 * @param a Cạnh a
 * @param b Cạnh b
 * @param c Cạnh c
 * @return Chu vi tam giác
 */
double tinhChuViTamGiac(double a, double b, double c) {
    return a + b + c;
}

/**
 * Tính diện tích hình tròn
 * 
 * @param radius Bán kính
 * @return Diện tích hình tròn
 */
double tinhDienTichHinhTron(double radius) {
    return M_PI * radius * radius;
}

/**
 * Tính chu vi hình tròn
 * 
 * @param radius Bán kính
 * @return Chu vi hình tròn
 */
double tinhChuViHinhTron(double radius) {
    return 2 * M_PI * radius;
}

/**
 * Tính giai thừa F1(n) = n!
 * 
 * @param n Số cần tính giai thừa
 * @return Giai thừa của n
 */
long long tinhGiaiThua(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

/**
 * Tính tổng phân số F2(n) = 1 + 2 + ... + n
 * 
 * @param n Số hạng cuối cùng
 * @return Tổng dãy số từ 1 đến n
 */
int tinhTongDaySo(int n) {
    return n * (n + 1) / 2;
}
