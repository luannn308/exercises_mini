#include "CTimeSpan.h"
#include<iostream>
using namespace std;
CTimeSpan::CTimeSpan() {
	d = 0;
	h = 0;
	min = 0;
	sec = 0;
}
CTimeSpan::CTimeSpan(long n,int g, int p, int s) {
	d = n;
	h = g;
	min = p;
	sec = s;
}
CTimeSpan::~CTimeSpan() {}
CTimeSpan CTimeSpan::operator +(const CTimeSpan b) {
	CTimeSpan time;
	time.sec = this->sec + b.sec;
	time.min = this->min + b.min;
	time.h = this->h + b.h;
	time.d = this->d + b.d;
	if (time.sec>59)
	{
		time.sec = time.sec - 60;
		time.min = time.min + 1;
		
	}
	if (time.min>59)
	{
			time.min = time.min - 60;
			time.h = time.h + 1;
	}
	if (time.h>23)
	{
		time.h = time.h - 24;
		time.d = time.d + 1;
	}
	return time;
}
CTimeSpan CTimeSpan::operator -(const CTimeSpan b) {
	CTimeSpan time;
	time.sec = this->sec - b.sec;
	time.min = this->min - b.min;
	time.h = this->h - b.h;
	time.d = this->d - b.d;
	if (time.sec<0)
	{	
		time.sec = time.sec+60;
		time.min = time.min - 1;
	}
	if (time.min<0)
	{
		time.min = time.min+60;
		time.h = time.h - 1;
	}
	if (time.h<0)
	{
		time.h = time.h+24;
		time.d = time.d - 1;
	}
	return time;
}
bool CTimeSpan::operator ==(const CTimeSpan b) {
	if (this->d == b.d && this->h == b.h && this->min == b.min && this->sec == b.sec) {
		return true;
	}
	else
	{
		return false;
	}
}
bool CTimeSpan::operator !=(const CTimeSpan b) {
	if (this->d == b.d && this->h == b.h && this->min == b.min && this->sec == b.sec) {
		return false;
	}
	else
	{
		return true;
	}
}
bool CTimeSpan::operator <(const CTimeSpan b) {
	if (this->d < b.d) {
		return true;
	}
	else if(this->d==b.d)
	{
		if (this->h < b.h)
		{
			return true;
		}
		else if(this->h == b.h)
		{
			if (this->min < b.min)
			{
				return true;
			}
			else if (this->min == b.min)
			{
				if (this->sec < b.sec)
				{
					return true;
				}
				else if(this->sec == b.sec)
				{
					return false;
				}
			}
		}
	}
	return false;
}
bool CTimeSpan::operator >(const CTimeSpan b) {
	if (this->d > b.d) {
		return true;
	}
	else if (this->d == b.d)
	{
		if (this->h > b.h)
		{
			return true;
		}
		else if (this->h == b.h)
		{
			if (this->min > b.min)
			{
				return true;
			}
			else if (this->min == b.min)
			{
				if (this->sec > b.sec)
				{
					return true;
				}
				else if (this->sec == b.sec)
				{
					return false;
				}
			}
		}
	}
	return false;
}
bool CTimeSpan::operator <=(const CTimeSpan b) {
	if (this->d < b.d) {
		return true;
	}
	else if (this->d == b.d)
	{
		if (this->h < b.h)
		{
			return true;
		}
		else if (this->h == b.h)
		{
			if (this->min < b.min)
			{
				return true;
			}
			else if (this->min == b.min)
			{
				if (this->sec < b.sec)
				{
					return true;
				}
				else if (this->sec == b.sec)
				{
					return true;
				}
			}
		}
	}
	return false;
}
bool CTimeSpan::operator >=(const CTimeSpan b) {
	if (this->d > b.d) {
		return true;
	}
	else if (this->d == b.d)
	{
		if (this->h > b.h)
		{
			return true;
		}
		else if (this->h == b.h)
		{
			if (this->min > b.min)
			{
				return true;
			}
			else if (this->min == b.min)
			{
				if (this->sec > b.sec)
				{
					return true;
				}
				else if (this->sec == b.sec)
				{
					return true;
				}
			}
		}
	}
	return false;
}