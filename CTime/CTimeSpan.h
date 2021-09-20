#pragma once
#include<iostream>
using namespace std;
class CTimeSpan
{
private:
	long d;
	int h, min, sec;
public:
	CTimeSpan();
	CTimeSpan(long,int,int,int);
	~CTimeSpan();
	CTimeSpan operator +(const CTimeSpan b);
	CTimeSpan operator -(const CTimeSpan b);
	bool operator ==(const CTimeSpan b);
	bool operator !=(const CTimeSpan b);
	bool operator <(const CTimeSpan b);
	bool operator >(const CTimeSpan b);
	bool operator <=(const CTimeSpan b);
	bool operator >=(const CTimeSpan b);
	friend istream& operator >>(istream& is, CTimeSpan& a) {
		do
		{
			cout << "Nhap day: ";
			is >> a.d;
		} while (a.d < 0);
		do
		{
			cout << "Nhap hour: ";
				is >> a.h;
		} while (a.h<0||a.h>23);
		do
		{
			cout << "Nhap minute: ";
				is >> a.min;
		} while (a.min < 0 || a.min>59);
		do
		{
			cout << "Nhap second: ";
				is >> a.sec;
		} while (a.sec < 0 || a.sec>59);

		return is;
	}
	friend ostream& operator <<(ostream& os, CTimeSpan& a) {
		if (a.d <= 1) 
		{
			os << a.d << " day ";
		}
		else
		{
			os << a.d << " days ";
		}
			os << a.h << ":";
		if (a.min < 10) {
			os << "0" << a.min << ":";
		}
		else
		{
			os << a.min << ":";
		}
		if (a.sec < 10)
		{
			os << "0" << a.sec;
		}
		else
		{
			os << a.sec<<"s";
		}
		return os;
	}
};

