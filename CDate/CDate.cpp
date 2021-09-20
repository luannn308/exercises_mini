#include "CDate.h"
CDate::CDate() {
	day = 0;
	month = 0;
	year = 0;
}
CDate::CDate(long ng, int th , long n) {
	day = ng;
	month = th;
	year = n;
}
CDate::~CDate() {}
CDate CDate::operator+(const int &date) {
	CDate time;
	time.day = this->day;
	time.month = this->month;
	time.year = this->year;
    int k = time.day + date;
    do {
        switch (time.month)
        {
        case 1:case 3:case 5: case 7:case 8: case 10: case 12:
            if (k > 31)
            {
                time.month++;
                if (time.month == 13)
                {
                    time.month = 1;
                    time.year++;
                }
                k -= 31;
            }
            else
            {
                time.day = k;
                k = 0;
            }
            break;
        case 4:case 6: case 9: case 11:
            if (k > 30)
            {
                time.month++;
                k -= 30;
            }
            else
            {
                time.day = k;
                k = 0;
            }
            break;
        case 2:
            if (time.year % 400 == 0 || (time.year % 4 == 0 && time.year % 100 != 0))
            {
                if (k > 29)
                {
                    time.month++;
                    k -= 29;
                }
                else
                {
                    time.day = k;
                    k = 0;
                }
            }
            else
            {
                if (k > 28)
                {
                    time.month++;
                    k -= 28;
                }
                else
                {
                    time.day = k;
                    k = 0;
                }
            }
            break;
        }
    } while (k > 0);
    return time;
}
CDate CDate::operator-(const int &date) {
	CDate time;
	time.day = this->day;
	time.month = this->month;
	time.year = this->year;
    int x = date;
	do
	{
		if (time.day>date)
		{
			time.day -= x;
			x = 0;
		}
		else
		{
			x -= time.day;
			time.month--;
			if (time.month == 4 || time.month == 6 || time.month == 9 || time.month == 11) {
				time.day = 30;
			}
			else if (time.month == 2)
			{
				if (time.year % 400 == 0 || (time.year % 4 == 0 && time.year % 100 != 0)) {
					time.day = 29;
				}
				else
				{
					time.day = 28;
				}
			}
			else if(time.month == 1 || time.month == 5 || time.month == 3 || time.month == 7 || time.month == 8 || time.month == 10|| time.month == 12)
			{
				time.day = 31;
			}
            else {
                time.month = 12;
                time.year--;
                time.day = 31;
            }
		}
	} while (x>0);
return time;
}
void CDate::operator ++(int) {
    day++;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day>30)
        {
            day = 1;
            month++;
        }
    }
    else if (month == 2)
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            if (day > 29)
            {
                day = 1;
                month++;
            }
        }
        else
        {
            if (day > 28)
            {
                day = 1;
                month++;
            }
        }
    }
    else
    {
        if (day > 31)
        {
            day = 1;
            month++;
        }if (month == 13)
        {
           year++;
            month = 1;
        }
    }
}
void CDate::operator --(int) {
    day=day-1;
    if (day == 0) {
        month--;
        switch (month)
        {
        case 1:case 3: case 5: case 7:case 8:case 10:
            day = 31;
            break;
        case 0:
            day = 31;
            month = 12;
            year--;
            break;
        case 4: case 6: case 9: case 11:
            day = 30;
            break;
        case 2:
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) day = 29;
            else day = 28;
            break;
        }
    }
}
long long CDate::operator -(const CDate& d) {
    CDate time;
    time.day = day;
    time.month = month;
    time.year = year;
    long long a = time.day;
    do {
        switch (time.month)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            a += 31;
            time.month--;
            if (time.month == 0)
            {
                time.year--;
                time.month = 12;
            }
            break;
        case 4: case 6: case 9: case 11:
            a += 30;
            time.month--;
            break;
        case 2:
            if (time.year % 400 == 0 || (time.year % 4 == 0 && time.year % 100 != 0))
            {
                a += 29;
                time.month--;
            }
            else
            {
                a += 28;
                time.month--;
            }
        }
    } while (time.year > 0);

    time.day = d.day;
    time.month = d.month;
    time.year = d.year;
    long long b = time.day;
    do {
        switch (time.month)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            b += 31;
            time.month--;
            if (time.month == 0)
            {
                time.year--;
                time.month = 12;
            }
            break;
        case 4: case 6: case 9: case 11:
            b += 30;
            time.month--;
            break;
        case 2:
            if (time.year % 400 == 0 || (time.year % 4 == 0 && time.year % 100 != 0))
            {
                b += 29;
                time.month--;
            }
            else
            {
                b += 28;
                time.month--;
            }
        }
    } while (time.year > 0);
    return a - b;
}