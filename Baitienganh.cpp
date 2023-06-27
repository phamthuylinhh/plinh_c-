#include<iostream>
using namespace std;

int main()
{
	int n ;
	cout << "Nhap n = "<< endl;
	cin >> n;
	if ( n >= 1 && n<=9)
	{
		string numbers[] = {"one","two","three","four","five","six","seven","eight","nine","even", "odd"};
		cout << numbers [n-1] <<endl;
		
	}
	else if ( n > 9 && n % 2 == 0)
	{	
		cout << "even" <<endl;
	}
	else 
	{	
		cout<< "odd" << endl;
	}
	 
	return 0;
	
};
	
