/* 
 * File:   LeapYearDetector.cpp
 * Author: Justin Northcutt
 *
 * Created on June 29, 2020, 9:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int month, year, days;
int jan = 1, mar = 3, may = 5, jul = 7, aug = 8;
int october = 10;
int december = 12;
int apr = 4, jun = 6, sep = 9;
int nov = 11;
int feb = 2;
/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << endl << "Enter a year: ";
    cin >> year;
    cout << endl;

    if (month == jan || month == mar || month == may || month == jul || month == aug || month == october || month == december) {
        days = 31;
    }

    if (month == apr || month == jun || month == sep || month == nov) {
        days = 30;
    }

    if (month == feb) {
        days = 28;
    }

    if (year % 4 == 0) {
        if (year % 100 == 0) 
        {
            if (year % 100 == 0 && year % 400 == 0) 
            {
                if (month == feb) 
                {
                    days = 29;
                }
                cout << "This is a leap year because it is divisible by 4, 100, and 400. The number of days in " << month << " is " << days;
                return 0;
            }
            cout << "This is not a leap year because, while it is divisible by 4, it is also divisible by 100. The number of days in " << month << " is " << days; 
            return 0;
        }
        if (month == feb) 
        {
            days = 29;
        }
        cout << "This is a leap year because it is divisible by 4. The number of days in " << month << " is " << days;
        return 0;

    }
    return 0;
}