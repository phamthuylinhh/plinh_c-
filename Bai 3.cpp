 //S? d?ng c�u l?nh l?p t�nh n! v?i n nguy�n kh�ng �m nh?p v�o t? b�n ph�m (c�
//ki?m tra vi?c nh?p n, n?u n < 0 th? y�u c?u nh?p l?i)
#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
 	int n;
 	cout <<"Nhap n = ";
 	cin >>n;
 	int S = 1;
 	for (int i = 1; i<= n ; i++)
 	{
 		S *= i;
 	}
 	if(n > 0)
 	{
 		cout <<"Gia thua cua n = " << S;
 	}
 	else 
 	{
 		cout <<"Yeu cau nhap lai";
 	}
    return 0;
};
