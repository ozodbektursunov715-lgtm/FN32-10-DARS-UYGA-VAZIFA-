#include <stdio.h>

int main() {
    int n;

    for (int i = 1; i <= 10; i++) {
        printf("Son kiriting: ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }

        printf("%d\n", n);
    }

    return 0;
}