#ifndef _Reservoir_h
#define _Reservoir_h

class Reservoir // tank1 2 3 alimente Moteur
{
	private:
    int fuel;
    //Vanne V;
		int statement;          // 1)plein, 2)vide,
    Pompe pone;
		Pompe ptwo;
	public:
    Reservoir();
		Reservoir(int statement, int fuel)
    ~Reservoir();
};
#endif
