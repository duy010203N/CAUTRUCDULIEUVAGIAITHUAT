#include <iostream>
using namespace std;

struct HonSo {
    int nguyen;
    int tu;
    int mau;
};

void nhap(HonSo &hs) {
    cout << "Nhap phan nguyen: ";
    cin >> hs.nguyen;
    cout << "Nhap tu: ";
    cin >> hs.tu;
    cout << "Nhap mau: ";
    cin >> hs.mau;
}

void xuat(HonSo hs) {
    cout << hs.nguyen << " " << hs.tu << "/" << hs.mau << endl;
}

int main() {
    HonSo hs;
    nhap(hs);
    xuat(hs);
    return 0;
}
