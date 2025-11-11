**// calculator 1**



\#include <stdio.h>

int main() {

    int num1, num2;

    char operation;

    printf("Enter num1: ");

    scanf("%d", \&num1);

    printf("Enter num2: ");

    scanf("%d", \&num2);

    printf("Enter operation (+, -, \*, /): ");

    scanf(" %c", \&operation);

if (operation == '+'){

    printf("%d",num1+num2);

} else if (operation == '-') {

    printf("%d",num1-num2);

} else if (operation == '\*') {

    printf("%d",num1\*num2);

} else if (operation == '/') {

    printf("%d",num1/num2);

}

    return 0;

}



**//calculator 2**



\#include <stdio.h>

int main() {

    int num1, num2;

    char operation;

    printf("Enter num1: ");

    scanf("%d", \&num1);

    printf("Enter num2: ");

    scanf("%d", \&num2);

    printf("Enter operation (+, -, \*, /): ");

    scanf(" %c", \&operation);

if (operation == '+'){

    printf("%d",num1+num2);

} else if (operation == '-') {

    printf("%d",num1-num2);

} else if (operation == '\*') {

    printf("%d",num1\*num2);

} else if (operation == '/') {

    if (num2 == 0){

        printf("Zero division error");

    } else {

        printf("%d",num1/num2);

    }

}

    return 0;

}



**//Guess the number**



\#include <stdio.h>

\#include <stdlib.h>

\#include <time.h>



int main() {

   srand(time(0));

   int random = rand() % 100 + 1;

 

   int guess;

   int attempt = 0;

 

   do {

       if (attempt == 0) {

           printf("Enter your guess: ");

       } else {

           printf("Guess again: ");

       }



       scanf("%d", \&guess);

       attempt++;



       if (guess > random) {

           printf("oops! it's too greater \\n");

       } else if (guess < random) {

           printf("oops! it's too smaller \\n");

       } else {

           printf("Hurray!!, It's correct \\n");

       }

   } while (guess != random);

   return 0;

}





**Write a C program to print “Hello, World!” on the screen.**

\#include <stdio.h>



int main() {

    printf("Hello, world!");

    return 0;

}



**Write a C program to print your name, age, and location on separate lines.**

\#include <stdio.h>



int main() {

    printf("Navya\\n22\\ncbe");

    return 0;

}



**Write a C program to print a pattern like this:**

**Hello**

**World**

**in**

**C**

\#include <stdio.h>



int main() {

    printf("Hello\\nworld\\nin\\nc");

    return 0;

}



**Write a C program to declare variables of type int, float, and char, assign values, and print them.**

\#include <stdio.h>



int main() {

    int age; float salary; char letter;

    age = 22;

    salary = 1200.50;

    letter = 'N';

    printf("%d\\n", age);

    printf("%f\\n", salary);

    printf("%c\\n", letter);

    return 0;

}



**Write a program that takes an integer and a float as input and prints their sum.**

\#include <stdio.h>



int main() {

    int num1;

    printf("enter num1: ");

    scanf("%d", \&num1);



    float num2;

    printf("enter num2: ");

    scanf("%f", \&num2);



    float sum;

    sum = (float) num1+num2;

    printf("%f", sum);



    return 0;

}



**Write a program to store a character from user input and print its ASCII value.**

\#include <stdio.h>



int main() {

    char letter;

    printf("enter a letter: ");

    scanf("%c", \&letter);

    printf("%d", letter);

    return 0;

}



**Write a program to swap two integer values using a temporary variable.**

\#include <stdio.h>



int main() {

    int a = 1;

    int b = 2;

    int c;

    printf("%d\\n", a);

    printf("%d\\n", b);

    c = b;

    b = a;

    a = c;

    printf("%d\\n", a);

    printf("%d\\n", b);

 

    return 0;

}



**Write a program to input two numbers and perform + − × ÷ % operations on them.**



\#include <stdio.h>



int main() {

    int a,b,sum,sub,mul;

    float div;



    printf("enter a: ");

    scanf("%d", \&a);



    printf("enter b: ");

    scanf("%d", \&b);



    sum = a + b;

    sub = a - b;

    mul = a \* b;

    div = (float) a / b;



    printf("%d\\n", sum);

    printf("%d\\n", sub);

    printf("%d\\n", mul);

    printf("%.2f\\n", div);



    return 0;

}





