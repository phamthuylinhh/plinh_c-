//Viet chuong trinh doi cac chu cai in hoa cua 1 xau thanh chu cai in thuong

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout <<"Nhap chuoi: ";
	getline(cin , s);
	
	for (int i = 0; i < s.length() ; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] += 32 ;
		}
	}
	
	cout << "Cac chu cai in hoa cua thanh chu cai in thuong la: "<< s ;
	
	return 0;
};
//' tolower ' : in hoa thanh thuong 

