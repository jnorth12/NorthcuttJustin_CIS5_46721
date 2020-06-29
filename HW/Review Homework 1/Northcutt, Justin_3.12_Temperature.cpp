/* 
 * File:   Temperature.cpp
 * Author: Justin Northcutt
 *
 * Created on June 29, 2020, 9:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double temp, feh;
/*
 * 
 */
int main(int argc, char** argv) 
{
    cout << "Enter the temperature in Celsius." << endl;
    cin >> temp;
    
    feh = ((temp) * 9/5) + 32;
    
    cout << fixed << setprecision(1) << endl;
    cout << "You entered: " << temp << "°C, this temperature in Fahrenheit is: " << feh << "°F.";
    return 0;
}