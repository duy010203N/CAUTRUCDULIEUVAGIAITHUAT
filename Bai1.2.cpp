#include <iostream>
using namespace std;

// Khai báo kiểu dữ liệu HonSo
struct HonSo {
    int nguyen;
    int tu;
    int mau;
};

// Định nghĩa hàm nhập giá trị cho biến kiểu HonSo
void nhap(HonSo &hs) {
    cout << "Nhap phan nguyen: ";     // Xuất thông báo để người dùng nhập giá trị cho phần nguyên của hỗn số
    cin >> hs.nguyen;       // Đọc giá trị phần nguyên từ bàn phím và lưu vào biến nguyen của kiểu dữ liệu HonSo được truyền vào qua tham chiếu
    cout << "Nhap tu: ";     // Xuất thông báo để người dùng nhập giá trị cho tử số của hỗn số
    cin >> hs.tu;      // Đọc giá trị tử số từ bàn phím và lưu vào biến tu của kiểu dữ liệu HonSo được truyền vào qua tham chiếu
    cout << "Nhap mau: ";     // Xuất thông báo để người dùng nhập giá trị cho mẫu số của hỗn số
    cin >> hs.mau;     // Đọc giá trị mẫu số từ bàn phím và lưu vào biến mau của kiểu dữ liệu HonSo được truyền vào qua tham chiếu
}

// Định nghĩa hàm xuất giá trị của biến kiểu HonSo
void xuat(HonSo hs) {
    cout << hs.nguyen << " " << hs.tu << "/" << hs.mau << endl;     // Xuất giá trị phần nguyên, tử số và mẫu số của hỗn số, cách nhau bởi khoảng trắng và dấu "/"
}

// Hàm main để chạy chương trình
int main() {
    HonSo hs;        // Khai báo biến hs kiểu dữ liệu HonSo để lưu giá trị hỗn số nhập từ bàn phím
    nhap(hs);        // Gọi hàm nhập để nhập giá trị cho biến hs
    xuat(hs);       // Gọi hàm xuất để in giá trị của biến hs ra màn hình
    return 0;      // Kết thúc chương trình
}
