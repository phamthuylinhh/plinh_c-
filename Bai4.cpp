// Viet chuong trinh nhap ma tran vuong a nxn, tinh tong cac phan tu nam tren duong cheo chinh cua ma tran
#include<iostream>
using namespace std;

int main()
{
	int n , m , mang[10][10];
	cout << "Nhap n :" ;
	cin >> n;
	cout << "Nhap m : ";
	cin >> m;
	
	cout <<" Nhap mang: "<< endl;
	for ( int i = 0; i < n ; i++)
	{
		for (int j = 0; j < m ; j++)
		{
			cin >> mang[i][j] ;
		}
	}
	
	int sum = 0;
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < m ; j++)
		{
			if (i == j)
			{
				sum += mang[i][j];
			}
		}
	}
	
	cout << " Tong cac phan tu nam tren duong cheo chinh cua ma tran la :" << sum ;
	
	return 0;
}
	
