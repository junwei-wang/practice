all: prog2-2 path_alloc open_max
prog2-2: prog2-2.c apue.c
	gcc -o $@ $^
prog2-2.c: prog2-1.awk
	awk -f prog2-1.awk > prog2-2.c
path_alloc: path_alloc.c apue.c
	gcc -o $@ $^
open_max: open_max.c apue.c
	gcc -o $@ $^
clean:
	- rm prog2-2 prog2-2.c
	- rm path_alloc
	- rm open_max
