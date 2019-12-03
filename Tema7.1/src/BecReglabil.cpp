#include "BecReglabil.h"
#include <iostream>
using namespace std;

BecReglabil::BecReglabil()
{
    //ctor
}
void BecReglabil::Aprinde()
{
aprins=true;
putereCurenta=putereMaxima;
}

void BecReglabil::Stinge()
{
aprins=false;
putereCurenta=0;
}

void BecReglabil::MaresteLumina(short maresteLumina)
{
putereCurenta+=maresteLumina;
if (putereCurenta > putereMaxima)
    putereCurenta=putereMaxima;
aprins = true;
}

void BecReglabil::ReduceLumina(short reduceLumina)
{
    if (putereCurenta<=reduceLumina)
       {
           putereCurenta=0;
           aprins=false;
           }
    else putereCurenta-=reduceLumina;
}

void BecReglabil::StareBec()
{
    if (aprins ==true)
        cout<<"Becul e aprins"<<endl;
    else
        cout<<"Becul e stins"<<endl;
}

BecReglabil::~BecReglabil()
{
    //dtor
}
