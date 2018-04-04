#include "Date.h"

using namespace std;

Date::Date()
{
    Clear();
}

void Date::Clear()
{
    m_day = 1;
    m_month = 1;
    m_year = 1900;
}

void Date::SetDay(unsigned d)
{
    m_day = d;
}

unsigned Date::GetDay() const
{
    return m_day;
}

void Date::SetMonth(unsigned m)
{
    m_month = m;
}

unsigned Date::GetMonth() const
{
    return m_month;
}

void Date::SetYear(unsigned y)
{
    m_year = y;
}

unsigned Date::GetYear() const
{
    return m_year;
}

string Date::GetWholeDate() const
{
    string tempString;

    tempString = to_string(m_day);
    tempString += " ";
    tempString += GetMonthName();
    tempString += " ";
    tempString += (to_string(m_year));

    return (tempString);
}


string Date::GetMonthName() const
{
    switch(m_month)
    {
        case 1:
            return "January";
            break;
        case 2:
            return "February";
            break;
        case 3:
            return "March";
            break;
        case 4:
            return "April";
            break;
        case 5:
            return "May";
            break;
        case 6:
            return "June";
            break;
        case 7:
            return "July";
            break;
        case 8:
            return "August";
            break;
        case 9:
            return "September";
            break;
        case 10:
            return "October";
            break;
        case 11:
            return "November";
            break;
        case 12:
            return "December";
            break;
        default:
            return "Not Found";
    }
}
