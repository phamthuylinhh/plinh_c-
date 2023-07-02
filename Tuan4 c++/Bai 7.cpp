//Viet chuong trinh dem xem trong mang 1 chieu co bao nhieu so duong
#include<iostream>
using namespace std;
 
int main ()
{	
	int n ;
	cout << "Nhap phan tu cuan Mang : " ;
	cin >> n ;
	
	int mang [n];
	cout << "Nhap cac phan tu cuan Mang: " <<endl;
	for (int i = 1 ; i <= n ; i++)
	{
		cout << "Phan tu thu " << i << ": ";
		cin >>mang[i];
	}
	
	int songuyen = 0;
	for (int i = 1 ; i <= n ; i++)
	{ 	
		if (mang[i] > 0)
		{
	 	 songuyen = i;
	 	}
	 	if  (mang [i] <0)
	 	{
	 		songuyen = 0;
	 	}
	}
	cout << "So duong co trong Mang la: "<< songuyen;
	
	return 0;
};
	
