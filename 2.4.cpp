#include<iostream>
using namespace std;
int main(){
	int x = 200000;
	int y = 1000;
	int days = 30;
	int S = 0;
	for (int i = 1; i<=30; i++){
		S= S+y;
		y = y+1000;
	}
	 S = S+x;
	 cout<<S<<" la so tien sau 1 thang ";
	 return 0;
}
