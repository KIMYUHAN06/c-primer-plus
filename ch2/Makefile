default: build

build:
	gcc -o first100 first.c -D KYH
	gcc -o first1 first.c
	gcc -o fathm fathm_ft.c
	gcc -o two two_func.c
	gcc -o nogood nogood.c

run: build
	./first100
	./first1
	./fathm
	./two
	./nogood

clean:
	rm first100
	rm first1
	rm fathm
	rm two
	rm nogood
