#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100];

    printf("Unesite vrijednosti između 0 i 10 (odvojene razmakom), -1 za kraj niza:\n");

    for(i = 0; i < 100; i++) {
        scanf("%d", &n);
        if(n == -1)
            break;
        arr[i] = n;
    }

    printf("Histogram:\n");
    for(j = 0; j < i; j++) {
        for(n = 0; n < arr[j]; n++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
