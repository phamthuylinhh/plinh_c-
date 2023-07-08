//Viet chuong trinh nhap 2 ma tran anxm, b nxm tinh va in ra man hinh ma tran cnxm la tong cua 2 ma tran a va b
#include<iostream>
using namespace std;
int main()
{
	int n , m , a , b , mang[100][100];	
	int s= 0;
    cout <<"Nhap ma tran a: "<< endl;
 	cout << "Nhap n : ";
 	cin >>n;
    cout <<"Nhap m :";
	cin >> m ;
	for ( int i = 0; i < n ; i++)
	{
		for ( int j = 0; j < m ; j++)
		{
			cin >>mang[i][j];
			s += mang[i][j];
		}
	}
	
	cout <<"Nhap ma tran b: "<< endl;
	cout << "Nhap a: ";
	cin >> a;
	cout <<"Nhap b:";
	cin >> b;
	int c = 0;
	for ( int i = 0; i < a ; i++)
	{
		for ( int j = 0; j < b ; j++)
		{
			cin >> mang[i][j];
			c += mang[i][j];
		}
	}
	 
	int sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		for ( int j = 0; j < m ; j++)
		{
		sum =  s + c ;
		}
	}
	
	cout <<" Tong mai ma tran a va b la: "<< sum ;
	return 0;
} 
