//. Su dung câu lenh lap tính tong s = 1 + 1/2 + 1/3 + … + 1/n, voi n nguyên
//duong nhap vào tu bàn phím (có kiem tra viec nhap n, neu n <0 thi yêu cau nhap lai)
#include<iostream>
using namespace std;
int main (){
	int n;
	cout <<"Nhap n = ";
	cin >> n;
	float s = 0.0;
	
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
		 cout << "Yeu cau nhap lai:  ";
		 cin >> n;
		 for ( int i = 1 ; i <= n ; i++)
		 {
				s += (1.0/i);
		 } 
		 cout <<"Ket qua:" << s;
	}
	return 0;
};
		
