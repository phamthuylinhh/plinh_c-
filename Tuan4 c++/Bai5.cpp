//Viet chuong trinh tinh tong va trung binh cong cac phan tu trong mang 1 chieu
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "- Nhap phan tu cua mang: ";
	cin >> n;
	
	int mang[n];
	cout <<"- Nhap cac phan tu cua mang " <<endl;
	for(int i = 0 ; i < n ; i++) 
	{
		cout << "+) Phan tu thu " << i + 1 <<": ";
		cin >> mang[i];
	}
	
	int sum = 0;
	for ( int i = 0; i < n ; i++)
	{ 	
		sum += mang[i];
	}
	
	float a = (float)sum / n;
	cout << "Tong phan tu trong mang la: " << sum << endl;
	cout << "Trung binh cong cac phan tu trong mang la: " <<a << endl;
	
	return 0;
};
