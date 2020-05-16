#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Mlekopitaushee_h_
#define _Mlekopitaushee_h_
#include "Animal.h"

class TMlekopitaushee : public TAnimal
{
protected:
 string progeny;
public:
 TMlekopitaushee();
 void SetProgeny(string p);
 string GetProgeny();
};
#endif