CC=gcc 

PROGRAMA = neural

$(PROGRAMA):
	$(CC) -c *.c -I.
	$(CC) *.o -o $(PROGRAMA) -lm

clean:
	rm -f *.yy.c
	rm -f *.tab.c
	rm -f *.tab.h
	rm -f *.o
	rm -f *.exe
	rm -f $(PROGRAMA)