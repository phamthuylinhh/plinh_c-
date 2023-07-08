// Viet chuong trinh tim max , min cua mang 2 chieu
#include<iostream>
using namespace std;

int main()
{
	int n , m , mang [100][100];
	cout << "Nhap n : ";
	cin >> n;
	cout <<"Nhap m : ";
	cin >> m;
	cout <<"Nhap mang: " <<endl;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0; j < m ; j++)
		{
			cin >> mang[i][j];
		}
	}
	
	int max = mang[0][0];
	int min = mang[0][0];
	
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			if (mang[i][j] > max)
			{
				max = mang[i][j];
			}
			if (mang[i][j] < min)
			{
				min = mang[i][j];
			}
		}
	}
	
	cout << "Gia tri lon nhat: " << max <<endl;
	cout << "Gia tri nho nhat: " << min ;
	
	return 0;
};
