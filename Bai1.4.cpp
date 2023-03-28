#include <iostream>  
using namespace std;  

// Khai báo kiểu dữ liệu điểm trong không gian Oxyz
struct Point {
    double x, y, z;  // Toạ độ của điểm theo trục x, y, z
};

// Định nghĩa hàm nhập cho kiểu dữ liệu điểm
void input(Point &p) {  // Truyền tham chiếu để thay đổi giá trị của biến Point p
    cout << "Nhap toa do x: ";  // Xuất thông báo yêu cầu người dùng nhập toạ độ x
    cin >> p.x;  // Nhập giá trị của toạ độ x từ bàn phím và gán cho p.x
    cout << "Nhap toa do y: ";  // Xuất thông báo yêu cầu người dùng nhập toạ độ y
    cin >> p.y;  // Nhập giá trị của toạ độ y từ bàn phím và gán cho p.y
    cout << "Nhap toa do z: ";  // Xuất thông báo yêu cầu người dùng nhập toạ độ z
    cin >> p.z;  // Nhập giá trị của toạ độ z từ bàn phím và gán cho p.z
}

// Định nghĩa hàm xuất cho kiểu dữ liệu điểm
void output(Point p) {  // Truyền tham số là biến Point p
    cout << "(" << p.x << ", " << p.y << ", " << p.z << ")" << endl;  // Xuất toạ độ của điểm theo định dạng (x, y, z)
}

int main() {
    Point p1;  // Khai báo biến Point p1
    input(p1);  // Gọi hàm nhập để người dùng nhập giá trị cho p1
    output(p1);  // Gọi hàm xuất để xuất giá trị của p1 ra màn hình
    return 0;  // Trả về giá trị 0 để kết thúc chương trình
}
