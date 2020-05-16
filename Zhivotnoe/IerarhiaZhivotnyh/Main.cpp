#include "Animal.h"

#include "Mlekopitaushee.h"
#include "Bird.h"
#include "Fish.h"

#include "Primat.h"
#include "HomeBird.h"
#include "WildBird.h"
#include "EdibleFish.h"
#include "NotEdibleFish.h"

#include "Homo.h"
#include "Chicken.h"
#include "Eagle.h"
#include "Crucian.h"
#include "Fugue.h"

#include <iostream>
using namespace std;

int main()
{
 THomo Homo1;
 cout << "Mammalian Man:" << endl;
 cout << "Prevalece:" << " " << Homo1.GetPrevalence() << endl;
 cout << "lives in:" << " " << Homo1.GetLocation() << endl;
 cout << "Progeny:" << " " << Homo1.GetProgeny() << endl;
 cout << "Genetick:" << " " << Homo1.GetGenetick() << endl;

 cout << "" << endl;
 cout << "" << endl;

 TChicken Chicken1;
 Chicken1.SetColor("White");
 Chicken1.SetGenetick("Woman");
 Chicken1.SetEggs(21);
 Chicken1.SetProgeny("5 Chicken");
 cout << "Bird Chicken:" << endl;
 cout << "Color:" << " " << Chicken1.GetColor() << endl;
 cout << "lives in:" << " " << Chicken1.GetLocation() << endl;
 cout << "Voice:" << " " << Chicken1.Voice() << endl;
 cout << "Progeny:" << " " << Chicken1.GetProgeny() << endl;
 cout << "Genetick:" << " " << Chicken1.GetGenetick() << endl;
 cout << "Give" << " " << Chicken1.GetEggs() << " " << "eggs in week" << endl;

 cout << "" << endl;
 cout << "" << endl;

 TEagle Eagle1;
 Eagle1.SetSpeed("Very high");
 cout << "Bird Eagle:" << endl;
 cout << "Color:" << " " << Eagle1.GetColor() << endl;
 cout << "lives in:" << " " << Eagle1.GetLocation() << endl;
 cout << "Voice:" << " " << Eagle1.Voice() << endl;
 cout << "Progeny:" << " " << Eagle1.GetProgeny() << endl;
 cout << "Genetick:" << " " << Eagle1.GetGenetick() << endl;
 cout << "Speed:" << " " << Eagle1.GetSpeed() << endl;
 cout << "Size:" << " " << Eagle1.GetSize() << endl;

 cout << "" << endl;
 cout << "" << endl;

 TCrucian Crucian1;
 cout << "Fish Crucian:" << endl;
 cout << "lives in:" << " " << Crucian1.GetLocation() << endl;
 cout << "lives in:" << " " << Crucian1.GetPlace() << endl;
 cout << "Voice:" << " " << Crucian1.Voice() << endl;
 cout << "Weight:" << " " << Crucian1.GetWeight() << endl;
 cout << "Genetick:" << " " << Crucian1.GetGenetick() << endl;
 cout << "Give" << " " << Crucian1.GetCaviar() << " " << "caviar in week" << endl;

 cout << "" << endl;
 cout << "" << endl;

 TFugue Fugue1;
 cout << "Fish Fugue:" << endl;
 cout << "lives in:" << " " << Fugue1.GetLocation() << endl;
 cout << "lives in:" << " " << Fugue1.GetPlace() << endl;
 cout << "Voice:" << " " << Fugue1.Voice() << endl;
 cout << "Genetick:" << " " << Fugue1.GetGenetick() << endl;
 cout << "Danger level:" << " " << Fugue1.GetToxicity() << endl;
}