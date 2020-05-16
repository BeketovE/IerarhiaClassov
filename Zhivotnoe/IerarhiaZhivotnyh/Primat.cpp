#include "Primat.h"

TPrimat::TPrimat() : TMlekopitaushee()
{
 progeny = "Unspecified";
 location = "Grawe";
 genetick = "Unspecified";
}

void TPrimat::SetPrevalence(string z)
{
 prevalence = z;
}

void TPrimat::SetAmerika(bool v)
{
 Amerika = v;
}

bool TPrimat::GetAmerika()
{
 return Amerika;
}

void TPrimat::SetAfrika(bool q)
{
 Afrika = q;
}

bool TPrimat::GetAfrika()
{
 return Afrika;
}

void TPrimat::SetEvrasia(bool x)
{
 Evrasia = x;
}

bool TPrimat::GetEvrasia()
{
 return Evrasia;
}

void TPrimat::SetAustralia(bool j)
{
 Australia = j;
}

bool TPrimat::GetAustralia()
{
 return Australia;
}

string TPrimat::GetPrevalence()
{
 return prevalence;
}