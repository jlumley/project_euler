#include<stdio.h>

int main(int argc, const char*  argv[]) {

    int oneToNine = 36;
    int tenToNineteen = 70;
    int twentyToNinety = 49;
    int and = 3;
    int hundred = 7;
    int oneThousand = 11;
    int x;

    x = (oneToNine*9 + tenToNineteen + twentyToNinety*10) *10;
    x += and * (1000 - 200 - 9);
    x += oneToNine * 100;
    x += hundred * 900;
    x += oneThousand;

    printf("The number of characters from 1 to 1000 is: %d \n", x);

	return 0;
}
