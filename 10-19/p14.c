#include<stdio.h>


int main(int argc, char const *argv[]){

    int greatestSteps, greatestStepsNum = 0;
    for (size_t i = 1; i < 1000000; i++) {
        //printf("%zu ", i);
        int steps = 0;
        size_t num = i;
        while (num != 1) {
            if (num%2 == 0){
                num = num/2;
                steps++;
            } else {
                num = (num*3 +1)/2;
                steps +=2;
            }
        }
        //printf("- steps %d\n", steps);
        if (steps > greatestSteps) {
            greatestSteps = steps;
            greatestStepsNum = i;
        }
        steps = 0;
    }
    printf("Integer with the longest chain is %d\n", greatestStepsNum);

    return 0;
}
