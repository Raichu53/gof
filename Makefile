
all: main.out

main.out: main.o fn.o
	gcc -o main $^ 

%.o:%.c
	gcc -c $^

clean:
	rm -f *.o main
