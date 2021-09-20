#include<iostream>
#include"SP.h"
using namespace std;
int main() {
	SP a, b;
	cout << "Nhap SP: ";
	cin >> a;
	cout << "Nhap SP: ";
	cin >> b;
	SP c, d, e, f;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	cout << "Tong = " << c << endl;
	cout << "Hieu = " << d << endl;
	cout << "Tich = " << e << endl;
	cout << "Thuong = " << f << endl;
	if (a == b)
	{
		cout << "SP1 = SP2" << " = " << b << endl;
	}
	if (a != b) {
		cout << a << " != " << b << endl;
	}
	if (a > b) {
		cout << a << " > " << b << endl;
	}
	if (a < b)
	{
		cout << a << " < " << b << endl;
	}
	if (a >= b) {
		cout << a << " >= " << b << endl;
	}
	if (a <= b)
	{
		cout << a << " <= " << b << endl;
	}
	system("pause");
	return 0;
}