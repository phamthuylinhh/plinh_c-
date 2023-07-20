//Viet chuong trinh nhap 2 ma tran anxm, b nxm tinh va in ra man hinh ma tran cnxm la tong cua 2 ma tran a va b
#include<iostream>
using namespace std;
int main()
{
	int n , m , mang1[10][10], mang2[10][10];
	cout << " n = " ;
	cin >> n ; 
	
	cout << " m = " ;
	cin >> m ;
	
	cout <<"Nhap ma tran 1 :" << endl;
	for(int i = 0; i < n ;i++)
	{
		for( int j = 0; j < m ; j++)
		{
			cin >> mang1[i][j];
		}
	}
	
	cout <<"Nhap ma tran 2 : " << endl ;
	for (int i = 0; i< n ; i ++)
	{
		for ( int j = 0; j < m ; j++)
		{
			cin >>mang2[i][j];
		}
	}
	
	cout <<"Tong 2 ma tran la: " << endl;
	for(int i = 0; i< n ; i++)
	{
		for (int j = 0; j < m ; j++)
		{
			cout << mang1[i][j]+mang2[i][j] << " ";
		}
			cout << endl;
	}
	
	return 0;
};
