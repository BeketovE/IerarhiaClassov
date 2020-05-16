#include "Eagle.h"
#include <stdlib.h>

TEagle::TEagle()
{
 size = "Large";
 progeny = "Unspecified";
 color = "White and brown";
 location = "Mountains";
 genetick = "Man";
}

string TEagle::Voice()
{
 return "Eagle-Eagle";
}

void TEagle::SetSpeed(string h)
{
 speed = h;
}

string TEagle::GetSpeed()
{
 return speed;
}