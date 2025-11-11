#include <stdio.h>
#include "math.h"

int main() {

    #ifdef PI
       printf("value of PI: %.2f\n", PI);
    #endif

    printf("square root of %d is %d\n", b, SQUARE(b));

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("%d X %d = %d\n", a, b, mul(a, b));
    printf("%d/%d = %.2f\n", a, b, div(a,b));

    return 0;

}