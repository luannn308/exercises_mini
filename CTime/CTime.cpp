#include "CTime.h"
#include "CTimeSpan.h"
#include<iostream>
using namespace std;
CTime::CTime() {
	gio = 0;
	phut = 0;
	giay = 0;
}
CTime::CTime(int g, int p, int s) {
	gio = g;
	phut = p;
	giay = s;
}
CTime::~CTime(){}
CTime CTime::operator+(const int sec) {
	CTime time;
	time.giay = this->giay + sec;
	time.phut = this->phut;
	time.gio = this->gio;
	if (time.giay > 59)
	{
		for (;time.giay>59;)
		{
			time.giay = time.giay - 60;
			time.phut = time.phut + 1;
		}
	}
	if (time.phut > 59)
	{
		for (; time.phut > 59;) 
		{
			time.phut = time.phut - 60;
			time.gio = time.gio + 1;
		}
	}
	if (time.gio > 23)
	{
		for (; time.gio > 23;)
		time.gio = time.gio - 24;
	}
	return time;
}
CTime CTime::operator-(const int sec) {
	CTime time;
	time.giay = this->giay - sec;
	time.phut = this->phut;
	time.gio = this->gio;
	if (time.giay < 0)
	{
		for (;time.giay<0;)
		{
			time.giay = time.giay + 60;
			time.phut = time.phut - 1;
		}
	}
	if (time.phut < 0){
		for (; time.phut < 0;)
		{
			time.phut = time.phut + 60;
			time.gio = time.gio - 1;
		}
	}
	if (time.gio < 0)
	{
		for (; time.gio < 0;)
		time.gio = time.gio + 24;
	}
	return time;
}
CTime CTime::operator++() {
	CTime time;
	time.giay = this->giay + 1;
	time.phut = this->phut;
	time.gio = this->gio;
	if (time.giay > 59)
	{
		time.giay = time.giay - 60;
		time.phut = this->phut + 1;

	}
	if (time.phut > 59)
	{
		time.phut = time.phut - 60;
		time.gio = this->gio + 1;
	}
	if (time.gio > 23)
	{
		time.gio = time.gio - 24;
	}
	return time;
}
CTime CTime::operator--() {
	CTime time;
	time.giay = this->giay - 1;
	time.phut = this->phut;
	time.gio = this->gio;
	if (time.giay < 0)
	{
		time.giay = time.giay + 60;
		time.phut = time.phut - 1;
	}
	if (time.phut < 0)
	{
		time.phut = time.phut + 60;
		time.gio = time.gio - 1;
	}if (time.gio < 0)
	{
		time.gio = time.gio + 24;
	}
	return time;
}
CTimeSpan operator -(CTime a, CTime b) {
	int h, m, s;
	long d=0;
	s = a.giay - b.giay;
	m = a.phut - b.phut;
	h = a.gio - b.gio;
	if (s < 0)
	{
		s = s + 60;
		m = m - 1;
	}
	if (m < 0)
	{
		m = m + 60;
		h = h - 1;
	}
	if (h < 0)
	{
		h= h + 24;
		d = d - 1;
	}
	return CTimeSpan(d,h,m,s);
}
