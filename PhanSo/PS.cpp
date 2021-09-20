#include "PS.h"
PS::PS() {
    tu = 0;
    mau = 1;
}
PS::~PS() {}
PS::PS(long t,long m) {
    tu = t;
    mau = m;
}
PS::PS(long t) {
    tu = t;
    mau = 1;
}
PS& PS::operator =(const PS&a) {
    if (this!=&a)
    {
        this->tu = a.tu;
        this->mau = a.mau;
    }
    return *this;
}
PS PS::operator+ (PS b){
    return PS(this->tu * b.mau + this->mau * b.tu, this->mau * b.mau);
}
PS operator+(const int a, const PS b) {
    return PS(a * b.mau + b.tu, b.mau);
}
PS operator -(const PS& a, const int b) {
    return PS(a.tu - a.mau * b, a.mau * b);
}
PS operator -(const PS& a, const PS& b) {
    return PS(a.tu * b.mau - a.mau * b.tu, a.mau * b.mau);
}
PS PS::operator*(const PS& b)const {
    return PS(this->tu * b.tu, this->mau * b.mau);
}
PS operator/(const PS& a, const PS& b) {
    return PS(a.tu * b.mau, a.mau * b.tu);
}
PS& PS::operator++() {
    *this = *this + 1;
    return *this;
}
PS PS::operator++(int) {
    PS temp = *this;
    ++(*this);
    return temp;
}
PS& PS::operator--() {
    *this = *this - 1;
    return *this;
}
PS PS::operator--(int) {
    PS temp = *this;
    --(*this);
    return temp;
}
int PS::ucln(int x, int y) {
    if (x < y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    while (y != 0) {
        int m = x % y;
        x = y;
        y = m;
    }
    return x;
}
void PS::rutgon() {
    int uc = ucln(this->tu, this->mau);
    this->tu = this->tu / uc;
    this->mau = this->mau / uc;
}
bool PS:: operator==(const PS b)const {
    if (this->tu == b.tu && this->mau == b.mau)
        return  true;
    else
        return false;
}
bool PS:: operator!=(const PS b)const {
    if (this->tu == b.tu && this->mau == b.mau)
        return  false;
    else
        return true;
}
bool PS::operator < (const PS b) const {
    if ((this->tu*b.mau) < (b.tu*this->mau))
        return true;
    else
        return false;
}
bool PS::operator > (const PS b) const {
    if ((this->tu * b.mau) > (b.tu * this->mau))
        return true;
    else
        return false;
}
bool PS::operator >= (const PS b) const {
    if ((this->tu * b.mau) > (b.tu * this->mau) || (this->tu * b.mau) == (b.tu * this->mau))
        return true;
    else
        return false;
}
bool PS::operator <= (const PS b) const {
    if ((this->tu * b.mau) < (b.tu * this->mau) || (this->tu * b.mau) == (b.tu * this->mau))
        return true;
    else
        return false;
}