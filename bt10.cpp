#include <stdio.h>

int prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number;

    printf("nhap 1 so nguyen: ");
    scanf("%d", &number);

    if (prime(number)) {
        printf("%d la so nguyen to\n", number);
    } else {
        printf("%d khong phai la so nguyen to\n", number);
    }

    return 0;
}

