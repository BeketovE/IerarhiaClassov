#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Eagle_h_
#define _Eagle_h_
#include "WildBird.h"

class TEagle : public TWildBird
{
private:
 string speed;
public:
 TEagle();
 string Voice();
 void SetSpeed(string h);
 string GetSpeed();
};
#endif
