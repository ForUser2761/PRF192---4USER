#include <stdio.h>
#include <stdbool.h> //boolean true: false
#include <math.h>

bool isPerfectNumber(int number) {
    int i;

    int tong = 0;

    for ( i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            tong += i;
        }
    }

    if (tong == number)
    {
        return true;
    }else {
        return false;
    }
}

int main()
{
    
}

// 2^2 3^3
// so chinh phuong la binh phuong cua 1 so nguyen    = 16 = 4^2