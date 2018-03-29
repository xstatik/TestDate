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
    * @todo Everything
    */

class Date
{
    public:
            /**
            * @brief Default constructor
            **/
        Date() {Clear();}
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

    private:
        unsigned m_day;
        unsigned m_month;
        unsigned m_year;
};

#endif // DATE_H
