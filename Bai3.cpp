//Viet chuong trinh dem so phan tu duong chan cua mang 2 chieu
#include<iostream>
using namespace std;

int main()
{	
	int n, m , mang[10][10];
	cout << "Nhap n (hang): ";
	cin >> n ;
	cout<<"Nhap m (cot): ";
	cin >> m;
	int count = 0;
	 
	cout << "Nhap mang :" << endl;
	for ( int i = 0; i < n ; i++)
	{
		for ( int j = 0; j < m ; j++)
		{
			cin >> mang[i][j];
			
			if (mang[i][j] %2 == 0 && mang[i][j] > 0)
			{
				count++;
			}
		}
	}
	 
	cout <<"So phan tu duong chan cua mang 2 chieu la: " << count ;
	
	return 0;
}
	 	
