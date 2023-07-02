// Viet chuong trinh tim max , min cua mang 1 chieu

#include<iostream>
using namespace std;

int main()
{
	int n ;
	cout <<"-Nhap phan tu cua mang: ";
	cin >> n ;
	
	int mang [n] ;
	cout <<"-Nhap cac phan tu cua mang: " <<endl;
	for (int i= 0; i < n ;i++)
	{
		cout << " +) Phan tu thu " << i + 1 <<" : " ;
		cin >> mang[i];
	}
	    
	int max = mang[0];
	int min =mang[0];
	for  (int i = 1 ; i < n ; i++)
	{
		if ( mang[i]  > max )
		{
			 max = mang[i];
		}
		
		if ( mang [i] < min )
		{
			 min = mang [i];
		}
	}
	cout << " Gia tri lon nhat la: " << max << endl;
	cout << " Gia tri nho nhat la: " << min;
	
	return 0;
};
