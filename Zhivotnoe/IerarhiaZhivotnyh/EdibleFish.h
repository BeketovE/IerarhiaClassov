#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _EdibleFish_h_
#define _EdibleFish_h_
#include "Fish.h"

class TEdibleFish : public TFish
{
protected:
 int caviar = 0;
 int weight = 0;
public:
 TEdibleFish();
 void SetCaviar(int c);
 int GetCaviar();
 void SetWeight(int w);
 int GetWeight();
};
#endif