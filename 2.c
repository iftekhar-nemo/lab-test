#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n%2==0?printf("%d Even number.", n):printf("%d Odd number.", n);
    return 0;
}
