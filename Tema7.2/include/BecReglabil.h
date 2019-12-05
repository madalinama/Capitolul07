#ifndef BECREGLABIL_H
#define BECREGLABIL_H


class BecReglabil
{
     private:
     unsigned short putereMaxima;
     unsigned short putereCurenta;
     bool aprins;

     public:
     void SetPutereMaxima( unsigned short putereMax){putereMaxima=putereMax;};
     void SetPutereCurenta(unsigned short putereCurentaNew){putereCurenta=putereCurentaNew;};
     unsigned short GetPutereMaxima(){return putereMaxima;};
     unsigned short GetPutereCurenta(){return putereCurenta;};
     void Aprinde ();
     void Stinge ();
     void MaresteLumina (short maresteLumina);
     void ReduceLumina (short reduceLumina);
     void StareBec();

        BecReglabil();

        virtual ~BecReglabil();
    protected:
    private:
};

#endif // BECREGLABIL_H
