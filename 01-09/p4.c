#include<stdio.h>

int isPalindrome(int);

int main(int argc, char const *argv[]){
    int x1, x2 = 999;
    int largest = 0;
    while (x2 > 100){
        x1 = 999;
        while (x1 > 100){
            if (isPalindrome(x1*x2)){
                if(x1*x2 > largest){
                    largest = x1*x2;
                }
            }
            x1--;
        }
        x2--;
    }
    printf("%d is a Palindrome\n", largest);
    return 0;
}


int isPalindrome(int num){
    char str[7];
    int n = sprintf(str, "%d", num);
    for(int i=0; i<n; i++){
        if(str[i] != str[n-1-i]){
            return 0;
        }
    }
    return 1;
}