**Write a program to check if one number is greater than, less than, or equal to another.**

\#include <stdio.h>



int main() {

    int a, b;



    printf("enter a: ");

    scanf("%d", \&a);

 

    printf("enter b: ");

    scanf("%d", \&b);



    if (a > b) {

    printf("%d is greater than %d", a, b);

    } else if (a == b) {

    printf("equal");

    } else if (b > a) {

    printf("%d is smaller than %d", a, b);

    }

    return 0;

}



**Write a program that uses logical operators (\&\&, ||, !) to test if a number lies between 10 and 50.**

\#include <stdio.h>



int main() {

    int a;

 

    printf("enter a num");

    scanf("%d", \&a);



    if (a>10 \&\& a<50) {

    printf("lies within 10 and 50");

    } else if (a<10 || a>50) {

    printf("does not lies between 10 and 50");

    }

    return 0;

}



**Write a program to calculate the area and perimeter of a rectangle.**

\#include <stdio.h>



int main() {

    float width, height, area, perimeter;

 

    printf("enter width: ");

    scanf("%f", \&width);



    printf("enter height: ");

    scanf("%f", \&height);

 

    area  = width\*height;

    perimeter  = 2\*(width + height);



    printf("Area of rectangle : %.2f\\n", area);

    printf("Perimeter of rectangle : %.2f\\n", perimeter);

    return 0;

}



**Write a program to check if a number is positive, negative, or zero.**

\#include <stdio.h>



int main() {

    int num;

 

    printf("enter a num:");

    scanf("%d", \&num);

 

    if (num==0) {

    printf("zero");

    } else if (num>0) {

    printf("positive");

    } else if (num<0) {

    printf("negative");

    } else {

    printf("invalid number");

    }

 

    return 0;

}



**Write a program to find the largest of three numbers.**

\#include <stdio.h>



int main() {

    int a, b, c;

 

    printf("enter a:");

    scanf("%d", \&a);

 

    printf("enter b:");

    scanf("%d", \&b);

 

    printf("enter c:");

    scanf("%d", \&c);



    if (a>b \&\& a>c) {

    printf("a is greater");

    } else if (b>a \&\& b>c) {

    printf("b is greater");

    } else if (c>a \&\& c>b) {

    printf("c is greater");

    } else if (a == b == c) {

    printf("equal");

    }

 

    return 0;

}



**Write a program to check whether a given year is a leap year.**

\#include <stdio.h>



int main() {

    int year;

 

    printf("enter year:");

    scanf("%d", \&year);



    if ((year%4 == 0) || ((year%100 == 0) \&\& (year%400 == 0))) {

    printf("leap year");

    } else {

    printf ("non-leap year");

    }

 

    return 0;

}



**Write a simple calculator using switch**

\#include <stdio.h>



int main() {

    int num1, num2, sum, sub, mul;

    float div;

    char operation;



    printf("enter num1: ");

    scanf("%d", \&num1);



    printf("enter num2: ");

    scanf("%d", \&num2);



    printf("enter operation: + - \* / ");

    scanf(" %c", \&operation);



    switch (operation){

    case '+':

    sum = num1+num2;

    printf("%d", sum);

    break;



    case '-':

    sub = num1-num2;

    printf("%d", sub);

    break;



    case '\*':

    mul = num1\*num2;

    printf("%d", mul);

    break;



    case '/':

    div = (float) num1/num2;

    printf("%.2f", div);

    break;



    default :

    printf("invalid operation");

    }

 

    return 0;

}





**Write a program to check if a character is a vowel or consonant.**

\#include <stdio.h>



int main() {

    char l;

 

    printf("enter letter(lower\_case): ");

    scanf("%c", \&l);



    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') {

    printf("vowel");

    } else {

    printf ("consonant");

    }

 

    return 0;

}





\#include <stdio.h>



int main() {

    int num;

 

    printf("enter a num:");

    scanf("%d", \&num);

 

    if (num%2==0) {

    printf("even");

    } else if (num%2!=0) {

    printf("odd");

    } else if (num == 0) {

    printf("zero");

    } else {

    printf("invalid number");

    }

 

    return 0;

}



**Write a program to print numbers from 1 to 10 using a for loop.**

