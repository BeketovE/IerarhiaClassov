#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _HomeBird_h_
#define _HomeBird_h_
#include "Bird.h"

class THomeBird : public TBird
{
private:
 string function;
public:
 THomeBird();
 void SetFunction(string f);
 string GetFunction();
 void SetProgeny(string p);
 string GetProgeny();
};
#endif