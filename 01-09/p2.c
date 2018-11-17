#include <stdio.h>

int nextFibNumber(int, int);

int main(int argc, char const *argv[]) {
    int sum = 0;
    int num = 2;
    int lastNum = 1;
    while (num < 4000000){
        if (num%2 == 0){
            sum += num;
        }
        int nextNum = nextFibNumber(num, lastNum);
        lastNum = num;
        num = nextNum;
    }
    printf("%d\n", sum);
    return 0;
}

int nextFibNumber(int x1, int x2){
    return x1 + x2;
}
