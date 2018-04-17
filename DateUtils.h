#include "Date.h"
#include <iostream>

using namespace std;

void printDate(Date &dat)
{
    cout << "Day: " << dat.GetDay() << endl;
    cout << "Month: " << dat.GetMonth() << endl;
    cout << "Year: " << dat.GetYear() << endl;
}
