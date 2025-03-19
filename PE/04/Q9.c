#include <stdio.h>

#define INT_MIN     (-2147483647 - 1)

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

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int result = findNthLargestInArray(arr, 10, 3);
    printf("%d", result);
}