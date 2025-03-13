#include <stdio.h>



int main() {

    int N, sum = 0;

    //nhap so nguyen
    scanf("%d", &N);

    //validate N 1000<= N <= 9999
    if (N < 1000 || N > 9999)
    {
        printf("Invalid N !!\n");
        return;
    }
    
    //tinh tong sau cac so
    while ( N > 0)
    {
        //chia lay phan du
        int remainder = N % 10;

        //kiem tra so le va cong vao sum
        if (remainder % 2 != 0 )
        {
            sum += remainder; // sum = sum + remainder
        }
        //chia lay phan nguyen
        N = N / 10;
    }
    
    printf("%d", sum);


    /**
     * int a = 10
     * int b = 12;
     * 
     * a = a + b; => 22
     * 
     * a += b; a = a + b;
     * 
     * a = a + 1;
     * a++;
     * a += 1;
     * 
     * 
     */


}