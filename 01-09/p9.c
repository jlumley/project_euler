#include<stdio.h>
#include<math.h>

int main (int argc, char const *argv[]){
    int iterations = 0;

    for (size_t c = 334; c < 997; c++) {
        for (size_t b = 2; b < c; b++) {
            for (size_t a = 1; a < b; a++) {
                iterations++;
                if (a+b+c == 1000){
                    if (pow(a,2)+pow(b,2) == pow(c,2)) {
                        printf("a=%zu, b=%zu, c=%zu\n", a,b,c);
                        printf("product = %zu\n", a*b*c);

                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
