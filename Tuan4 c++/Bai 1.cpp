//Bài 1. S? d?ng câu l?nh r? nhánh l?ng nhau, vi?t chýõng tr?nh gi?i phýõng tr?nh b?c
//nh?t ax + b = 0, v?i hai h? s? a, b th?c nh?p vào t? bàn phím.
#include<iostream>
using namespace std;
int main ()
{	
	float a, b;
	cout << "Nhap a = " <<endl;
	cin >> a ;
	cout << "Nhap b = "<<endl;
	cin>> b;
	int x;
	if (a != 0) 
	{
		x = -(float)b/a ;
		cout << "Phuong trinh có nghiem " << -b/a <<endl;
	}
	else if (  a == 0 && b == 0)
	{
		cout<< "Phuong trinh vo so nghiem " << endl;
	}
	else 
	{
		cout <<"Phuong trinh vo nghiem " << endl;
	}
	return 0;
};
	
