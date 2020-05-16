#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _WildBird_h_
#define _WildBird_h_
#include "Bird.h"

class TWildBird : public TBird
{
protected:
 string size;
 bool large;
 bool medium;
 bool small;
public:
 TWildBird();
 void SetSize(string s);
 void SetLarge(bool b);
 bool GetLarge();
 void SetMedium(bool m);
 bool GetMedium();
 void SetSmall(bool k);
 bool GetSmall();
 string GetSize();
};
#endif