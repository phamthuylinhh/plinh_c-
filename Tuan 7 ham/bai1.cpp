//Viet chuong trinh tim  max , min  cua mang 1 chieu co xay dung cac ham

#include<iostream>
using namespace std;

int max (int a[] , int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
 
}

int min (int a[] , int n)
{
	int min = a[0];
	for (int i = 1 ; i < n ; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}

void Nhapmang (int a[] , int n)
{
	for (int i = 0; i < n ;i++)
	cin >> a[i];
}

int main ()
{
	int a[100] , n;
	cout << "Nhap so phan tu: " ;
	cin >> n;
	cout <<"Nhap phan tu: ";
	Nhapmang (a , n);
	int max1 = max (a, n);
	cout << " Max : " << max1  << endl;
	int min1 = min (a, n);
	cout <<" Min : " << min1 ;
	return 0;
}

	
