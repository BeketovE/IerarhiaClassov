#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Crucian_h_
#define _Crucian_h_
#include "EdibleFish.h"

class TCrucian : public TEdibleFish
{
public:
 TCrucian();
 string Voice();
};
#endif