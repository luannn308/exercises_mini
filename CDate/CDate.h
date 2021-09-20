#pragma once
#include<iostream>
using namespace std;
class CDate
{
private:
	int day, year,month;
public:
	CDate();
	CDate(long, int, long);
	~CDate();
	CDate operator+(const int&);
	CDate operator-(const int&);
	void operator ++(int);
	void operator --(int);
	long long operator -(const CDate&);
	friend istream& operator >>(istream& is, CDate &a) {
		do
		{
			cout << "Nhap nam : ";
			is >> a.year;
		} while (a.year < 1);
		do
		{
			cout << "Nhap thang : ";
			is >> a.month;
		} while (a.month < 1 || a.month>12);
		if (a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11) {
			do
			{
				cout << "Nhap ngay : ";
				is >> a.day;
			} while (a.day < 1 || a.day>30);
		}
		else if (a.month == 2) {
			if (a.year % 400 == 0 || (a.year % 4 == 0 && a.year % 100 != 0)) {
				do
				{
					cout << "Nhap ngay : ";
					is >> a.day;
				} while (a.day < 1 || a.day>29);
			}
			else
			{
				do
				{
					cout << "Nhap ngay : ";
					is >> a.day;
				} while (a.day < 1 || a.day>28);
			}
		}
		else
		{
			do
			{
				cout << "Nhap ngay : ";
				is >> a.day;
			} while (a.day < 1 || a.day>31);
		}
		return is;
	}
	friend ostream& operator <<(ostream& os, CDate &a) {
		if (a.day<10)
		{
			os <<"0"<< a.day << "/" << a.month << "/" << a.year;
		}
		else
		{
			os << a.day << "/" << a.month << "/" << a.year;

		}
		return os;
	}
};

