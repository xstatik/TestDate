//Program to test Date class

#include "Date.h"
#include "DateUtils.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
//--------------------------------------------------------------
        //TEST 01 - Test default constructor
//--------------------------------------------------------------
    Date testDate;

    printDate(testDate);

    cout << endl << "****************END OF TEST 01***************" << endl;
//--------------------------------------------------------------
        //TEST 02 - Test SetDay and preconditions
//--------------------------------------------------------------
    testDate.SetDay(3);

    if(!testDate.SetDay(0) && !testDate.SetDay(32))
    {
        cout << "Out of range!!!" << endl;
    }

    testDate.SetDay(1);
    printDate(testDate);

    testDate.SetDay(31);
    printDate(testDate);

    cout << endl << "****************END OF TEST 02***************" << endl;
//--------------------------------------------------------------
        //TEST 03 - Test SetMonth and precondtions
//--------------------------------------------------------------
    testDate.SetMonth(12);
    cout << endl << testDate.GetMonth() << endl;

    cout << endl << "****************END OF TEST 03***************" << endl;
//--------------------------------------------------------------
        //TEST 04
//--------------------------------------------------------------
    testDate.SetYear(2012);
    cout << endl << testDate.GetYear() << endl;

    cout << endl << "****************END OF TEST 04***************" << endl;
//--------------------------------------------------------------
        //TEST 05
//--------------------------------------------------------------
    for(int i = 1; i <= 12; i++)
    {
        testDate.SetMonth(i);
        cout << testDate.GetMonth() << " - " << testDate.GetMonthName() << endl;
    }
    cout << endl << "****************END OF TEST 05***************" << endl;
//--------------------------------------------------------------
        //TEST 05
//--------------------------------------------------------------
    for(int i = 1; i <= 12; i++)
    {
        testDate.SetMonth(i);
        cout << testDate.GetMonth() << " - " << testDate.GetWholeDate() << endl;
    }
    cout << endl << "****************END OF TEST 06***************" << endl;


    return 0;
}
