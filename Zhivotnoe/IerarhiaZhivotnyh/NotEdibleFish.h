#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _NotEdibleFish_h_
#define _NotEdibleFish_h_
#include "Fish.h"

class TNotEdibleFish : public TFish
{
protected:
 string toxicity;
public:
 TNotEdibleFish();
 void SetToxicity(string t);
 string GetToxicity();
};
#endif