\#include <stdio.h>



int main() {

    int i;



    for (i=1; i<=10; i++) {

        printf("%d\\n", i);

}

    return 0;

}



**Write a program to print the multiplication table of a number entered by the user.**

\#include <stdio.h>



int main() {

    int num;



    printf("Enter a number: ");

    scanf("%d", \&num);



    for (int i = 1; i <= 10; i++) {

        printf("%d x %d = %d\\n", num, i, num \* i);

    }



    return 0;

}





**Write a program to find the sum of the first 10 natural numbers using a while loop.**

\#include <stdio.h>



int main() {

    int i = 1;

    int sum = 0;

    while(i <=10) {

        sum = sum+i;

        i++;

    }

    printf("%d\\n", sum);

    return 0;

}





**Write a program to calculate the factorial of a number using a for loop.**

\#include <stdio.h>



int main() {

    int i = 0;

    int fact = 1;



    for (i=5; i>0; i--) {

        fact = fact\*i;

    }

    printf("%d", fact);

    return 0;

}





**Write a program that asks the user for numbers until they enter 0, then prints the total sum using a do-while loop.**



\#include <stdio.h>



int main() {

 

    int num, sum;

    sum = 0;



    do {

        printf("enter a num:");

        scanf("%d", \&num);

        sum = sum + num;

    }

    while (num!=0);

    printf("%d", sum);

    return 0;

}



**Find Maximum Element in an Array**



\#include<stdio.h>



int main() {



&nbsp;    int arr\[10] = {5, 3, 8, 2, 10, 7, 6, 1, 9, 4};

&nbsp;    int max;



&nbsp;    max = arr\[0];



&nbsp;    for (int i=0; i<10; i++) {

&nbsp;        if (max < arr\[i]) {

&nbsp;            max = arr\[i];

&nbsp;        }

&nbsp;    }



&nbsp;    printf("%d", max);

&nbsp;    return 0;

}





**Add 2 3x3 matrix**



\#include<stdio.h>



int main() {



&nbsp;    int arr1\[3]\[3] = {{1,2,3},{4,5,6},{7,8,9}};

&nbsp;    int arr2\[3]\[3] = {{4,5,6},{1,2,3},{7,8,9}};

&nbsp;    int res\_arr\[3]\[3];

&nbsp;   

&nbsp;    int res;

&nbsp;   

&nbsp;    for (int i=0; i<3; i++) {

&nbsp;        for (int j=0; j<3; j++) {

&nbsp;            res\_arr\[i]\[j]=arr1\[i]\[j]+arr2\[i]\[j];

&nbsp;        }

&nbsp;    }



&nbsp;    for (int i=0; i<3; i++) {

&nbsp;        for (int j=0; j<3; j++) {

&nbsp;            printf("%d ",res\_arr\[i]\[j]);

&nbsp;        }

&nbsp;        printf("\\n");

&nbsp;    }



&nbsp;    return 0;

}



**Reverse a string**



\#include<stdio.h>

\#include<string.h>



int main() {

&nbsp;    char str\[10] = "Hello";

&nbsp;    int len = strlen(str);

&nbsp;    char rev\[10];



&nbsp;    printf("%s\\n", str);

&nbsp;    printf("%d\\n", len);

&nbsp;    

&nbsp;    for (int i=0; i<len; i++) {

&nbsp;        rev\[i] = str\[len - i - 1];

&nbsp;    }



&nbsp;    rev\[len] = '\\0';



&nbsp;    printf("%s", rev);

&nbsp;    return 0;

}



**check palindrome**



\#include<stdio.h>

\#include<string.h>



int main() {

&nbsp;    char str\[10] = "hello";

&nbsp;    int len = strlen(str);

&nbsp;    char rev\[10];

&nbsp;    

&nbsp;    for (int i=0; i<len; i++) {

&nbsp;        rev\[i] = str\[len - i - 1];

&nbsp;    }

&nbsp;    rev\[len] = '\\0';



&nbsp;    printf("%s %s\\n", str, rev);



&nbsp;    if (strcmp(str,rev)==0) {

&nbsp;        printf("It is palindrome");

&nbsp;    } else {

&nbsp;        printf("Not palindrome");

&nbsp;    }



&nbsp;    return 0;

}

