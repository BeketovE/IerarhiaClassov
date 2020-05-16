#include "EdibleFish.h"

TEdibleFish::TEdibleFish() : TFish()
{
 caviar = 0;
 place = "Lakes or Rivers";
}

void TEdibleFish::SetCaviar(int c)
{
 caviar = c;
}

int TEdibleFish::GetCaviar()
{
 return caviar;
}

void TEdibleFish::SetWeight(int w)
{
 weight = w;
}

int TEdibleFish::GetWeight()
{
 return weight;
}