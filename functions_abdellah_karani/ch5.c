#include <stdio.h>

// I should be repeat this code again and again


void merge(int T[], int g, int m, int d) {
    int i, j, k;
    int n1 = m - g + 1;
    int n2 = d - m;
    int Tg[n1], Td[n2];
    for (i = 0; i < n1; i++) {
        Tg[i] = T[g + i];
    }
    for (j = 0; j < n2; j++) {
        Td[j] = T[m + 1 + j];
    }
    i = 0; j = 0; k = g;
    while (i < n1 && j < n2) {
        if (Tg[i] <= Td[j]) {
            T[k] = Tg[i]; i++;
        } else {
            T[k] = Td[j]; j++;
        }
        k++;
    }
    while (i < n1) {
        T[k] = Tg[i]; i++; k++;
    }
    while (j < n2) {
        T[k] = Td[j]; j++; k++;
    }
}

void merge_sort(int T[], int g, int d) {
    if (g < d) {
        int m = g + (d - g) / 2;
        merge_sort(T, g, m);
        merge_sort(T, m + 1, d);
        merge(T, g, m, d);
    }
}

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    int T[n];
    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("before merge sort: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    merge_sort(T, 0, n - 1);
    printf("\nafter merge sort: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    return 0;
}

