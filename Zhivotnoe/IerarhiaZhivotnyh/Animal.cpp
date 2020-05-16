#include "Animal.h"

TAnimal::TAnimal()
{
 location = "Unspecified";
}

string TAnimal::GetLocation()
{
 return location;
}
void TAnimal::SetGenetick(string g)
{
 genetick = g;
}
string TAnimal::GetGenetick()
{
 return genetick;
}