#include<iostream>
using namespace std;

	string ham ( int n) {
		if(n>=1 && n<=9)
		{
			string number[]= {"one ","two","three","four","five","six","seven","eight","night", "even","odd"};
			return number[n-1];
		} else if (n > 9)
			{
			if( n % 2 == 0) {
				return "even";
		} else {
		  		return "odd";
		  	}
		return "";
		  		
}
int main() 
{
	int a;
	int b;
	cin>>a>>b;
		if(a<=b && a>=1 && b<=9)
	{
		for( int i = a; i<=b; i++)
			{cout<<i <<std::endl;}
		cout<<a<<std::endl;
		cout<<b<<std::endl;;
	return 0;		
	}
};


