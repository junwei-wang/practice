all: myls mycp1 mycp2 print_pid myexec error uid signal
myls: myls.c apue.c
	gcc -o $@ $^
mycp1: mycp1.c apue.c
	gcc -o $@ $^
mycp2: mycp2.c apue.c
	gcc -o $@ $^
print_pid: print_pid.c apue.c
	gcc -o $@ $^
myexec: myexec.c apue.c
	gcc -o $@ $^
error: error.c apue.c
	gcc -o $@ $^
uid: uid.c apue.c
	gcc -o $@ $^
signal: signal.c apue.c
	gcc -o $@ $^
clean:
	- rm myls 
	- rm mycp1
	- rm mycp2
	- rm print_pid 
	- rm myexec 
	- rm error 
	- rm uid
	- rm signal 
