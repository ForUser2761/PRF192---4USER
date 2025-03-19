#include <stdio.h>

void swap(int *a, int*b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {

    int x, y;
    printf("Nhap 2 so: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("%d %d", x, y);

}