//Viet chuong trinh sap xep mang 1 chieu theo thu tu tang dan hoac gaim dan co xay dung cac ham

#include<iostream>
using namespace std;

void Nhap_mang( int a[] , int n)
{
	for (int i = 0 ; i < n ; i++)
	cin >> a[i];
}

void Sap_xep_tang_dan (int a[], int n )
{
	for (int i = 0 ; i < n - 1 ; i++)
	{
		for (int j = i + 1; j < n ; j++)
		{	
			if (a[i] > a[j])
			{
				int mang = a[i];
				a[i] = a[j];
				a[j] = mang;
			}
		}
	}
}

int main()
{
	int a[100], n;
	cout <<"Nhap so phan tu :";
	cin >> n ; 
	cout <<"Nhap phan tu : ";
	Nhap_mang (a, n);
	Sap_xep_tang_dan (a , n);
	cout <<"Phan tu sap xep theo chieu tang dan la: ";
	for (int i = 0 ; i < n ; i++)
	{
		cout <<a[i] <<" ";
	}
	return 0;
}
