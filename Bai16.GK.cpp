#include <iostream>
using namespace std;

float sumOfPositive(float arr[], int n)
{
    // Trường hợp cơ bản: Nếu mảng trống hoặc chỉ có một phần tử
    if (n == 0)
        return 0;
    else if (n == 1)
        return (arr[0] > 0) ? arr[0] : 0;
    else
    {
        // Trường hợp đệ quy: tính tổng giá trị dương trong mảng con từ arr[1] đến arr[n-1]
        float subSum = sumOfPositive(arr + 1, n - 1);
        
        // Tính tổng giá trị dương trong toàn bộ mảng
        if (arr[0] > 0)
            return arr[0] + subSum;
        else
            return subSum;
    }
}

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    float arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    float sum = sumOfPositive(arr, n);
    cout << "Tong cac gia tri duong trong mang la: " << sum << endl;

    return 0;
}
