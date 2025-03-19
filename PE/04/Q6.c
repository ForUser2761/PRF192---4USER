#include <stdio.h>
#include <string.h>


int main() {

    char c[100];
    printf("Nhap vao chuoi: ");
    fgets(c, 100, stdin);

    strupr(c);
    printf("%s", c);

}