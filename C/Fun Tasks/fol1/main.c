/*
main file 
  |-> include
  |-> header file
  |-> main func
  |-> calling the func of header file
*/

#include <stdio.h>
#include "math_utils.h"

int main() {

    int a = 10, b = 5;

    printf("%.2f\n", PI);
    printf("%d %d\n",a, SQUARE(a));
    printf("%d\n", add(a, b));
    printf("%d\n", sub(a, b));

    return 0;
}