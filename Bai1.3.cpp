#include <iostream> 

using namespace std; 

// Khai báo kiểu dữ liệu Point
struct Point { // Định nghĩa kiểu dữ liệu mới Point bao gồm hai trường dữ liệu x và y
    double x;
    double y;
};

// Định nghĩa hàm nhập cho kiểu dữ liệu Point
void input(Point& p) { // Định nghĩa hàm nhập dữ liệu cho một biến kiểu Point đã khai báo
    cout << "Nhap toa do x: "; // Xuất thông báo yêu cầu nhập giá trị cho trường dữ liệu x
    cin >> p.x; // Nhập giá trị cho trường dữ liệu x của biến Point p
    cout << "Nhap toa do y: "; // Xuất thông báo yêu cầu nhập giá trị cho trường dữ liệu y
    cin >> p.y; // Nhập giá trị cho trường dữ liệu y của biến Point p
}

// Định nghĩa hàm xuất cho kiểu dữ liệu Point
void output(Point p) { // Định nghĩa hàm xuất dữ liệu cho một biến kiểu Point đã khai báo
    cout << "Toa do diem la (" << p.x << ", " << p.y << ")" << endl; // Xuất giá trị của trường dữ liệu x và y của biến Point p
}

int main() { // Hàm main, hàm chính của chương trình
    Point p; // Khai báo một biến kiểu Point

    input(p); // Gọi hàm input để nhập dữ liệu cho biến Point p
    output(p); // Gọi hàm output để xuất dữ liệu của biến Point p

    return 0; // Trả về giá trị 0 cho hàm main, kết thúc chương trình
}
