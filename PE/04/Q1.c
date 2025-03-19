#include <stdio.h>



int main() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", a + b);
    printf("Diff: %d\n", a - b);
    printf("Product: %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient: %d\n", a/ b);
    }else {
        printf("Cannot divied");
    }
    

}