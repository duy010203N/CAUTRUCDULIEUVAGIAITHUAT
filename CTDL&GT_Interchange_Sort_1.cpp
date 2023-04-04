//https://tuicocach.com/interchange-sort-thuat-toan-sap-xep-doi-cho-truc-tiep/
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
//Hàm sắp xếp Interchange Sort
void InterchangeSort(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j]) //Thực hiện đổi chỗ phần tử nhỏ hơn với phần tử thứ i.
                Swap(a[i], a[j]);
}
//hàm xuất mảng
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
