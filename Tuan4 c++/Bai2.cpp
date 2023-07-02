//. S? d?ng câu l?nh l?p tính t?ng s = 1 + 1/2 + 1/3 + … + 1/n, v?i n nguyên
//dýõng nh?p vào t? bàn phím (có ki?m tra vi?c nh?p n, n?u n ?0 th? yêu c?u nh?p l?i)
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
		
