#include "Mlekopitaushee.h"

TMlekopitaushee::TMlekopitaushee() : TAnimal()
{
 progeny = "Unspecified";
 location = "Grawe";
 genetick = "Unspecified";
}

void TMlekopitaushee::SetProgeny(string p)
{
 progeny = p;
}

string TMlekopitaushee::GetProgeny()
{
 return progeny;
}