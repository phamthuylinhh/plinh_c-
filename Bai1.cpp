//Su dung cau lap tinh tong S = 1+1/2+1/3 +...+1/n , voi n nguyen duong nhap tu ban phim 
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n ;
 	double s = 0;
 	cin >> n;
 	for (int i = 1 ; i <= n ; i++)
 	s = s + (1.0/i) ;
 	cout<< "Nhap n : " << s;
 	return 0;
}
 	
