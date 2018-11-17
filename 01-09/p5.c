#include<stdio.h>

int main(int argc, char const *argv[]){
    int num = 2520;
    while (1) {
        int evenlyDivisible = 1;
        for(int i=2; i<=20; i++){
            if(num%i != 0){
                evenlyDivisible = 0;
                break;
            }
        }
        if (evenlyDivisible) {
            printf("%d\n", num);
            break;
        }
        num +=20;
    }
    return 0;
}
