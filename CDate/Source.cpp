#include<iostream>
#include"CDate.h"
#include<math.h>
#include "Source.h"
using namespace std;
int main() {
	CDate Date_1, Date_2,Date_kq;
	int Date_num;
	cout << "Nhap so ngay de thuc hien + - : ";
	cin >> Date_num;
	cin >> Date_1;
	cout <<"Date_1 = "<< Date_1 << endl;
	cin >> Date_2;
	cout << "Date_2 = "<< Date_2 << endl;
	Date_kq = Date_1 + Date_num;
	cout <<"Date_1 + Date_num = "<< Date_kq<<endl;
	Date_kq = Date_1 - Date_num;
	cout << "Date_1 - Date_num = "<< Date_kq << endl;
	Date_1++;
	cout << "Date_1 + 1 = " << Date_1 << endl;
	Date_2--;
	cout << "Date_2 - 1 = " << Date_2 << endl;
	 long long space = abs(Date_1 - Date_2);
	if(space < 2) cout << "Date_1 - Date_2 = " << space << " day"<< endl;
	else cout << "Date_1 - Date_2 = " << space << " days" << endl;	

	return 0;
}