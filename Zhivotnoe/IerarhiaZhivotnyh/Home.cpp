#include "Home.h"

THome::THome() : TBird()
{
 function = "unspecified";
 eggs = 12;
 progeny = "unspecified";
 color = 3;
 location = "Air";
 genetick = "unspecified";
}

void THome::SetFunction(string f)
{
 function = f;
}

string THome::GetFunction()
{
 return function;
}

void THome::SetProgeny(string p)
{
 progeny = p;
}

string THome::GetProgeny()
{
 return progeny;
}