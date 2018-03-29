#include "Date.h"

using namespace std;

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
