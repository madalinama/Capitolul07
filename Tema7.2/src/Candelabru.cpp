#include "Candelabru.h"
#include "BecReglabil.h"
#include <iostream>
using namespace std;

Candelabru::Candelabru()
{
    //ctor
}

void Candelabru::ConfigureazaCandelabru(unsigned short n)
{
    nrBecuri = n;
    listaBecuri=new BecReglabil[n];
    for (int i=0;i<nrBecuri;i++)
        {
          listaBecuri[i].SetPutereCurenta(0);
          listaBecuri[i].SetPutereMaxima(100);
        }
    //  delete[] listaBecuri;

}
void Candelabru::AprindeLumina()
{
    for (int i=0;i<nrBecuri;i++)
        listaBecuri[i].Aprinde();
}

void Candelabru::StingeLumina()
{
    for (int i=0;i<nrBecuri;i++)
        listaBecuri[i].Stinge();
}

void Candelabru::MaresteLumina(unsigned short maresteLumina)
{
    for (int i=0;i<nrBecuri;i++)
        listaBecuri[i].MaresteLumina(maresteLumina);
}

void Candelabru::ReduceLumina(unsigned short reduceLumina)
{
    for (int i=0;i<nrBecuri;i++)
        listaBecuri[i].ReduceLumina(reduceLumina);
}

unsigned short Candelabru::PutereMaximaCandelabru()
{
    unsigned short sum =0;
    for (int i=0;i<nrBecuri;i++)
        sum+=listaBecuri[i].GetPutereMaxima();
    return (sum);

}
bool Candelabru::StareCandelabru()
{
    for (int i=0;i<nrBecuri;i++)
        if (listaBecuri[i].GetPutereCurenta()>0)
            return true;
    return false;
    }

Candelabru::~Candelabru()
{
    //dtor

 delete[] listaBecuri;
 listaBecuri=NULL;

}
