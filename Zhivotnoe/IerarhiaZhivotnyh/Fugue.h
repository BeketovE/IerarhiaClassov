#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Fugue_h_
#define _Fugue_h_
#include "NotEdibleFish.h"

class TFugue : public TNotEdibleFish
{
public:
 TFugue();
 string Voice();
};
#endif