//Viet chuong trinh dem xem trong mang 1 chieu co bao nhieu so duong
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
        if (a[i] > 0 )
            count++;
    }
    cout << "So luong so duong chan trong mang la: " << count;
    return 0;
}
