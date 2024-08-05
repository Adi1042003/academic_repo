#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int count = 1;
    int num = 2;

    printf("The first 100 prime numbers are:\n");

    while (count <= 100) {
        if (isPrime(num)) {
            printf("%d %d \n",count,num);
            count++;
            }
        num++;
        }

        return 0;
}


