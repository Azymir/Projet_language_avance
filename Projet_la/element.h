#ifndef ELEMENT_H
#define ELEMENT_H

class Element						// M1 M2 alimenter
{
    private:
    int etat;
    //~ char* nom;

    public:
    //~ virtual void Panne();
    Element();						// Constructeur avec la pompe par defaut
    Element(int etat);						// constructeur avec la pompe passées en paramètres
    virtual int getEtat();
    //~ virtual char* getNom();
    virtual void setEtat(int etat);
    //~ virtual void setNom(char* nom);
    virtual void description();
    virtual ~Element();
                            // panne des pompes;

};

#endif // ELEMENT_H
