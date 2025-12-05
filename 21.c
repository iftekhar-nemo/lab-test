#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str); 

    int len = strlen(str);
    int isPal = 1;
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPal = 0;
            break;
        }
        left++;
        right--;
    }
    isPal?printf("Palindrome\n"):printf("Not Palindrome\n");

    return 0;
}
