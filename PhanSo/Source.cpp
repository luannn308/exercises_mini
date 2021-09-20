#include<iostream>
#include"PS.h"
#include<math.h>
using namespace std;
int main() {
    PS a, b;
    cout << "Nhap PS: ";
    cin >> a;
    cout << "Nhap PS: ";
    cin >> b;
    PS c, d, f, g;
    c = a + 10;
    d = a - b;
    f = a * b;
    g = a / b;
    cout << "Can bac 2 cua a: ";
    cout << "Tong = " << c << endl;
    cout << "Hieu = " << d << endl;
    cout << "Tich = " << f << endl;
    cout << "Thuong = " << g << endl;
    if (a == b)
    {
        cout << "true == "<< endl;
    }
    if (a != b)
    {
        cout << "true != " << endl;
    }
    if (a < b)
    {
        cout << "true < " << endl;
    }    
    if (a > b)
    {
        cout << "true > " << endl;
    }
    if (a <= b)
    {
        cout << "true <= " << endl;
    }
    if (a >= b)
    {
        cout << "true >= " << endl;
    }
    system("pause");
    return 0;
}