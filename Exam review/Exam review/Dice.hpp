//
//  Dice.hpp
//  Exam review
//
//  Created by Cheree LaPierre on /104/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>
#include <cstdlib>

class Dice
{
private:
    int sideRolled;
    int timesRolled;
    int die;
    
public:
    Dice(int Sides); // The constructor sets the number of sides of the die.
                     // The constructor also calls srand() to initialize
                     // the random number generator.
    int Roll();      // Returns the results of a roll
                     // i.e. a random value between 1 and the number of sides of the die
   
    int getRolls();  // Returns the number of times this dice was rolled since it was created
    int GetSides();  // Returns the number of sides for this dice object

};

#endif /* Dice_hpp */
