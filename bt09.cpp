#include <stdio.h>

int main() {
    int num, temp, remainder, sum;

    for (num = 100; num <= 999; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            remainder = temp % 10;
            sum += remainder * remainder * remainder;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}

