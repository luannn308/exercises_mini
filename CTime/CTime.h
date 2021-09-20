#pragma once
#include<iostream>
#include "CTimeSpan.h"
using namespace std;
class CTime
{
private:
	int gio;
	int phut;
	int giay;
public:
	CTime();
	CTime(int, int, int);
	~CTime();
	CTime operator+(const int sec);
	CTime operator-(const int sec);
	CTime operator++();
	CTime operator--();
	friend CTimeSpan operator -(CTime a , CTime b);
	friend istream& operator >>(istream& is, CTime& a) {
		do
		{
			cout << "Nhap hour: ";
			is >> a.gio;
		} while (a.gio < 0 || a.gio>23);
		do
		{
			cout << "Nhap minute: ";
			is >> a.phut;
		} while (a.phut < 0 || a.phut>59);
		do
		{
			cout << "Nhap second: ";
			is >> a.giay;
		} while (a.giay < 0 || a.giay>59);

		return is;
	}
	friend ostream& operator <<(ostream& os, CTime& a) {
		if (a.gio > 12)
		{
			os << a.gio - 12 << ":";
		}
		else
		{
			os << a.gio << ":";
		}
		if (a.phut < 10) {
			os << "0" << a.phut << ":";
		}
		else
		{
			os << a.phut << ":";
		}
		if (a.giay < 10)
		{
			os << "0" << a.giay;
		}
		else
		{
			os << a.giay;
		}
		if (a.gio > 12)
		{
			os << " PM";
		}
		else
		{
			os << " AM";
		}
		return os;
	}
};

