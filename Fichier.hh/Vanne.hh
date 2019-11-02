#ifndef _Vanne_h
#define _Vanne_h

class Vanne: public Reservoir // (VT12,V13,V23),(VT12 ,VT23) alimente par Reservoir
{
	private:
    bool vannes;  
	public:
    Vanne();
		Vanne(bool vannes);
    ~Vanne();
    freind int getVannes(); // lie a Pompe
};
#endif
