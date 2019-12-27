CPP=g++
CFLAGS=-c
all: clean Vol test

test:
	./Vol

Vol: Reservoir.o Pompe.o Vanne.o Element.o Moteur.o Tableau_bord.o Main.o
	$(CPP) Main.o Reservoir.o Pompe.o Vanne.o Element.o Moteur.o Tableau_bord.o -o Vol

Main.o:
	$(CPP) Main.cc $(CFLAGS)
Reservoir.o:
	$(CPP) Reservoir.cc $(CFLAGS)
Pompe.o:
	$(CPP) Pompe.cc $(CFLAGS)
Vanne.o:
	$(CPP) Vanne.cc $(CFLAGS)
Moteur.o:
	$(CPP) Moteur.cc $(CFLAGS)
Element.o:
	$(CPP) Element.cc $(CFLAGS)
Tableau_bord.o:
	$(CPP) Tableau_bord.cc $(CFLAGS)

editeur:
	geany Makefile *c *h &

indent:
	indent -linux *c *h

clean:
	rm -f *.o
