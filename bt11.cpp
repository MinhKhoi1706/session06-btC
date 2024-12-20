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
    int n, count = 0, number = 2;

    printf("nhap so luong so nguyen to can in: ");
    scanf("%d", &n);

    printf("cac so nguyen to dau tien la: ");
    while (count < n) {
        if (prime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");

    return 0;
}

