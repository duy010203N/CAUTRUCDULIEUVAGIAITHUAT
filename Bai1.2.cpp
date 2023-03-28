#include <stdio.h>

// Khai báo kiểu dữ liệu hỗn số
typedef struct {
    int nguyen;
    int tu;
    int mau;
} HonSo;

// Hàm nhập hỗn số
void nhapHonSo(HonSo *hs) {
    printf("Nhap phan nguyen: ");
    scanf("%d", &hs->nguyen);
    printf("Nhap tu so: ");
    scanf("%d", &hs->tu);
    printf("Nhap mau so: ");
    scanf("%d", &hs->mau);
}

// Hàm xuất hỗn số
void xuatHonSo(HonSo hs) {
    printf("%d %d/%d", hs.nguyen, hs.tu, hs.mau);
}

int main() {
    HonSo hs;
    nhapHonSo(&hs);
    xuatHonSo(hs);
    return 0;
}
