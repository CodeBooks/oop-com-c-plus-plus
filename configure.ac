#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.57)
AC_INIT([[Programacao Orientada a objeto em C++]], 1.0, [[bueno@lenep.uenf.br]], [Livro_cpp])

AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADER([config.h])

## andre incluiu
## AM_ENABLE_MULTILIB

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
##AC_PROG_LN_S
##AC_PROG_RANLIB

# Checks for libraries.
# FIXME: Replace `main' with a function in `-ldl':
AC_CHECK_LIB([dl], [main])
# FIXME: Replace `main' with a function in `-lm':
# AC_CHECK_LIB([m], [main])
# FIXME: Replace `main' with a function in `-lpthread':
AC_CHECK_LIB([pthread], [main])

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_CONST
AC_C_INLINE
AC_TYPE_SIZE_T
AC_C_VOLATILE

# Checks for library functions.
AC_FUNC_FORK
AC_TYPE_SIGNAL
AC_CHECK_FUNCS([floor memset pow sqrt])

AC_CONFIG_FILES([Makefile
                 Parte-I/Makefile
                 Parte-II/Makefile
                 Parte-III/Makefile
                 Parte-V/Makefile
                 Parte-VI/Makefile])
                 ##Parte-IV/biblioteca/latex/Makefile
                 ##Parte-IV/biblioteca/makefile

AC_OUTPUT
