all: a.o code.o
	gcc a.o code.o -fno-pie -no-pie -o sex

a.o: a.asm
	yasm -f elf64 a.asm -o a.o

code.o: code.c
	gcc -c code.c -o code.o

clean:
	rm *.o && rm sex
