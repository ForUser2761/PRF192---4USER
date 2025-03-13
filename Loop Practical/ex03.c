#include <stdio.h>

int main()
{

    int n = 100, total = 0;

    for (int i = 3; i <= n; i += 3)
    {
        total += i;
    }

    printf("%d", total);
}