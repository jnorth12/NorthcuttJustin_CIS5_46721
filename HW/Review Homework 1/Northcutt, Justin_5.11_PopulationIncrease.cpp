/* 
 * File:   PopulationIncrease.cpp
 * Author: Justin Northcutt
 *
 * Created on June 29, 2020, 9:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float startnumb, days;
double popincrease;
int startmin = 2;
int popmin = 0;
int daysmin = 1;
/*
 * 
 */
int main(int argc, char** argv) 
{
    cout << "Enter the starting number of organisms (must be at least 2): ";
    cin >> startnumb;
    cout << endl;
    
    if (startnumb < startmin)
    {
        cout << "Starting number less than 2. Please try again with a valid number.";
        return 0;
    }
    
    cout << "Enter the average daily population increase in percentage (cannot be a negative number): ";
    cin >> popincrease;
    cout << endl;
    
    if (popincrease <= popmin)
    {
        cout << "Population increase is a negative number. Please try again with a valid input.";
        return 0;
    }
    
    cout << "Enter how many days the population will multiply (must be higher than 1): ";
    cin >> days;
    cout << endl;
    
    if (days < daysmin)
    {
        cout << "Number of days entered less than 1. Please try again with a valid input.";
        return 0;
    }
    
    for (int i = 0; i < days; ++i)
    {
        cout << "Number of organisms: " << left << setw(8) << startnumb << " on day: " << left << setw(2) << i + 1 << endl;
        startnumb *= popincrease;
    }
    
    return 0;
}