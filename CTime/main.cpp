#include"CTimeSpan.h"
#include"CTime.h"
#include<iostream>
using namespace std;
int main() {
    CTime a,b,c;
    CTimeSpan d,x,y;
    int sec;
    cout << "=> Bai 03 : " << endl;
    cin >> x;
    cout << "CTimeSpan -> " << x << endl;
    cin >> y;
    cout << "CTimeSpan -> " << y << endl;
    cout << "CtimeSpan_1 + CtimeSpan_2 = ";
    d = x + y;
    cout << d << endl;
    cout << "CtimeSpan_1 - CtimeSpan_2 = ";
    d = x - y;
    cout << d << endl;
    if (x == y)
    {
        cout << "CtimeSpan_1 == CtimeSpan_2" << endl;
    }
    if (x != y)
    {
        cout << "CtimeSpan_1 != CtimeSpan_2 " << endl;
    }
    if (x < y)
    {
        cout << "CtimeSpan_1 < CtimeSpan_2 " << endl;
    }
    if (x > y)
    {
        cout << "CtimeSpan_1 > CtimeSpan_2 " << endl;
    }
    if (x <= y)
    {
        cout << "CtimeSpan_1 <= CtimeSpan_2" << endl;
    }
    if (x >= y)
    {
        cout << "CtimeSpan_1 >= CtimeSpan_2" << endl;
    }
    cout << "=> Bai 04 : " << endl;
    cout << "Nhap sec : ";
    cin >> sec;
	cin >> a;
	cout <<"CTime -> "<< a <<endl;
	cin >> b;
	cout <<"CTime -> "<< b << endl;
	cout << "Ctime_1 + sec = ";
	c = a + sec;
	cout << c << endl;
	cout << "Ctime_1 - sec = ";
	c = a - sec;
    cout << c << endl;
    cout << "Ctime_1 + 1 = ";
    c = ++a;
    cout << c << endl;
    cout << "Ctime_1 - 1 = ";
    c = --a;
	cout << c << endl;
    cout << "Ctime_1 - Ctime_2 = ";
    d = a - b;
    cout << d << endl;
	return 0;
}
