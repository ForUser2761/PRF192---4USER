#include <stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; 
    }
    return 1;
}

int main() {
    int n,i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largestPrime = 0; 
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i]) && arr[i] > largestPrime) {
            largestPrime = arr[i]; 
        }
    }

    printf("%d\n", largestPrime); 
    return 0;
}
