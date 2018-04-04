//Program to test Date class

#include "Date.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
//--------------------------------------------------------------
        //TEST 01
//--------------------------------------------------------------
    Date testDate;

    cout << testDate.GetDay() << "/" << testDate.GetMonth() << "/" << testDate.GetYear() << endl;

    cout << endl << "****************END OF TEST 01***************" << endl;
//--------------------------------------------------------------
        //TEST 02
//--------------------------------------------------------------
    testDate.SetDay(3);
    cout << endl << testDate.GetDay() << endl;

    cout << endl << "****************END OF TEST 02***************" << endl;
//--------------------------------------------------------------
        //TEST 03
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
