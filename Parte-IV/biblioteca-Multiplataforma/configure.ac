# Process this file with autoconf to produce a configure script.
AC_PREREQ(2.57)
AC_INIT(teste-libtool, 0.2, andre@lmpt.ufsc.br,teste_libtool )
AM_INIT_AUTOMAKE
#AC_DISABEL_STATIC ## desativa bibliotecas estáticas
AC_DISABLE_SHARED  ## desativa bibliotecas compartilhadas
AC_LIBTOOL_DLOPEN ## Ative verificação do suporte a dlopen
AC_PROG_LIBTOOL    ## Adiciona suporte aos flags --enable-shared e --disable-shared
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADER([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.
AM_ENABLE_MULTILIB
AC_PROG_LN_S
AC_PROG_RANLIB
AC_REPLACE_FUNCS   ## 

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_CONST
AC_C_INLINE
# Checks for library functions.
AC_CONFIG_FILES([Makefile
                 dinamico/Makefile
                 estatico/Makefile
                 normal/Makefile])
AC_OUTPUT
