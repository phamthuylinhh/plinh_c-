#include <iostream>
using namespace std;
int main() 
{
    int a[100];
    int n;
    cout << "\nNhap so luong phan tu n = ";
	cin >> n;
        if (n <= 0) 
		{
        	cout << "\nNhap lai n = ";
        }

    for (int i = 0; i < n; i++)
	{
        cout << "Nhap phan tu thu " << i+1 <<": ";
        cin >> a[i];
    }

   int mang;
   for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Hoan vi 2 so a[i] va a[j]
                mang = a[i];
                a[i] = a[j];
                a[j] = mang;
            }
        }
    }
	
	cout << "Mang sap xep theo thu tu tang dan la : ";
    for (int i = 0; i < n; i++)
	{
        cout<< a[i] << " " ;
    }

    return 0;
};
