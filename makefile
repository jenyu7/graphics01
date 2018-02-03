all: maker.c
	gcc -o maker maker.c

run: all
	./maker

display: run
	display image.ppm &

clean:
	rm maker
	rm image.ppm
	rm *~
	rm *.o
