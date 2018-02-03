all: maker.c
	gcc -o maker maker.c
	./maker

display: all
	display image.ppm &

clean:
	rm maker
	rm image.ppm
	rm *~
	rm *.o
