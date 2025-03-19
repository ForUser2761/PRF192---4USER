#include <stdio.h>


int kiemTraSoChan(int number) {
    return number % 2 == 0;
}

int kiemTraSoLe(int number) {
    return number % 2 != 0;
}

void displayResult(int number) {
    if (kiemTraSoChan(number))
    {
        printf("%d la so chan\n", number);
    }else if (kiemTraSoLe(number)) {
        printf("%d la so le\n", number);
    }else {
        printf("co loi xay ra\n");
    }
    
}


int main() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    displayResult(a);
    displayResult(b);
    
}