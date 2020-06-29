/* 
 * File:   MoneyConversion.cpp
 * Author: Justin Northcutt
 *
 * Created on June 29, 2020, 9:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double USD, YENPERDOLLAR, EUROSPERDOLLAR;
/*
 * 
 */
int main(int argc, char** argv) 
{
    cout << "Enter the amount of money in USD." << endl;
    cin >> USD;
    
    EUROSPERDOLLAR = (USD * 0.89);
    YENPERDOLLAR = (USD * 107.70);
    
    cout << fixed << setprecision(2) << endl;
    cout << "You entered: $" << USD << ", this amount is: " << endl;
    cout << "€" << EUROSPERDOLLAR   << " in Euros."         << endl;
    cout << "¥" << YENPERDOLLAR     << " in Japanese Yen."  << endl;
    
    return 0;
}