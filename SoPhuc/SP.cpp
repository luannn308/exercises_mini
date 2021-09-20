#include "SP.h"
#include<iostream>
#include<math.h>
using namespace std;
SP::SP() {
	thuc = 0;
	ao = 0;
}
SP::~SP() {}
SP SP::operator+(const SP& b)const {
	SP tong;
	tong.thuc = this->thuc + b.thuc;
	tong.ao = this->ao + b.ao;
	return tong;
}
SP SP::operator-(const SP& b)const {
	SP hieu;
	hieu.thuc = this->thuc - b.thuc;
	hieu.ao = this->ao - b.ao;
	return hieu;
}
SP SP::operator*(const SP& b)const {
	SP tich;
	tich.thuc = this->thuc * b.thuc - this->ao * b.ao;
	tich.ao = this->thuc * b.ao + this->ao * b.thuc;
	return tich;
}
SP SP::operator/(const SP& b)const {
	SP thuong;
	thuong.thuc = (float)(this->thuc * b.thuc + this->ao * b.ao) / (float)(b.thuc * b.thuc + b.ao * b.ao);
	thuong.ao = (float)(this->ao * b.thuc - this->thuc * b.ao) / (float)(b.thuc * b.thuc + b.ao * b.ao);
	return thuong;
}
int modun(const SP a){
	return sqrt(a.thuc * a.thuc + a.ao * a.ao);
}
bool SP::operator==(const SP a)const {
	if (this->thuc==a.thuc && this->ao == a.ao)
		return true;
	else
		return false;
}
bool SP::operator!=(const SP a)const {
	if (this->thuc == a.thuc && this->ao == a.ao)
		return false;
	else
		return true;
}
bool operator<(const SP a, const SP b){
	if (modun(a) < modun(b))
		return true;
	else
		return false;
}
bool operator>(const SP a, const SP b){
	if (modun(a) > modun(b))
		return true;
	else
		return false;
}
bool operator>=(const SP a, const SP b){
	if (modun(a) > modun(b) || modun(a) == modun(b))
		return true;
	else
		return false;
}
bool operator<=(const SP a, const SP b){
	if (modun(a) < modun(b) || modun(a) == modun(b))
		return true;
	else
		return false;
}
