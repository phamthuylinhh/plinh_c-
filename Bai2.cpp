//. S? d?ng c�u l?nh l?p t�nh t?ng s = 1 + 1/2 + 1/3 + � + 1/n, v?i n nguy�n
//d��ng nh?p v�o t? b�n ph�m (c� ki?m tra vi?c nh?p n, n?u n ?0 th? y�u c?u nh?p l?i)
#include<iostream>
using namespace std;
int main (){
	int n;
	cout <<"Nhap n = ";
	cin >> n;
	int s = 0;
	
	for ( int i = 1 ; i <= n ; i++)
	{
		s += (1.0/i);
	} 
	if (n > 0 )
	{
		cout <<"Ket qua:" << s;
	}
	else 
	{
		 cout << "Yeu cau nhap lai ";
	}
	return 0;
};
		
