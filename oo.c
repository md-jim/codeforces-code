#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int citizens[n];
    int total = 0;
    int min_wealth = 1000000; // Initializing with a large value

    for (int i = 0; i < n; i++) {
        scanf("%d", &citizens[i]);
        total += citizens[i];
        if (citizens[i] < min_wealth) {
            min_wealth = citizens[i];
        }
    }

    int min_expense = min_wealth * n - total;

    printf("%d\n", min_expense);

    return 0;
}
