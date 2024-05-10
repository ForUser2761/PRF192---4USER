# Variable

## Definition
+ Varibale is a location in computer memory used to store data, usally use in a programm

## Syntax
```
    type name = value;
```
* type: data type - kieu du lieu
* name: ten bien ( variable)
* value: gia tri mong muono gan cho bien

=> Khai bao va khoi tao gia tri. declaring and initalize value

```
    type name;
    name = value;
```
=> Declaring, assign value

## Naming standard
* cau thanh len tu: uppercase and lowercase letter, numbers, underscore
    * uppercase: A, B, C, ... 
    * lowercase: a , b, c, ..
    * number: 0,1,..,9
    * underscore: _
* ki tu dau tien bat buoc phai la letter
* ko duoc co tu khoa nao trung voi 1 vai ky tu dac biet o trong ngon ngu lap trinh 
(int, double, float, ...) int_count

## Example
```
 #include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
```