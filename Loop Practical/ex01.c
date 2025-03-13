#include <stdio.h>



int main() {
    int n, total = 0;

    //nhap vao gia tri n
    printf("Nhap vao gia tri cua n: ");
    scanf("%d", &n);

    // tinh tong 
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }

    
    //in ra ket qua man hinh
    printf("%d", total);

    return 0;

}