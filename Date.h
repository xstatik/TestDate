// Unit.H - Unit class definition
// Author - Wade Davidson
// Using TortoiseSVN for version mangement.

#ifndef DATE_H
#define DATE_H

using namespace std;

    /**
    * @class Date
    * @brief  Stores the date
    *
    * @author Wade Davidson
    * @version 01
    * @date 29/06/2018 Wade Davidson, Started, Default constructor done.
    *
    * @todo Everything
    */

class Date
{
    public:
            /**
            *@brief Default constructor
            **/
        Date();

    private:
        unsigned m_day;
        unsigned m_month;
        unsigned m_year;
};

#endif // DATE_H
