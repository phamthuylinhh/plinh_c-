// Viet chuong trinh dem xem trong mang 1 chieu có bao nhieu so duong chan
#include<iostream>
using namespace std;

int main ()
{
	int n = 0 ;
	cout << "Nhap phan tu cua Mang: " ;
	cin >> n;
	
	int mang[n];
	cout <<"Nhap so phan tu cua Mang: " <<endl ;
	for (int i = 1 ; i <= n ; i++)
	{
		cout <<"Phan tu thu " <<i <<" :";
		cin >> mang[i];
	}
	
	int a = 0;
	for (int i = 0; i < n ; i++)
	{
		if (mang[i] > 0 && mang[i] % 2 == 0)
		{
			a = ;
		}
	}
	 cout << "=> Co so duong chan la: " << a ;
	
	return 0;
};
