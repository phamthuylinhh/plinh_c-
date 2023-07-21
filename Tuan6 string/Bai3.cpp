//Viet chuong trinh dem so ky tu so co trong xau s
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cout <<"Nhap s : " ;
	getline(cin , s);
	int count = 0;
	
	for (int i = 0; i < s.length(); i++)
	{
		if ( isdigit (s[i]))
		{
			count++;
		}
	}
	
	cout <<"So ky tu co trong xau s la: " << count <<endl;
	return 0;
}
			

