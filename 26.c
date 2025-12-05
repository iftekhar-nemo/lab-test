#include <stdio.h>

struct Student {
    char name[100];
    int age;
    char address[200];
};

int main() {
    struct Student s;

    // input
    printf("Enter name: ");
    gets(s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);
    getchar();

    printf("Enter address: ");
    gets(s.address);

    
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Address: %s\n", s.address);

    return 0;
}
