#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Hàm kiểm tra số lẻ
int isOdd(int num) {
    return num % 2 != 0;
}

// Hàm đếm số lần xuất hiện của một số trong mảng
int countOccurrences(int arr[], int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    system("cls");

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[100], visited[100]; // Mảng lưu số và mảng đánh dấu đã xét hay chưa

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Ban đầu tất cả số chưa được kiểm tra
    }

    printf("\nOUTPUT:\n");

    // Duyệt mảng để tìm số lẻ trùng lặp
    for (int i = 0; i < n; i++) {
        if (isOdd(arr[i]) && visited[i] == 0) { // Kiểm tra số lẻ chưa in
            int count = countOccurrences(arr, n, arr[i]);

            // Nếu số lẻ xuất hiện từ 2 lần trở lên, in ra
            if (count > 1) {
                printf("%d\n", arr[i]);

                // Đánh dấu tất cả vị trí chứa arr[i] để tránh in trùng
                for (int j = 0; j < n; j++) {
                    if (arr[j] == arr[i]) {
                        visited[j] = 1;
                    }
                }
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
