CPP=g++
CFLAGS=-c
all: clean Vol

test:
	./Vol

Vol: Reservoir.o Pompe.o  Vanne.o Moteur.o Main.o
	$(CPP) Main.o Reservoir.o Pompe.o Vanne.o Moteur.o -o Vol

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


editeur:
	geany Makefile *c *h &

indent:
	indent -linux *c *h

clean:
	rm -f *.o
