#ifndef _Vanne_h
#define _Vanne_h

class Vanne // (VT12,V13,V23),(VT12 ,VT23) 
{
	private:
		bool vannes;
	public:
		Vanne();
		Vanne(bool vannes);
		Vanne(const Vanne &v);
		bool getVannes();
		~Vanne();
};
#endif
