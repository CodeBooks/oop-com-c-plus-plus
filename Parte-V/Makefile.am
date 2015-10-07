bin_PROGRAMS = 	List_49_1	\
		List_50_1	List_50_3 	\
		List_49_2	List_49_3 	List_50_4

EXTRADIST = HowTo-MOSIX.txt  makefile-ok Makefile.am *.out  *.h *.cpp

List_49_1_SOURCES= List-49-1-exemplo.cpp

List_49_2_SOURCES= List-49-2-processos-exemplo.cpp

List_49_3_SOURCES= List-49-3-exemplo-processos.cpp

##Geral
##O usuário usa CXXFLAGS
AM_CXXFLAGS = -D_REENTRANT -I/usr/local/include/cc++2 -D_GNU_SOURCE 

##g++ List-50-1-exemplo-thread.cpp -lpthread -D_REENTRANT
List_50_1_SOURCES= List-50-1-exemplo-thread.cpp 
List_50_1_LDFLAGS = -lpthread 
List_50_1_LDADD = 


##g++ List-50-3-thread-commoncpp-exemplo.cpp -I/usr/local/include/cc++2 -D_GNU_SOURCE -pthread   /usr/local/lib/libccgnu2.so -L/usr/local/lib -ldl -Wl,--rpath -Wl,/usr/local/lib
List_50_3_SOURCES=  List-50-3-thread-commoncpp-exemplo.cpp
List_50_3_LDFLAGS = -L/usr/local/lib  -Wl,--rpath -Wl,/usr/local/lib -lpthread 
List_50_3_LDADD =  -lccgnu2 -ldl

##g++  List-50-4-exemplo-thread-commoncpp.cpp  -I/usr/local/include/cc++2 -D_GNU_SOURCE -pthread   /usr/local/lib/libccgnu2.so -L/usr/local/lib -ldl -Wl,--rpath -Wl,/usr/local/lib
List_50_4_SOURCES= List-50-4-exemplo-thread-commoncpp.cpp
List_50_4_LDFLAGS = -L/usr/local/lib  -Wl,--rpath -Wl,/usr/local/lib -lpthread 
List_50_4_LDADD =  -lccgnu2 -ldl


## Linha de compilação geral
## CXXLINK = $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@

## Elementos específicos
## List_50_4$(EXEEXT): $(List_50_4_OBJECTS) $(List_50_4_DEPENDENCIES) 
##	@rm -f List_50_4$(EXEEXT)
##	$(CXXLINK) $(List_50_4_LDFLAGS) $(List_50_4_OBJECTS) $(List_50_4_LDADD) $(LIBS)
