#adpadfs : Makefile
#Written By: Bradley Sadowsky

all: main.c curse.c mid_finger.c a_wrapper.c chk_egg.c rd_file.c
	gcc -o adpadfs main.c curse.c mid_finger.c a_wrapper.c chk_egg.c rd_file.c

debug: main.c curse.c mid_finger.c a_wrapper.c chk_egg.c rd_file.c
	gcc -g -o adpadfs main.c curse.c mid_finger.c a_wrapper.c chk_egg.c rd_file.c

install: adpadfs adpadfs.6.gz
	install adpadfs /bin
	install -g 0 -o 0 -m -0644 adpadfs.6.gz /usr/share/man/man6
