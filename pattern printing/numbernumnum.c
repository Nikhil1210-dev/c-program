#include <stdio.h>

int main() {
    int n, m;

    // Taking both inputs in one line
    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 || i == n || j == 1 || j == m)
                printf("4");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
