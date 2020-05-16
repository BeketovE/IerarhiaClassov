#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Fish_h_
#define _Fish_h_
#include "Animal.h"

class TFish : public TAnimal
{
protected:
 string place;
  bool oceans;
  bool lakes;
  bool rivers;
public:
 TFish();
 void SetPlace(string p);
 void SetOceans(bool o);
 bool GetOceans();
 bool GetLakes();
 void SetLakes(bool lk);
 bool GetRivers();
 void SetRivers(bool r);
 string GetPlace();
};
#endif