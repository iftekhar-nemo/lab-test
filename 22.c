#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    gets(str); 

    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isalpha(ch)) {     
            ch = tolower(ch); 

            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
