#include <stdio.h>


void daoNguocDaySo(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void displayArray(int arr[], int size) {
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d |", arr[i]);
    }
    
}

int main() {

    int arr[] = {1,2,3,4,5};

    daoNguocDaySo(arr, 5);

    displayArray(arr, 5);

}