//
//  main.cpp
//  Exam review
//
//  Created by Cheree LaPierre on /104/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#include <iostream>
#include "Dice.hpp" // Include your Dice class here
using namespace std;
int main()
{
    Dice d(6);                 // Declare a dice with 6 sides
    cout << d.Roll() << endl;  // Outputs a value from 1 to 6
    if (d.GetSides() != 6)
    {
        cout << "Error in GetSides().  It should return 6\n";
        return 0;
    }
    // Roll the dice 100 times and make sure it works every time.
    bool passed = true;
    for (int i = 0; i < 100; i++)
    {
        int x = d.Roll();
        if ( x < 1 || x > 6 )
        { // Roll returned an incorrect side
            cout << "Error in Roll() method! Roll returned " << x << endl;
            passed = false;
            break;
        }
    }
    if (passed)
    {
        cout << "Passed roll test" << endl;     // Should output this message
        
        cout << d.getRolls() << endl;   // Should output 101
    }
}
