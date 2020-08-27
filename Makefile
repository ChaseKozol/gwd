all: gwd

gwd: gwd.o
	gcc -o gwd gwd.o

gwd.o: gwd.c
	gcc -c gwd.c

clean:
	rm -f *.o gwd *~ \#*
