#include "Date.h"

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
