#include <stdio.h>

int sum(int n, int n2){
    return n+n2;
}

int main() {
    int n,n2;
    scanf("%d %d", &n, &n2);
    int mySum = sum(n,n2);
    printf("My Sum: %d", mySum);
    return 0;
}
