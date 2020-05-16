#include "NotEdibleFish.h"

TNotEdibleFish::TNotEdibleFish() : TFish()
{
 place = "Only oceans";
}

void TNotEdibleFish::SetToxicity(string t)
{
 toxicity = t;
}

string TNotEdibleFish::GetToxicity()
{
 return toxicity;
}