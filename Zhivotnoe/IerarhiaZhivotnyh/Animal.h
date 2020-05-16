#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Animal_h_
#define _Animal_h_

class  TAnimal
{
protected:
 string location;
 string genetick;
public:
 TAnimal();
 string GetLocation();
 void SetGenetick(string g);
 string GetGenetick();
};
#endif