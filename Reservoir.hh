#ifndef _Reservoir_h
#define _Reservoir_h

class Reservoir // tank1 2 3 alimente Moteur
{
	private:
    int carburant;
    Vanne V;
    Pompe pp;
		Pompe ps;
	public:
    Vanne();
    ~Vanne();
};
#endif
