#include<stdio.h>
#include<math.h>

int nextPrime(int);
int numberOfFactors(int);

int main (int argc, char const *argv[]) {
    size_t num, result = 0;

    numberOfFactors(1000);
    return 0;
    for (int n = 1; 1==1; n ++) {
        num += n;
        if (numberOfFactors(num) > 500){
            break;
            printf("%d\n", n);
        }
    }
    return 0;
}

int nextPrime(int prime) {
    for (int nextPrime=prime+2; nextPrime < 15; nextPrime++) {
        int isPrime = 1;
        for (int i = 2; i <= sqrt(nextPrime); i++) {
            if (nextPrime%i == 0) {
                //printf("%d / %d = %d\n", nextPrime, i, nextPrime%i );
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            return nextPrime;
        }
    }
    return 0;
}

int numberOfFactors (int n) {
    int prime = 2;
    int factors = 1;
    int temp = 1;
    while (n >= 1) {
        if (n%prime == 0) {
            printf("%d\n", n);
            temp++;
            n = n/prime;
        } else {
            factors = factors * temp;
            temp = 1;
            prime = nextPrime(prime);
        }
    }
    return factors+2;
}
