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
            * @post m_day and m_year set to 1, m_year set to 1900
            **/
        void Clear();
            /**
            * @brief This will set m_day to d
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

    private:
        unsigned m_day;
        unsigned m_month;
        unsigned m_year;
};

#endif // DATE_H
