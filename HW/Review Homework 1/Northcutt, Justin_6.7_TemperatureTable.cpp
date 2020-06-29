/* 
 * File:   TemperatureTable.cpp
 * Author: Justin Northcutt
 *
 * Created on June 29, 2020, 9:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double temp, cel;

void celConvert(double temp, double cel, int i)
{
    cel = 0;
    cel = (temp - 32) * 5/9;
    
    cout << fixed << setprecision(1) << endl;
    cout << "When the temperature in Fahrenheit is " << temp << "°F, the temperature in Celsius is : " << cel << "°C" << endl;
}

/*
 * 
 */
int main(int argc, char** argv) 
{   
    for (int i = 0; i <= 20; i++)
    {
       
        temp = 0;
        
        temp += i;
        
        celConvert(temp, cel, i);
                
    }
    return 0;
}