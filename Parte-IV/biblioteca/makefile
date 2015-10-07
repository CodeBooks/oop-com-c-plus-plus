#============================== Definições ==================================
ARQUIVOS=   	List-15-2-TCirculo.cpp  List-16-3-TElipse.cpp List-11-6-TPonto.cpp 
OBJETOS=  	List-15-2-TCirculo.o    List-16-3-TElipse.o   List-11-6-TPonto.o
OBJETOSD=  	List-15-2-TCirculo.lo    List-16-3-TElipse.lo   List-11-6-TPonto.lo
PROG = 		List-17-1-Polimorfismo.cpp
DIRINCLUDE = 	/usr/include/g++
DIRLIB = 	/usr/local/lib
COMPILADOR = 	g++
NOMELIB =	TPonto

#================================== ALVOS ====================================
#---------------Compilação padrão
all : obj exe 

obj : $(ARQUIVOS) 
	$(COMPILADOR) -c $(ARQUIVOS)  -I$(DIRINCLUDE) 

exe : $(PROG) $(OBJETOS)
	$(COMPILADOR) -static $(PROG) $(OBJETOS) -I$(DIRINCLUDE)  -o List-17-1-Polimorfismo

#---------------Criando biblioteca estática 
alls : libs exes

libs :  obj 
	ar -cru libTPonto.a $(OBJETOS)	
	cp libTPonto.a /usr/local/lib
	ranlib /usr/local/lib/libTPonto.a	

# Criando executável usando a biblioteca estática
exes : libs
#	$(COMPILADOR) $(PROG) -static -L. -l$(NOMELIB) -o List-17-1-Polimorfismo-static
	$(COMPILADOR) $(PROG) -L. -l$(NOMELIB) -o List-17-1-Polimorfismo-static

#---------------Limpeza.
clean : 
	rm -fr *.o *.obj  *.so* a.out List-17-1-Polimorfismo-* *~ libTPonto.* *.lo List-17-1-Polimorfismo List-17-1-Polimorfismo.cpp.*
	rm -fr /usr/local/lib/libTPonto* /usr/lib/libTPonto*

#==============================USANDO LIBTOOL==========================
#Para ficar portável, todas as etapas devem ser realizadas com o libtool
#obj_libtool : $(ARQUIVOS) 

#---------------Criando biblioteca estatica usando o libtool
libs_libtool: $(ARQUIVOS) 
	libtool --mode=compile $(COMPILADOR) -c List-11-6-TPonto.cpp   
	libtool --mode=compile $(COMPILADOR) -c List-16-3-TElipse.cpp  
	libtool --mode=compile $(COMPILADOR) -c List-15-2-TCirculo.cpp 
	libtool --mode=link    $(COMPILADOR) -static -o libTPonto.a   List-15-2-TCirculo.lo    List-16-3-TElipse.lo   List-11-6-TPonto.lo
	libtool --mode=install install -c  libTPonto.a /usr/local/lib/libTPonto.a

# Criando executável usando libtool com biblioteca estatica
exes_libtool:    libs_libtool List-17-1-Polimorfismo.cpp
	libtool --mode=link $(COMPILADOR) -static List-17-1-Polimorfismo.cpp -L$(DIRLIB) -l$(NOMELIB) -o List-17-1-Polimorfismo-static-libtool

#---------------Criando biblioteca dinâmica usando o libtool
# O libtool parece não estar executando corretamente o ar. Faltam parâmetros
libd_libtool: $(ARQUIVOS) 
	libtool --mode=compile $(COMPILADOR) -c List-11-6-TPonto.cpp 
	libtool --mode=compile $(COMPILADOR) -c List-16-3-TElipse.cpp
	libtool --mode=compile $(COMPILADOR) -c List-15-2-TCirculo.cpp
	libtool --mode=link $(COMPILADOR) -shared -o libTPonto.la  $(OBJETOSD)  -rpath /usr/local/lib
	libtool --mode=install install -c  libTPonto.la /usr/local/lib/libTPonto.la

# Criando executável usando libtool com biblioteca dinâmica (demora um pouco para abrir na primeira execução)
exed_libtool: $(PROG)  libd_libtool		
	libtool --mode=link $(COMPILADOR)  $(PROG) -L$(DIRLIB) -l$(NOMELIB) -o List-17-1-Polimorfismo-dinamico-libtool -export-dynamic -dlpreopen libTPonto.la

#---------------Criando documentação com doxygem
init_doc: 
	doxygen -g doxygem.config

doc : $(ARQUIVOS)
	doxygen doxygem.config


