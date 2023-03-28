#include <iostream>  // Thư viện nhập xuất dữ liệu cơ bản trong C++
#include <cmath>     // Thư viện toán học trong C++

using namespace std;  // Sử dụng không gian tên std

int main()  // Hàm chính của chương trình
{
    float x, y, r;  // Khai báo biến tọa độ tâm và bán kính của đường tròn
    const float PI = 3.14159;  // Khai báo hằng số PI bằng giá trị xấp xỉ của số Pi

    // Yêu cầu người dùng nhập tọa độ tâm và bán kính của đường tròn
    cout << "Nhap toa do tam (x, y) cua duong tron: ";  // Yêu cầu người dùng nhập tọa độ tâm của đường tròn
cin >> x >> y;  // Nhận giá trị tọa độ tâm từ người dùng và lưu vào biến x và y
cout << "Nhap ban kinh r cua duong tron: ";  // Yêu cầu người dùng nhập bán kính của đường tròn
cin >> r;  // Nhận giá trị bán kính từ người dùng và lưu vào biến r


    // Tính diện tích và chu vi của đường tròn
   float area = PI * r * r;  // Tính diện tích của đường tròn và lưu vào biến area
float perimeter = 2 * PI * r;  // Tính chu vi của đường tròn và lưu vào biến perimeter
 

    // In kết quả ra màn hình
    cout << "Dien tich cua duong tron la: " << area << endl;  // Xuất diện tích của đường tròn ra màn hình
cout << "Chu vi cua duong tron la: " << perimeter << endl;  // Xuất chu vi của đường tròn ra màn hình

    return 0;  // Kết thúc chương trình
}
