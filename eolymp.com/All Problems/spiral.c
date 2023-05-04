#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = 1, t = 0;
    int a[n][n];
    
    do {
        for (int j = t; j < n - t; j++) {
            a[t][j] = k++;
        }
        for (int i = t + 1; i < n - t; i++) {
            a[i][n - 1 - t] = k++;
        }
        for (int j = n - 2 - t; j >= t; j--) {
            a[n - 1 - t][j] = k++;
        }
        for (int i = n - 2 - t; i > t; i--) {
            a[i][t] = k++;
        }
        t++;
    } while (k <= n * n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
