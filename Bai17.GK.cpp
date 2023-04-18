#include <iostream>
using namespace std;

double array_sum_recursive(double arr[], int n) {
    if (n == 0) {
        return 0;
    }
    double sum = array_sum_recursive(arr, n-1);
    return sum + arr[n-1];
}

int main() {
    double arr[] = {1.2, -2.3, 3.4, -4.5, 5.6};
    int n = sizeof(arr)/sizeof(arr[0]);
    double sum = array_sum_recursive(arr, n);
    cout << "Tong cua mang la: " << sum;
    return 0;
}
