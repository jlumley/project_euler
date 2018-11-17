#include<stdio.h>
#include<math.h>

int nextPrime(int);
int numberOfFactors(int);

int main (int argc, char const *argv[]) {
    size_t num = 6;

    for (int n = 4; 1==1; n ++) {
        num += n;
        int factors = numberOfFactors(num);
        //printf("factors: %d\n", factors);
        if (factors > 500){
            printf("triangle number: %d\n", n);
            printf("value: %zu\n", num);
            break;
        }
    }
    return 0;
}

int nextPrime(int prime) {
    for (int nextPrime=prime+1; 1==1; nextPrime++) {
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
        //printf("n: %d\n", n);
        //printf("prime: %d\n", prime);
        if (n == 1) {
            factors *=2;
            return factors;
        } else if (n%prime == 0) {
            temp++;
            n = n/prime;
        } else {
            prime = nextPrime(prime);
            factors *= temp;
            temp = 1;
        }
    }
    return factors;
}
