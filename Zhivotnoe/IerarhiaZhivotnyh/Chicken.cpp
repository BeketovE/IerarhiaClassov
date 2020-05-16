#include "Chicken.h"
#include <stdlib.h>

TChicken::TChicken()
{
 Eggs = 0;
 color = "Unspecified";
 genetick = "Woman";
}

string TChicken::Voice()
{
 return "Kur-Kur-Kur";
}

void TChicken::SetEggs(int e)
{
 Eggs = e;
}

int TChicken::GetEggs()
{
 return Eggs;
}