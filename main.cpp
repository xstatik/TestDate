//Program to test Date class

#include "Date.h"
#include "DateUtils.h"
#include <iostream>
#include <string>


using namespace std;

void Test01();
void Test02();
void Test03();
void Test04();
void Test05();
void Test06();
void Test07();


int main()
{
    Test01();
    Test02();
    Test03();
    Test04();
    Test05();
    Test06();
    Test07();

    return 0;
}

void Test01()//Test Default constructor
{
    cout << endl << "****************TEST 01***************" << endl;

    Date testDate;

    printDate(testDate);
}

void Test02()//Test SetYear
{
    cout << endl << "****************TEST 02***************" << endl;

    Date testDate;

    if(!testDate.SetDate(1, 1, 9999) && !testDate.SetDate(01, 01, 0))
        {
            cout << "Out of range!!!" << endl;
        }
    if(testDate.SetDate(1, 1, 9998))
        printDate(testDate);
    if(testDate.SetDate(1, 1, 1))
        printDate(testDate);
}

void Test03()//Test SetMonth
{
    cout << endl << "****************TEST 03***************" << endl;

    Date testDate;

    if(!testDate.SetDate(1, 0, 2000) && !testDate.SetDate(01, 13, 2000))
        {
            cout << "Out of range!!!" << endl;
        }

    if(testDate.SetDate(1, 1, 2000))
        printDate(testDate);
    if(testDate.SetDate(1, 12, 2000))
        printDate(testDate);
}

void Test04()//Test SetDay February leap year
{
    cout << endl << "****************TEST 04***************" << endl;

    Date testDate;

    if(!testDate.SetDate(29, 2, 2001))
        {
            cout << "Out of range!!!" << endl;
        }

    if(testDate.SetDate(29, 2, 2000))
        printDate(testDate);
    if(testDate.SetDate(29, 2, 2004))
        printDate(testDate);
}

void Test05()//Test SetDay February non leap year
{
    cout << endl << "****************TEST 05***************" << endl;

    Date testDate;

    if(!testDate.SetDate(31, 2, 2001) && !testDate.SetDate(30, 2, 2001))
        {
            cout << "Out of range!!!" << endl;
        }

    if(testDate.SetDate(28, 2, 2001))
        printDate(testDate);
    if(testDate.SetDate(1, 2, 2003))
        printDate(testDate);
}

void Test06()//Test SetDay Non 31 day months
{
    cout << endl << "****************TEST 06***************" << endl;

    Date testDate;

    if(!testDate.SetDate(31, 4, 2001) && !testDate.SetDate(31, 6, 2001) &&
       !testDate.SetDate(31, 9, 2001) && !testDate.SetDate(31, 11, 2001))
        {
            cout << "Out of range!!!" << endl;
        }

    if(testDate.SetDate(30, 4, 2001))
        printDate(testDate);
    if(testDate.SetDate(30, 9, 2003))
        printDate(testDate);
    if(testDate.SetDate(30, 6, 2001))
        printDate(testDate);
    if(testDate.SetDate(30, 11, 2003))
        printDate(testDate);
}

void Test07()//Test SetDay 31 day months
{
    cout << endl << "****************TEST 07***************" << endl;

    Date testDate;

    if(!testDate.SetDate(32, 1, 2001) && !testDate.SetDate(0, 12, 2001))
        {
            cout << "Out of range!!!" << endl;
        }

    if(testDate.SetDate(31, 1, 2001))
        printDate(testDate);
    if(testDate.SetDate(1, 12, 2003))
        printDate(testDate);
}
