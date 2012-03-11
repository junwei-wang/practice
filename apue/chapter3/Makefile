all: prog3-1 prog3-2 mycat prog3-4 prog3-5
prog3-1: prog3-1.c apue.c
	gcc -o $@ $^
prog3-2: prog3-2.c apue.c
	gcc -o $@ $^
mycat: mycat.c apue.c
	gcc -o $@ $^
prog3-4: prog3-4.c apue.c
	gcc -o $@ $^
prog3-5: prog3-5.c apue.c
	gcc -o $@ $^
clean:
	- rm prog3-1
	- rm prog3-2
	- rm mycat
	- rm prog3-4
	- rm prog3-5
