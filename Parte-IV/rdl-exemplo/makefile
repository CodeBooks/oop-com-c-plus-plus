all: obj lib prog

obj:
	gcc -fPIC -c MinhaLib.c

lib:
	gcc -shared -Wl,-soname,libMinhaLib.so.1 -o libMinhaLib.so.1.0 
#	gcc -shared -Wl,-soname,libMinhaLib.so.1 -o libMinhaLib.so.1.0 -dlopen 
#	gcc -shared -Wl,-soname,libMinhaLib.so.1 -o libMinhaLib.so.1.0 -dlopen -rpath /usr/local/lib

	mv libMinhaLib.so.1.0 /usr/local/lib

	/sbin/ldconfig

prog:
	gcc -o TestaProc TestaProc.c -ldl
