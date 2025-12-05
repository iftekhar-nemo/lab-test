#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d", &n);
    while (n>0)
    {
        int digit = n % 10;
        sum+=digit;
        n/=10;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
