#include <stdio.h>

int main(int argc, char const *argv[], char *envp[]) {
    int sum = 0;
    for (size_t i = 0; i < 1000; i++) {
        if (i%3 == 0 || i%5==0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
