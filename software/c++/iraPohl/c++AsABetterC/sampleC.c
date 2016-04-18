/*
 * 
 * nota bene
 *
 * 1.2
 * getting started
 * c and c++ have important differences, even if syntax is same !
 * read wikipedia article on basics of OO
 * 
 * OO = (data, operators) are bound together
 * need a nice way to build software
 * goal is to build 
 * MODULA ADA
 *  data abstraction
 *  coherant kernel
 *
 * C++
 *
 * object = data type, its operations can
 *          user defined or native
 *
 * type safety = a property of a good OO lang.
 * , does not define OO lang
 *
 * garbage collection
 *  can be built-in to an OO language
 *  or can be a user defined object
 *  LISP, CLISP, SCHEME
 */

/*
 * module 1.3
 * converting a c program to c++
 * properly compute the odds, when a die is tossed
 *
 * community practices
 *
 * c program, dice probability
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDES 6
#define R_SIDE (rand()% SIDES +1)


