/*
header file
   |-> #ifndef
   |-> #define
   |-> #ifdef 
   |-> function declaration
   |-> #endif


ifndef - if not defined? then define
define - to define
  syntax: #define name value
	  #define PI   3.14
*/


#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#define PI 3.14
#define SQUARE(x) ((x)*(x))

int add(int x, int y);
int sub(int x, int y);

#endif