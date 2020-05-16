#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Primat_h_
#define _Primat_h_
#include "Mlekopitaushee.h"

class TPrimat : public TMlekopitaushee
{
protected:
 string prevalence;
 bool Amerika;
 bool Afrika;
 bool Evrasia;
 bool Australia;
public:
 TPrimat();
 void SetPrevalence(string z);
 void SetAmerika(bool v);
 bool GetAmerika();
 void SetAfrika(bool q);
 bool GetAfrika();
 void SetEvrasia(bool x);
 bool GetEvrasia();
 void SetAustralia(bool j);
 bool GetAustralia();
 string GetPrevalence();
};
#endif