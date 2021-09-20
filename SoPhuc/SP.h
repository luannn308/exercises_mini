#pragma once
#ifndef SP_h
#include<iostream>
using namespace std;
class SP
{
private:
	float thuc;
	float ao;
public:
	SP();
	~SP();
	friend int modun (const SP);
	SP operator+(const SP&)const;
	SP operator-(const SP&)const;
	SP operator*(const SP&)const;
	SP operator/(const SP&)const;
	bool operator==(const SP)const;
	bool operator!=(const SP)const;
	friend bool operator < (const SP,const SP);
	friend bool operator > (const SP, const SP);
	friend bool operator >= (const SP, const SP);
	friend bool operator <= (const SP, const SP);
    friend istream& operator>>(istream& is, SP& a) {
        is >> a.thuc;
        is >> a.ao;
        return is;
    }
    friend ostream& operator<<(ostream& os, SP a) {
		
		if (a.ao == 0)
			os << a.thuc;
		else if (a.thuc==0)
			os << a.ao <<"i";
		else{
			cout << a.thuc << " ";
		if (a.ao >= 0)
			cout << "+ " << a.ao << "i";
		else
			cout << a.ao << "i";
		}
		return os;
    }
};
#endif // !SP_h

