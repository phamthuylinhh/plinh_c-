//Viet chuong trinh tinh tong cac phan tu duong mang 2 chieu
#include<iostream>
using namespace std;

int main()
{
	int n , m , mang[10][10];
	int count = 0;
	cout <<" n : " ;
	cin >>n;
	cout << " m : ";
	cin >> m;
	
	cout <<"Nhap mang: " << endl;
	for (int i = 0; i< n; i++)
	{
		for (int j = 0;j < m ;j++)
		{
			cin >> mang[i][j];
		}
	}
	
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(mang[i][j] > 0)
			{
				count +=mang[i][j];
			}
		}
	}
	cout <<" Tong cac phan tu duong trong mang 2 chieu: " <<count;
	
	return 0;
};
