#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    int freq1[256] = {0};
    int freq2[256] = {0};

    // count characters of str1
    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]);
        if (isalpha(ch))
            freq1[ch]++;
    }

    // count characters of str2
    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = tolower(str2[i]);
        if (isalpha(ch))
            freq2[ch]++;
    }

    // compare frequency arrays
    int isAnagram = 1;
    for (int i = 'a'; i <= 'z'; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
