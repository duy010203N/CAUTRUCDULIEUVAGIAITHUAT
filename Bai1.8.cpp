#include <iostream> 
using namespace std; 

struct Line { // Khai báo kiểu dữ liệu đường thẳng bằng cấu trúc dữ liệu
    double a, b, c; // Hệ số của đường thẳng ax + by + c = 0
};

void inputLine(Line& line) { // Định nghĩa hàm nhập đường thẳng
    cout << "Enter the coefficients of the line (a, b, c): "; // Hiển thị thông báo yêu cầu nhập các hệ số của đường thẳng
    cin >> line.a >> line.b >> line.c; // Nhập các hệ số của đường thẳng từ bàn phím
}

void outputLine(const Line& line) { // Định nghĩa hàm xuất đường thẳng
    cout << line.a << "x + " << line.b << "y + " << line.c << " = 0" << endl; // Xuất đường thẳng ra màn hình dưới dạng ax + by + c = 0
}

int main() { // Hàm chính của chương trình
    Line myLine; // Khai báo biến kiểu Line để lưu trữ đường thẳng nhập vào từ bàn phím
    inputLine(myLine); // Gọi hàm nhập đường thẳng từ bàn phím
    cout << "The line you entered is: "; // Hiển thị thông báo đường thẳng vừa nhập vào
    outputLine(myLine); // Gọi hàm xuất đường thẳng ra màn hình
    return 0; // Trả về giá trị 0 để kết thúc chương trình
}
