//Viet chuong trinh dem so chu cai trong xau S

#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	string s ;
	cout <<"Nhap s = ";
	getline(cin, s);
	int count = 0;
	for (int i = 0 ; i  < s.size() ; i++)
	{	
		if ( isalpha (s[i]))
		count++;
	}
	
	
	cout <<"So chu cai co trong xau s la: " << count <<endl;
	
	return 0;
}
