#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Bird_h_
#define _Bird_h_
#include "Animal.h"

class TBird : public TAnimal
{
protected:
 string progeny;
 bool color;
public:
 TBird();
 void SetProgeny(string p);
  bool GetColor();
  void SetColor(bool c);
  string GetProgeny();
};
#endif