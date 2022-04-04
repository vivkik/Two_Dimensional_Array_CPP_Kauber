//William Kauber
//Teacher: Dr. Tyson McMillan
//April 8th 2022
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;
/*
//Data Table
//City X, Day X: Temp
Osaka, Day 1: 64
Osaka, Day 2: 68
Osaka, Day 3: 69
Osaka, Day 4: 69
Osaka, Day 5: 72
Osaka, Day 6: 74
Osaka, Day 7: 76
Fairbanks, Day 1: 21
Fairbanks, Day 2: 29
Fairbanks, Day 3: 42
Fairbanks, Day 4: 39
Fairbanks, Day 5: 24
Fairbanks, Day 6: 23
Fairbanks, Day 7: 27
*/
 
int main()
{
      const int CITY = 2;
      const int WEEK = 7;
 
    int temperature[CITY][WEEK];
    int osaka[7] = {64, 68, 69, 69, 72, 74, 76};
    int fairbanks[7] = {21, 29, 42, 39, 24, 23, 27};

  
 cout << "Now printing seven day forecast for Fairbank and Osaka:\n"<<endl;
  
    for (int c = 0; c < CITY; c++) // for loop inputting both city arrays into two dimensional array based on city value.
      {
        for(int w = 0; w < WEEK; w++)
        {
          if(c == 0)
            {
              temperature[c][w] = fairbanks[w];
            }
            else if (c == 1)
              temperature[c][w] = osaka[w];     
            } 
      }
    for (int c = 0; c < CITY; c++) // for loop for printing multi-dimensional arrays to screen.  
      {
        for ( int w = 0; w < WEEK; w ++)
          {
            if (c == 0)
            {
              cout << "Fairbanks, Day " << w +1 << ": "<<temperature[c][w]<< endl;
            }
            else if (c == 1)
            {
              cout << "Osaka, Day " << w + 1 << ": " <<temperature[c][w] << endl;
            }
          }
      }
   

    cout << "\nNow its your turn!\n";
    cout << "Enter the temperature for each day of the week"<<endl;
    cout << "for your first city and then your second city. \n";
 
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
 
    cout << "\n\nDisplaying Temperatures:\n";
 
    // Accessing the values from the temperature array
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
   
  return 0;
  }