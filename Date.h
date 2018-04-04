// Date.H - Date class definition
// Author - Wade Davidson
// Using TortoiseSVN for version mangement.

#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

    /**
    * @class Date
    * @brief  Stores the date
    *
    * @author Wade Davidson
    * @version 02
    * @date 29/06/2018 Wade Davidson, Started, Default constructor done.
    *
    * @author Wade Davidson
    * @version 03
    * @date 29/06/2018 Wade Davidson, added m_day setters and getters and tested.
    *
    * @author Wade Davidson
    * @version 04
    * @date 29/06/2018 Wade Davidson, added m_month setters and getters and tested.
    *
    * @author Wade Davidson
    * @version 05
    * @date 29/06/2018 Wade Davidson, added m_year setters and getters and tested.
    *
    * @author Wade Davidson
    * @version 06
    * @date 04/04/2018 Wade Davidson, added function to return month as string
    *
    * @author Wade Davidson
    * @version 07
    * @date 04/04/2018 Wade Davidson, added function to return the entire date as a string
    *
    * @todo Not sure yet.....
    */

class Date
{
    public:
            /**
            * @brief Default constructor
            **/
        Date();
            /**
            * @brief Clears or initialises this class
            * @return void
            * @post m_day and m_month set to 1, m_year set to 1900
            **/
        void Clear();
            /**
            * @brief Sets m_day to d
            * @param unsigned int
            * @return void
            * @post m_day is set to d
            **/
        void SetDay(unsigned d);
            /**
            * @brief Returns m_day
            * @return unsigned int
            **/
        unsigned GetDay() const;
            /**
            * @brief Sets m_month to m
            * @param unsigned int
            * @return void
            * @post m_month is set to m
            **/
        void SetMonth(unsigned m);
            /**
            * @brief Returns m_month
            * @return unsigned int
            **/
        unsigned GetMonth() const;
            /**
            * @brief Sets m_year to y
            * @param unsigned int
            * @return void
            * @post m_year is set to y
            **/
        void SetYear(unsigned y);
            /**
            * @brief Returns m_year
            * @return unsigned int
            **/
        unsigned GetYear() const;
            /**
            * @brief Returns the month name as a string
            * @return string
            **/
        string GetMonthName() const;
            /**
            * @brief Returns the entire date as a string
            * @return string
            **/
        string GetWholeDate() const;

    private:
        unsigned m_day;
        unsigned m_month;
        unsigned m_year;
};

#endif // DATE_H
