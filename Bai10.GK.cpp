#include <iostream>
using namespace std;

int sumOfEven(int arr[], int n) {
    if (n == 0) { // trường hợp cơ sở: mảng rỗng
        return 0;
    }
    int last = arr[n-1];
    if (last % 2 == 0) { // nếu số cuối cùng trong mảng là số chẵn
        return last + sumOfEven(arr, n-1); // cộng số đó vào tổng và tiếp tục đệ quy với mảng bớt đi phần tử cuối cùng
    }
    else { // nếu số cuối cùng trong mảng là số lẻ
        return sumOfEven(arr, n-1); // bỏ qua số đó và tiếp tục đệ quy với mảng bớt đi phần tử cuối cùng
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfEven(arr, n);
    cout << "Tong cac so chan trong mang la: " << sum << endl;
    return 0;
}
