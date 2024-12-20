#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Day khong phai phuong trinh bac 2\n");
        return 0;
    }

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2lf\n", x);
    } else {
        printf("Phuong trinh vo nghiem.\n");
    }

    return 0;
}

