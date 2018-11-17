#include<stdio.h>
#include<math.h>

int isPrime(long);

int main(int argc, char const *argv[]){
    const long num = 600851475143;
    long factor = pow(num,0.5);
    while (factor > 1) {
        if (num%factor == 0){
            if (isPrime(factor)) {
                printf("%ld\n", factor);
                return 0;
            }
        }
        if (factor%2 == 0) {
            factor--;
        } else {
            factor -=2;
        }
    }

    return 0;
}

int isPrime (long x) {
    for (int i=2; i<x/2; i++) {
        if (x%i == 0){
            return 0;
        }
    }
    return 1;
}
