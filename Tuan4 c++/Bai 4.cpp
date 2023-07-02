 //Vi?t chýõng tr?nh nh?p vào s? th?c x là ði?m t?ng k?t c?a m?t sinh viên, in ra
//màn h?nh k?t qu? x?p lo?i c?a sinh viên ðó, bi?t r?ng: + N?u x ? 8.0 ð?t k?t qu? Gi?i
//+ N?u 6.5 ? x <8.0 ð?t k?t qu? Khá
//+ N?u 5.0 ? x <6.5 ð?t k?t qu? Trung b?nh
//+ N?u x <5.0 ð?t k?t qu? Y?u

#include<iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	if ( x >=  8.0)
	{
		cout <<"Dat ket qua Gioi";
	}
	else if (6.5 <= x && 8.0 > x)
	{
		cout <<"Dat ket qua Kha";
	}
	else if (5.0 <=x && x< 6.5)
	{
		cout << "Dat ket qua Trung Binh";
	}
	else 
	{ 
		cout << "Dat ket qua yeu ";
	}
	return 0;
};
