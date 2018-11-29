#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(int argc, char const *argv[]) {
    double num = pow(2,1000);
    char buff[500];

    snprintf(buff, sizeof(buff), "%f", num);
    char *tok = strtok(buff, ".");

    int sum = 0;

    for (size_t i = 0; i < strlen(tok); i++) {
        sum += (int) tok[i]-'0';
    }

    printf("sum of digits in 2^1000 is %d\n", sum);
    return 0;
}
