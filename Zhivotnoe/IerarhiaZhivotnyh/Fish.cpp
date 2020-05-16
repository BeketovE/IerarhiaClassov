#include "Fish.h"

TFish::TFish() : TAnimal()
{
 place = "Unspecified";
 location = "Water";
 genetick = "Unspecified";
}

void TFish::SetPlace(string p)
{
 place = p;
}

void TFish::SetOceans(bool o)
{
 oceans = o;
}

bool TFish::GetOceans()
{
 return oceans;
}

void TFish::SetLakes(bool lk)
{
 lakes = lk;
}

bool TFish::GetLakes()
{
 return lakes;
}

void TFish::SetRivers(bool r)
{
 rivers = r;
}

bool TFish::GetRivers()
{
 return rivers;
}
string TFish::GetPlace()
{
 return place;
}