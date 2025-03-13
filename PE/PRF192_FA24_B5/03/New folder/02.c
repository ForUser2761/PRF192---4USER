#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0; // Số nhỏ hơn 2 không phải số nguyên tố
    if (n == 2 || n == 3) return 1; // 2 và 3 là số nguyên tố
    if (n % 2 == 0 || n % 3 == 0) return 0; // Loại bỏ số chẵn và bội số của 3

    int i;
    for (i = 5; i <= sqrt(n); i += 2) { // Kiểm tra từ 5 đến sqrt(n), bước nhảy 2 để bỏ qua số chẵn
        if (n % i == 0) return 0;
    }

    return 1; // Nếu không tìm thấy ước số nào, thì là số nguyên tố
}

int main() {
    int n, i = 0, max = 0;

    //nhap vao n phan tu mang
    printf("Nhap: ");
    scanf("%d", &n);

    //khai bao mang
    int arr[100];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //lap qua tung phan tu o trong mang
    for ( i = 0; i < n; i++)
    {   
        int noArray = arr[i];
        //kiem tra phan tu do co phai la so nguyen to
        if (isPrime(noArray))
        {
            //kiem tra toi viec so nay co phai la lon nhat khong ?
            if (noArray > max)
            {
                max = noArray;
            }
        }
    }

    printf("%d", max);
}