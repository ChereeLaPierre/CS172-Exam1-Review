//
//  Dice.cpp
//  Exam review
//
//  Created by Cheree LaPierre on /104/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#include "Dice.hpp"
#include <ctime>

Dice::Dice(int Sides)
{
    if (Sides <= 0)
    {
        Sides = 6;
    }
    
    sideRolled = Sides;
    timesRolled = 0;
}

int Dice::Roll()
{
    timesRolled++;
    srand(time(NULL));
    return die = rand() % 6 + 1;
}

int Dice::getRolls()
{
    return timesRolled;
}

int Dice::GetSides()
{
    return sideRolled;
}
