#ifndef CANDELABRU_H
#define CANDELABRU_H
#include "BecReglabil.h"


class Candelabru
{
    public:
        void ConfigureazaCandelabru(unsigned short nrBecuri);
        void AprindeLumina();
        void StingeLumina();
        void MaresteLumina (unsigned short marLumina);
        void ReduceLumina (unsigned short redLumina);
        unsigned short PutereMaximaCandelabru ();
        bool StareCandelabru();
        Candelabru();
        virtual ~Candelabru();

    protected:

    private:
      unsigned short nrBecuri;
      BecReglabil*listaBecuri;

};

#endif // CANDELABRU_H
