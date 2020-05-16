#include "Homo.h"
#include <stdlib.h>

THomo::THomo()
{
 prevalence = "All Earth";
 progeny = "2-3 children in family";
 location = "Grawe";
 genetick = "Unspecified";
}

void THomo::SetPopulation(int g)
{
 population = g;
}

int THomo::GetPopulation()
{
 return population;
}