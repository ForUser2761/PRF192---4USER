#include <stdio.h>

int kiemTraSoChan(int number) {
    return number % 2 == 0;
}

int main() {

    int i;
    int sum = 0;
    for ( i = 1; i <= 100; i++)
    {
        if (kiemTraSoChan(i))
        {
            sum += i;
        }
        
    }
    printf("tong: %d\n", sum );
    

}