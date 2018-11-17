#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[]){
    int squaredSum = pow(100*101/2, 2);
    int sumOfSquares = 0;
    for(int n=1; n<101; n++){
        sumOfSquares += pow(n,2);
    }

    printf("%d\n", squaredSum-sumOfSquares);
    return 0;
}
