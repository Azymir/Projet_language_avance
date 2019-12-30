#ifndef ELEMENT_H
#define ELEMENT_H


class Element
{
    private:
        int etat;

    public:
        //~ virtual void Panne();
        Element();						// Constructeur avec la pompe par defaut
        Element(int etat);						// constructeur avec la pompe passées en paramètres
        virtual int getEtat();
        virtual void setEtat(int etat);
        virtual void description();
        virtual ~Element();
                                // panne des pompes;
};

#endif // ELEMENT_H
