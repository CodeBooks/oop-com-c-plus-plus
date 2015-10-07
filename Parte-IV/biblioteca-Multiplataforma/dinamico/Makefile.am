bin_PROGRAMS =  Polimorfismo_dinamico

# Manual libtool (funciona)
Polimorfismo_dinamico_SOURCES =   List-17-1-Polimorfismo.cpp
Polimorfismo_dinamico_LDADD= "-dlopen" libTPonto.la
Polimorfismo_dinamico_DEPENDENCIES=libTPonto.la
# g++ -g -O2 -o Polimorfismo_dinamico List-17-1-Polimorfismo.o .libs/Polimorfismo_dinamicoS.o  ./.libs/libTPonto.a
# 296K Mai 17 23:59 Polimorfismo_dinamico

# Exemplo demo libtool (funciona)
# Polimorfismo_dinamico_SOURCES =   List-17-1-Polimorfismo.cpp
# Polimorfismo_dinamico_LDFLAGS=  -export-dynamic -dlpreopen libTPonto.la
# Polimorfismo_dinamico_DEPENDENCIES=libTPonto.la
# g++ -g -O2 -o Polimorfismo_dinamico .libs/Polimorfismo_dinamicoS.o List-17-1-Polimorfismo.o -Wl,--export-dynamic  ./.libs/libTPonto.a
# 304811 Mai 18 00:04 Polimorfismo_dinamico

# Para criar a biblioteca dinâmica
lib_LTLIBRARIES= libTPonto.la 
libTPonto_la_SOURCES=List-11-6-TPonto.cpp  List-15-2-TCirculo.cpp  List-16-3-TElipse.cpp getObjetoTPonto.cpp
libTPonto_la_LDFLAGS=  -version-info 0:0:0
# libTPonto_la_LDFLAGS= -shared  -version-info 0:0:0

# libTPonto_la_LDFLAGS= -shared -version-info 0:0:0  -export-dynamic -dlpreopen libTPonto.la
#-export-dynamic -dlpreopen libTPonto.la

# Para instalar a biblioteca dinâmica
# inst_LIBRARIES=libTPonto.la
# instdir=/usr/local/lib
