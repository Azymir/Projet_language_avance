#ifndef VANNE_H
#define VANNE_H

#include "element.h"

class Vanne: public Element // (VT12,V13,V23),(VT12 ,VT23)
{
    private:
    public:
        Vanne();
        Vanne(int etat);
        void description();
        ~Vanne();
};
#endif // VANNE_H
