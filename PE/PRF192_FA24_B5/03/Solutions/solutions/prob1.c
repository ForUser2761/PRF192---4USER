#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n); 

    if (n < 1000 || n > 9999) {
        return 1; 
    }

    while (n > 0) {
        int digit = n % 10; 
        if (digit % 2 != 0) { 
            sum += digit; 
        }
        n /= 10; 
    }

    printf("%d\n", sum); 
    return 0;
}
