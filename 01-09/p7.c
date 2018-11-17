#include<stdio.h>

int isPrime(int, int, int *);

int main(int argc, char const *argv[]){
    int n = 0;
    int primes[10000];
    for (int i=2; 1==1; i++){
        if(i==2){
            primes[n] = i;
        } else {
            if (isPrime(i, n, primes)){
                //printf("%d\n",i);
                if (n==10000){
                    printf("%d\n",i);
                    break;
                }
                primes[n] = i;
                n++;
            }
        }
    }
    return 0;
}

int isPrime(int x, int n, int *primes){
    for(int i=0; i<n; i++){
        if(x%primes[i] == 0){
            return 0;
        }
    }
    return 1;
}
