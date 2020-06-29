/* 
 * File:   StringNames.cpp
 * Author: Justin Northcutt
 *
 * Created on June 29, 2020, 9:12 AM
 */

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
string value;

int nameSearch(const string array[], int NUM_NAMES, string value) 
{
    int first = 0;
    int last = NUM_NAMES,
            middle,
            position = -1;

    bool found = false;

    while (!found && first <= last) 
    {
        middle = (first + last) / 2;
        if (array[middle] == value) 
        {
            found = true;
            position = middle;
        } else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}

int main()
{
 string results;
 const int NUM_NAMES = 20;
 string names[NUM_NAMES] = 
 {"Collins, Bill", "Smith, Bart", "Allen, Jim",
 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
 "Taylor, Terri", "Johnson, Jill",
 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
 "James, Jean", "Weaver, Jim", "Pore, Bob",
 "Rutherford, Greg", "Javens, Renee",
 "Harrison, Rose", "Setzer, Cathy",
 "Pike, Gordon", "Holland, Beth" };
 
 cout << "Enter a name you want to find: ";
 cin >> value;
 results = nameSearch(names, NUM_NAMES, value);
 
 if (results == -1)
     cout << "That name does not exist in the array. \n";
 else
 {
     cout << "That person is found at element " << results;
     cout << " in the array. \n";
 }   
 return 0; 
}