#include <iostream> // thư viện đầu vào để sử dụng cin, cout
#include <string> // thư viện đầu vào để sử dụng kiểu dữ liệu string
using namespace std; // sử dụng không gian tên std

struct SOTIETKIEM {        // khai báo kiểu dữ liệu SOTIETKIEM là một struct
    string maSo;          // khai báo thuộc tính maSo kiểu dữ liệu string
    string loaiTietKiem;      
    string hoTenKhachHang;   
    int chungMinhNhanDan;       
    string ngayMoSo;           
    double soTienGui;               
};

void nhap(SOTIETKIEM &stk) {            // khai báo hàm nhập dữ liệu cho SOTIETKIEM
    cout << "Nhap ma so: ";            // hiển thị thông báo để nhập mã số
    cin >> stk.maSo;                  // nhập mã số từ bàn phím và lưu vào thuộc tính maSo của đối tượng stk
    cout << "Nhap loai tiet kiem: ";               
    cin >> stk.loaiTietKiem;                
    cout << "Nhap ho ten khach hang: ";        
    getline(cin, stk.hoTenKhachHang);             // nhập họ tên khách hàng từ bàn phím và lưu vào thuộc tính hoTenKhachHang của đối tượng stk
    cout << "Nhap chung minh nhan dan: ";             
    cin >> stk.chungMinhNhanDan;                     
    cout << "Nhap ngay mo so (dd/mm/yyyy): ";          
    cin >> stk.ngayMoSo;                         
    cout << "Nhap so tien gui: ";               
    cin >> stk.soTienGui;                       
}

void xuat(SOTIETKIEM stk) {                    // khai báo hàm xuất dữ liệu cho SOTIETKIEM
cout << "Ma so: " << stk.maSo << endl;        // hiển thị thông tin mã số của đối tượng stk
cout << "Loai tiet kiem: " << stk.loaiTietKiem << endl; 
cout << "Ho ten khach hang: " << stk.hoTenKhachHang << endl; 
cout << "Chung minh nhan dan: " << stk.chungMinhNhanDan << endl; 
cout << "Ngay mo so: " << stk.ngayMoSo << endl; 
cout << "So tien gui: " << stk.soTienGui << endl; 
}

int main() {       // hàm main để chạy chương trình
SOTIETKIEM stk;   // khai báo biến stk thuộc kiểu dữ liệu SOTIETKIEM
nhap(stk);       // gọi hàm nhập dữ liệu cho biến stk
xuat(stk);      // gọi hàm xuất dữ liệu của biến stk
return 0; 
}
