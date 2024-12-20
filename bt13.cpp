#include <stdio.h>

const char* Zodiac(int day, int month) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
        return "bach duong";
    } else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {
        return "kim nguu";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
        return "song tu";
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        return "cua giai";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return "su tu";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return "xu nu";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 23)) {
        return "thien binh";
    } else if ((month == 10 && day >= 24) || (month == 11 && day <= 22)) {
        return "bo cap";
    } else if ((month == 11 && day >= 23) || (month == 12 && day <= 21)) {
        return "nhan ma";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        return "ma ket";
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return "bao binh";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        return "song ngu";
    }
    return "ngay thang khong hop le";
}

int main() {
    int day, month;

    printf("nhap ngay sinh: ");
    scanf("%d", &day);

    printf("nhap thang sinh: ");
    scanf("%d", &month);

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("ngay thang khong hop le");
    } else {
        const char* zodiac = Zodiac(day, month);
        printf("cung hoang dao cua ban la: %s\n", zodiac);
    }

    return 0;
}

