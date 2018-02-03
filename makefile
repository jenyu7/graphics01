all: maker.c
	gcc -o maker maker.c

run: all
	./maker

clean:
	rm maker
	rm image.ppm
	rm *~
	rm *.o
