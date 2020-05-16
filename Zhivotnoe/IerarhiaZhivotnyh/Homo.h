#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef _Homo_h_
#define _Homo_h_
#include "Primat.h"

class THomo : public TPrimat
{
private:
 int population = 0;
public:
 THomo();
 void SetPopulation(int g);
 int GetPopulation();
};
#endif