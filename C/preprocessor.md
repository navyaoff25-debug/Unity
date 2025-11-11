preprocessor



-> runs before the compilation



preprocessor directives: 



-> #define

-> #include

-> #ifdef

-> #ifndef

-> #undef



----------------------



\#define



-> to define



&nbsp; syntax: #define name value

&nbsp;	  #define PI   3.14



define - constant (eg: PI)

&nbsp;      - macro (eg: SQUARE)



eg:



\#include <stdio.h>

\#define PI 3.14159          // constant

\#define SQUARE(x) ((x)\*(x)) // macro



int main() {

&nbsp;

&nbsp;   int a = 5;



&nbsp;   printf("%.2f\\n", PI); //3.14

&nbsp;   printf("%f\\n", SQUARE(a)); //25

&nbsp;   return 0;

}

----------------------



\#include



-> to include header files(system / user-defined)



&nbsp; syntax: #include < > - system header file

&nbsp;         #include " " - user-defined header file



eg:



\#include <stdio.h>

\#include "math\_utils.h"



-----------------------



\#ifdef



-> if defined

-> checks if already defined



&nbsp; syntax: #ifdef DEBUG // defined already



eg:



\#include <stdio.h>



\#define DEBUG  



int main() {

\#ifdef DEBUG

&nbsp;   printf("Debug mode is ON\\n");

\#endif



&nbsp;   return 0;

}



-----------------------



\#ifndef



-> if not defined

-> checks if not defined already



&nbsp; syntax: #ifndef header-filename

&nbsp;         #define header-filename



eg:



\#ifndef MATH\_UTILS\_H

\#define MATH\_UTILS\_H



int add(int x, int y);

int sub(int x, int y);



\#endif



-----------------------



\#endif



-> Every #ifdef or #ifndef must be closed with #endif



&nbsp;  syntax: #endif



eg:



\#ifdef DEBUG

    printf()

\#endif



-----------------------





