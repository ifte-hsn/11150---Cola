#include <stdio.h>

int main() {
    int n, count, newN;
    while (scanf("%d", &n) == 1) {
        count = n;
        n = n+1;

        while(n >3) {
            count += n/3;
            n = n/3+n%3;
        }
        if(n == 3) {
            count++;
        }
        printf("%d\n", count);

    }
    return 0;
}