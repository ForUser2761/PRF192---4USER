#include <stdio.h>

int main()
{
    int n;
    long long total = 0;

    //nhap vao gia tri n
    printf("Nhap vao gia tri cua n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        total += (i * i);
    }
    printf("%lld", total);
    
}