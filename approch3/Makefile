



app:user.o virtual.o sos
	gcc user.o virtual.o -o app -ldl
	@echo "Application Created"
user.o:ui.c
	gcc -c ui.c -o user.o
	@echo "user.o is created"
virtual.o:viml.c
	gcc -c -DSIZE=30 -rdynamic viml.c -o virtual.o
	@echo "virtual.o is created"
sos: aachand.so aaxhand.so aachand.so
	@echo "sos are created"

aachand.so: aac.c
	gcc  -c -fPIC aac.c 
	gcc -shared -nostartfiles -o aachand.so aac.o
	@echo "aachand.so is created"

aaxhand.so: aax.c
	gcc -c -fPIC aax.c
	gcc -shared -nostartfiles -o -aaxhand.so aa.o
	@echo "aaxhand.so is created"

aahand.so: aa.c
	gcc -c -fPIC aa.c
	gcc -shared -nostartfiles -o -aahand.so aa.o
	@echo "aaxhand.so is created"
