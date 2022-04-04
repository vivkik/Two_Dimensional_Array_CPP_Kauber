//William Kauber
//Teacher: Dr. Tyson McMillan
//April 8th 2022
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;
/*
Research Input data: go to http://www.weather.com (Links to an external site.)
Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.
//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities
//Data Table
//City X, Day X: Temp
City 1, Day 1: TEMP
City 1, Day 2: TEMP
City 1, Day 3: TEMP
City 1, Day 4: TEMP
City 1, Day 5: TEMP
City 1, Day 6: TEMP
City 1, Day 7: TEMP
City 2, Day 1: TEMP
City 2, Day 2: TEMP
City 2, Day 3: TEMP
City 2, Day 4: TEMP
City 2, Day 5: TEMP
City 2, Day 6: TEMP
City 2, Day 7: TEMP
*/
 
int main()
{
      const int CITY = 2;
      const int WEEK = 7;
 
    int temperature[CITY][WEEK];
    //Note your input data from the above
    cout << "Enter all temperature for a week of first city and then second city. \n";
 
    // Inserting the values into the temperature array
    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }
 
    cout << "\n\nDisplaying Values:\n";
 
    // Accessing the values from the temperature array
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
   /*