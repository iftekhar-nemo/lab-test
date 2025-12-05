#include <stdio.h>

int main() {
    int n, orginal, reversed=0;
    scanf("%d", &n);
    orginal=n;
    while(n>0){
        int digit=n%10;
        reversed = reversed*10 + digit;
        n/=10;
    }
    orginal==reversed? printf("Palindrome Number\n"): printf("Not Palindrome Number\n");
    return 0;
}
