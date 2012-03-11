all: filetype access umask chmod unlink utime chdir st_dev 
filetype: filetype.c apue.c
	gcc -o $@ $^
access: access.c apue.c
	gcc -o $@ $^
umask: umask.c apue.c
	gcc -o $@ $^
chmod: chmod.c apue.c
	gcc -o $@ $^
unlink: unlink.c apue.c
	gcc -o $@ $^
utime: utime.c apue.c
	gcc -o $@ $^
dir: dir.c apue.c
	gcc -o $@ $^
chdir: chdir.c apue.c
	gcc -o $@ $^
st_dev: st_dev.c apue.c
clean:
	- rm filetype
	- rm access
	- rm umask
	- rm chmod
	- rm unlink
	- rm utime
	- rm dir 
	- rm chdir 
	- rm st_dev 
