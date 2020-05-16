#include "WildBird.h"

TWildBird::TWildBird() : TBird()
{
 size = "Unspecified";
 progeny = "Unspecified";
 color = "Unspecified";
 location = "Not country";
 genetick = "Unspecified";
}

void TWildBird::SetSize(string s)
{
 size = s;
}

void TWildBird::SetLarge(bool b)
{
 large = b;
}

bool TWildBird::GetLarge()
{
 return large;
}

void TWildBird::SetMedium(bool m)
{
 medium = m;
}

bool TWildBird::GetMedium()
{
 return medium;
}

void TWildBird::SetSmall(bool k)
{
 small = k;
}

bool TWildBird::GetSmall()
{
 return small;
}

string TWildBird::GetSize()
{
 return size;
}