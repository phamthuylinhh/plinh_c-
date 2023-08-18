//Viet chuong  trinh doi 1 so nguen khong am thanh xau nhi phan co xay dung cac ham

#include<iostream>
#include<math.h>
using namespace std;

int show (long a)
{
	int b = 0 , c = 0 , d ;
	while ( a != 0)
	{ 
		d = a % 10; 
		a = a / 10; 
		b = b + d *pow(2, c);
		c++;
	}
	return b ;
}	
int main ()
{
	long a;
	cout <<"So nhi phan can chuyen doi la(gom 8 so): ";
	cin >> a;
	cout <<"So nhi phan sau khi da chuyen doi la: " << show(a);
}
		
		

