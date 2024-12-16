## https://www.gnu.org/software/automake/manual/html_node/Creating-amhello.html
## https://www.gnu.org/software/automake/manual/html_node/amhello_0027s-Makefile_002eam-Setup-Explained.html
## https://www.idryman.org/blog/2016/03/10/autoconf-tutorial-1/ 
## https://opensource.com/article/19/7/introduction-gnu-autotools 

## Must init the autoconf setup
## The first parameter is project name
## second is version number
## third is bug report address
AC_INIT([hello], [1.0])

## Store the auxiliary build tools (e.g., install-sh, config.sub, config.guess)
## in this dir (build-aux)
AC_CONFIG_AUX_DIR([build-aux])

## Init automake, and specify this program use relaxed structures.
## i.e. this program doesn't follow the gnu coding standards, and doesn't have
## ChangeLog, COPYING, AUTHORS, INSTALL, README etc. files.
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

## Check for C compiler
AC_PROG_CC
## We can add more checks in this section

## Tell autoconf to generate configuration header files during the ./configure 
## script. Header files typically contain #define statements that make specific
## functions available to your code based on the results of further
## configuration checks. These are made available to your code by including 
## #include <config.h> in the source code
AC_CONFIG_HEADERS([config.h])

## Tells automake which Makefiles to generate 
## See https://www.gnu.org/software/automake/manual/html_node/Requirements.html
AC_CONFIG_FILES([Makefile src/Makefile])

## Set the default prefix (otherwise it will be /usr/local which we can't generally write to)
AC_PREFIX_DEFAULT([[`pwd`]])

## Generate the output
AC_OUTPUT


