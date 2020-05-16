#include "HomeBird.h"

THomeBird::THomeBird() : TBird()
{
 function = "Give eggs and meat";
 progeny = 23;
 color = "Unspecified";
 location = "Country";
 genetick = "Unspecified";
}

void THomeBird::SetFunction(string f)
{
 function = f;
}

string THomeBird::GetFunction()
{
 return function;
}

void THomeBird::SetProgeny(string p)
{
 progeny = p;
}

string THomeBird::GetProgeny()
{
 return progeny;
}