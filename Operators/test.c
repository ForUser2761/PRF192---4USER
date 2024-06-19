#include <stdio.h>

int main()
{
    int x = 0, a = 0;
    a = x;
    x = x + 1;
    printf("x = %d, a = %d\n", x, a); // x = 1, a = 0

    return 0;
}