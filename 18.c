#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d", &n1);
    int arr1[n1];   // dynamic size

    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    int arr2[n2];   // dynamic size

    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];   // exact size required
    int k = 0;

    // copy first array
    for (int i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }

    // copy second array
    for (int i = 0; i < n2; i++) {
        merged[k++] = arr2[i];
    }

    // print merged array
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
