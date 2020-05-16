#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Chicken_h_
#define _Chicken_h_
#include "HomeBird.h"

class TChicken : public THomeBird
{
private:
 int Eggs = 0;
public:
 TChicken();
 string Voice();
 void SetEggs(int e);
 int GetEggs();
};
#endif