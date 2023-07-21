//Viet chuong trinh doi cac chu cai in thuong cua 1 xau thanh chu cai in hoa
# include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; 
	cout <<"Nhap chuoi : ";
	getline(cin , s);
	
	for (int i = 0 ; i < s.length() ; i++)
	{
		s[i] = toupper(s[i]);
	}
	
	cout << "Chu cai in thuong thanh chu cai in hoa la: " << s;
	
	return 0;
}
	

