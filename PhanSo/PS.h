#pragma once
#include<iostream>
using namespace std;
#ifndef PS_h
class PS
{
private:
    long tu;
    long mau;
    int ucln(int, int);
public:
    PS();
    PS(long t, long m);
    PS(long t);
    ~PS();
   /*operator double() const { return double(tu)/mau;}*/
    void rutgon();
    PS& operator =(const PS&);
    PS operator +(PS);
    friend PS operator+(const int , const PS);
    friend PS operator -(const PS&, const int);
    friend PS operator -(const PS&, const PS&);
    PS operator *(const PS&)const;
    friend PS operator /(const PS&, const PS&);
    bool operator==(const PS)const;
    bool operator!=(const PS)const;
    bool operator < (const PS)const;
    bool operator > (const PS)const;
    bool operator >= (const PS)const;
    bool operator <= (const PS)const;
    PS& operator++();
    PS operator++(int);
    PS& operator--();
    PS operator--(int);
    friend istream& operator>>(istream& is, PS& a) {
        is >> a.tu;
        is >> a.mau;
        return is;
    }
    friend ostream& operator<<(ostream& os, PS a) {
        a.rutgon();
        if (a.tu == 0) {
            os << "0";
        }
        else if (a.mau == 1) {
            os << a.tu;
        }
        else if (a.mau == -1) {
            os << -a.tu;
        }
        else if (a.mau<0)
        {
            os << -a.tu << "/" << -a.mau;
        }
        else {
            os << a.tu << "/" << a.mau;
        }
        return os;
    }
};
#endif // !PS_hpp