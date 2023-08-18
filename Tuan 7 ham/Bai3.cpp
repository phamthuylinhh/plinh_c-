//Viet so chuong trinh dem so cach trong co trong xau s co xay dung cac ham

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s ; 
	cout <<" Nhap s :" ; 
	getline(cin , s);
	int count = 0;
	for (int i = 0 ; i < s.length() ; i++)
	{	
		 if (s[i] == ' ')
		 {
		 	count++ ;
		}
	}
	cout <<" So cach trong co trong xau s la :" << count ;
	return 0;
}
		 	
