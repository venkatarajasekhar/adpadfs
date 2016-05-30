#adpadfs : Makefile
#Written By: Bradley Sadowsky

all: main.c curse.c
	gcc -o adpadfs main.c curse.c

install: adpadfs
	install adpadfs /bin
