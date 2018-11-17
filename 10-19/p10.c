#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[]){
    int static arraySize = 2000001;
    int primes [arraySize];
    primes[0] = 0;
    primes[1] = 0;
    for (size_t i = 2; i < arraySize; i++) {
        primes[i] = i;
    }
    for (size_t i = 2; i < sqrt(arraySize)+1; i++) {

        if (primes[i] != 0) {
            int n = i;
            while (n < arraySize) {
                if (n != i) {
                    primes[n] = 0;
                }
                n += i;
            }
        }
    }

    size_t sum = 0;
    for (size_t i = 0; i < arraySize; i++) {
        sum += primes[i];
    }

    printf("sum = %zu\n", sum);

}
