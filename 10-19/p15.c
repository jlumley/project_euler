#include <stdio.h>

int main() {
    long long res = 1;
    for (int i = 0; i < 20; ++i) {
       res = res * (40-i) / (i+1);
    }

    printf("%lld\n", res);
    return 0;
}
