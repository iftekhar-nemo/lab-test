#include <stdio.h>

int main() {
    int n,x,z;
    scanf("%d %d %d", &n, &x,&z);

    if(n > x && n > z){
        printf("%d Largest Number.\n", n);
    }else if(x > n && x > z){
        printf("%d Largest Number.\n", x);
    }else if(z > n && z > x){
        printf("%d Largest Number.\n", z);
    }else{
        printf("Please give me valid input\n");
    }

    return 0;
}
