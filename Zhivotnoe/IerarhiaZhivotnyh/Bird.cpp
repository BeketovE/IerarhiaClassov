#include "Bird.h"

TBird::TBird() : TAnimal()
{
 progeny = "Unspecified";
 color = "Unspecified";
 location = "Air";
 genetick = "Unspecified";
}

void TBird::SetProgeny(string p)
{
 progeny = p;
}

void TBird::SetColor(bool c)
{
 color = c;
}

bool TBird::GetColor()
{
 return color;
}

string TBird::GetProgeny()
{
 return progeny;
}