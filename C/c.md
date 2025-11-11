**array size** -  %zu

&nbsp;	      sizeof()



int myNumbers\[] = {10, 25, 50, 75, 100};

int length = sizeof(myNumbers) / sizeof(myNumbers\[0]);



printf("%d", length);  // Prints 5 (20/4)



-----------------



**array loop**



int myNumbers\[] = {25, 50, 75, 100};



int length = sizeof(myNumbers) / sizeof(myNumbers\[0]);  // 16/4 = 4

int i;



for (i = 0; i < length; i++) {

&nbsp; printf("%d\\n", myNumbers\[i]);

} // 25 50 75 100



----------------



**multi-dimentional arrays**



**1D -** int num\[] = {10,20,30}

**2D -** int num\[2]\[3] = {{1,2,3},{4,5,6}}

**3D -** int num\[2]\[3]\[4] = 

{

&nbsp;{

&nbsp; {1,2,3,4},{5,6,7,8},{9,10,11,12}

&nbsp;},

&nbsp;{

&nbsp; {13,14,15,16},{17,18,19,20},{21,22,23,24}

&nbsp;}

}



**----------------**



**access elements**



int matrix\[2]\[3] = { {1, 4, 2}, {3, 6, 8} };



printf("%d", matrix\[0]\[2]); // 2



----------------



**change elements**



int matrix\[2]\[3] = { {1, 4, 2}, {3, 6, 8} };

matrix\[0]\[0] = 9;



printf("%d", matrix\[0]\[0]); // 9



----------------



**loop 2D**

-> nested loop

-> separate loop for each row



int matrix\[2]\[3] = { {1, 4, 2}, {3, 6, 8} };



int i, j;

for (i = 0; i < 2; i++) {

&nbsp; for (j = 0; j < 3; j++) {

&nbsp;   printf("%d\\n", matrix\[i]\[j]);

&nbsp; }

}



----------------



**strings**

-> %s - sequence of char



**eg:**



char word\[] = 'Hello world";

printf("%s", word); // Hello world



char word\[] = 'Hello world";

printf("%c", word\[0]); // H



char word\[] = 'Hello world";

printf("%c", word); // error



---------------



**create strings**



**method 1:**

**->** \\0 should be added

-> \\0 - indicates the end of the string



**eg:**

char greetings\[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\\0'};

printf("%s\\n", greetings);

&nbsp;

**method 2:**

**->** \\0 is automatically added by c 

**->** " " indicates the end



**eg:**

char greetings2\[] = "Hello World!";

printf("%s\\n", greetings2);



---------------

**eg:**



\#include <stdio.h>



int main() {

&nbsp; char message\[] = "Good to see you,";

&nbsp; char fname\[] = "John";



&nbsp; printf("%s %s!", message, fname);

&nbsp;

&nbsp; return 0;

}

---------------



**string loops**



char carName\[] = "Volvo";

int length = sizeof(carName) / sizeof(carName\[0]);

int i;



for (i = 0; i < length; ++i) {

&nbsp; printf("%c\\n", carName\[i]);

} // v o l v o



---------------



**strings - special characters**



**single quotes -** \\' - '



**double quotes -** \\" - "



**backslash -** \\\\ - \\



**newline -** \\n



**tab -** \\t



**null -** \\0



**eg:**

  char txt\[] = "We are the so-called \\"Vikings\\" from the north.";

&nbsp; printf("%s", txt);



----------------



**string functions**



**->** to use functions include - **#include <string.h>**



----------------



**string length**



**->** strlen()



**eg:**



char alphabet\[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

printf("%zu", strlen(alphabet)); //26



-----------------



**strlen vs sizeof**



-> **sizeof** - to get the size of a string/array 

&nbsp;         - includes \\0 when counting



**-> strlen -** to get the len of a string



**eg:**

char alphabet\[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

printf("Length is: %zu\\n", **strlen**(alphabet)); //26

printf("Size is: %zu\\n", **sizeof**(alphabet)); //27 (with \\0)



**eg:**

char alphabet\[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

printf("%zu\\n", **strlen**(alphabet));   // 26

printf("%zu\\n", **sizeof**(alphabet));   // 50



----------------



**string concat**



**-> strcat()**

**->** space added between 2 strings



**eg:**

  char str1\[20] = "Hello ";

&nbsp; char str2\[] = "World!";

&nbsp;

&nbsp; // Concatenate str2 to str1 (the result is stored in str1)

&nbsp; strcat(str1, str2);

&nbsp; 

&nbsp; // Print str1

&nbsp; printf("%s", str1) //Hello world!



----------------



**strings copy**



**-> strcpy()**

**->** copy 2nd str to 1st



char str1\[20] = "Hello World!";

char str2\[20];



// Copy str1 to str2

strcpy(str2, str1);



// Print str2

printf("%s", str2); // Hello World!



----------------



**string compare**



**-> strcmp()**

-> compares 2 

-> if same minus and gives 0

-> if some are same minus that letter and gives remaining count of 1st str



char str1\[] = "Hello";

char str2\[] = "Hello";

char str3\[] = "Hi";



// Compare str1 and str2, and print the result

printf("%d\\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)



// Compare str1 and str3, and print the result

printf("%d\\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)



---------------



**memory address**



**->** when variables ctreated, memory address is assigned to it

-> memory address is the location of where the variable is stored on the computer

-> When we assign a value to the variable, it is stored in this memory address

-> To access it, use the reference operator (\&)

-> The memory address is in hexadecimal form



-> %p - poinyter values

-> \&myAge - pointer



**eg:**

int myAge = 43;

printf("%p", \&myAge); // Outputs 0x7ffe5367e044



----------------



**user input**



**-> scanf()** function takes two arguments: 

&nbsp;	the format specifier of the variable %d

&nbsp;	the reference operator \&myNum



**eg: scanf("**%d**",** \&myNum**);**



**----**



**Multiple Inputs**



**eg:** scanf("%d %c", \&myNum, \&myChar);



----



**string as input**



**->** if specifies size , no need to use \&



**eg:**

char firstName\[30];

printf("Enter your first name: \\n");

scanf("%s", firstName);

printf("Hello %s", firstName);



----



**fgets()**



-> scanf() considers space as terminating character so if we type full name only 1st name is printed

-> Use the scanf() function to get a single word as input, and use fgets() for multiple words.



**solution:**

use: fgets()



**eg:**



char fullName\[30];

printf("Type your full name: \\n");

fgets(fullName, sizeof(fullName), stdin);



printf("Hello %s", fullName);



**----------------**



-> we can get the memory address of a variable with the reference operator \&



**eg:**



int myAge = 43; 

printf("%d", myAge);  //(43)

printf("%p", \&myAge); //(0x7ffe5367e044)



---------------



**functions**

-> block of code

-> runs when called



**pre-defined functions**

**->** main()



-----------------



**create function**



void func\_name() {

}



**void** -> means that the function don't have return value 



---------------------



**call function**



**--> func\_name();**



**eg:**

void myFunction() {

&nbsp; printf("I just got executed!");

}



int main() {

&nbsp; myFunction(); // call the function

&nbsp; return 0;

} //I just got executed!



--------------------



**parameters and arguments**



returnType functionName(parameter1, parameter2, parameter3) {

&nbsp; // code to be executed

}



**eg:**

void myFunction(char name\[]) {

&nbsp; printf("Hello %s\\n", name);

}



int main() {

&nbsp; myFunction("Liam");

&nbsp; myFunction("Jenny");

&nbsp; myFunction("Anja");

&nbsp; return 0;

}



---------------------



**multiple parameters**



**eg:**



void myFunction(char name\[], int age) {

&nbsp; printf("Hello %s. You are %d years old.\\n", name, age);

}



int main() {

&nbsp; myFunction("Liam", 3);

&nbsp; myFunction("Jenny", 14);

&nbsp; myFunction("Anja", 30);

&nbsp; return 0;

}



-------------------



**pass array as func parameters**



void myFunction(int myNumbers\[5]) {

&nbsp; for (int i = 0; i < 5; i++) {

&nbsp;   printf("%d\\n", myNumbers\[i]);

&nbsp; }

}



int main() {

&nbsp; int myNumbers\[5] = {10, 20, 30, 40, 50};

&nbsp; myFunction(myNumbers);

&nbsp; return 0;

}



------------------



**return values**

-> using void means that it does not return a value

-> if want to return use datatypes



**eg:**



int myFunction(int x, int y) {

&nbsp; return x + y;

}



int main() {

&nbsp; printf("Result is: %d", myFunction(5, 3));

&nbsp; return 0;

} //8



------------------



**store result in variable**



int myFunction(int x, int y) {

&nbsp; return x + y;

}



int main() {

&nbsp; int result = myFunction(5, 3);

&nbsp; printf("Result is = %d", result);

&nbsp; return 0;

} //8



-----------------



**scope**



**local variable:**

-> accessible only inside func

-> if accessed outside causes error



**eg:**



void myFunction() {

&nbsp; int x = 5;

&nbsp; printf("%d", x);

}



int main() {

&nbsp; myFunction(); // 5

&nbsp; printf("%d", x); // error

&nbsp; return 0;

}



--------



**global variable**

-> created outside funtion

-> globally accessible



**eg:**

int x = 5;



void myFunction() {

&nbsp; printf("%d", x); //5

}



int main() {

&nbsp; myFunction(); //5

&nbsp; printf("%d", x); //5

&nbsp; return 0;

}



--------



**naming variable**



-> if use same same in gobal scope and in local?

-> function takes the local variable value

-> outside function takes global value



**eg:**



int x = 5;



void myFunction() {

&nbsp; int x = 22;

&nbsp; printf("%d\\n", x); // 22

}



int main() {

&nbsp; myFunction();

&nbsp; printf("%d\\n", x); // 5

&nbsp; return 0;

}





-> if using local scope and it is incremented in a function

-> if the function is called it returns the incremented value only



-------------------------



**function declaration/definition**



**declarion -** function's name

&nbsp;	    return type

&nbsp;           parameter



**definition -** body of function 



**eg:**



void myFunction(); //declaration



int main() {

&nbsp; myFunction(); //call

&nbsp; return 0;

}



void myFunction() {

&nbsp; printf("I just got executed!"); //definition

}



--------------------------



**function call function**



void myFunction();

void myOtherFunction();



int main() {

&nbsp; myFunction(); // func 1

&nbsp; return 0;

}



void myFunction() {

&nbsp; printf("Some text in myFunction\\n");

&nbsp; myOtherFunction(); // func 2 inside func 1

}



void myOtherFunction() {

&nbsp; printf("Hey! Some text in myOtherFunction\\n");

}



-------------------------



**pass by value**



**->** a copy of value is only passed

**->** changes are not reflected in original

**scenario eg:** giving photo copy of house, changes made in photo are not reflected in house



eg:



void func(int num) {

&nbsp;   num = num + 10; 

}



int main() {

&nbsp;   int x = 5;

&nbsp;   func(x); // 5 = 5+10 = 15 - changed inside function only

&nbsp;   printf("%d", x); // 5 not 15

&nbsp;   return 0;   

}



**pass by reference**

**->** the address of the variable is passes

**->** the changes are reflected in original

**scenario eg:** giving home key, changes are mase in real time



eg:

void func(int \*num) {

&nbsp;   \*num = \*num + 10; // as pointer variable

}



int main() {

&nbsp;   int x = 5;

&nbsp;   func(\&x); // address is called

&nbsp;   printf("%d", x); //15

&nbsp;   return 0;   

}



-------------------------



**pass by value vs pass by pointer** 



| **Feature                      | Pass by Value | Pass by Pointer**     |

| ---------------------------- | ------------- | ------------------- |

| What is passed               | Copy of value | Address of variable |

| Affects original variable?   | ❌ No         |✅ Yes              |

| Syntax                       | func(x)       | func(\&x)            |

| Function parameter           | int num       | int \*num            |

| Access value inside function | num           | \*num                |



-------------------------



**math functions**



**-->** #include <math.h>



sqrt() - printf("%f", sqrt(16));

ceil() - printf("%f", ceil(1.4));

floor() - printf("%f", floor(1.4));

pow() - printf("%f", pow(4, 3));



------------------------



**stack**



**->** LIFO

-> stack is a special region of computer memory used for:

&nbsp;	> Function calls

&nbsp;	> Local variables

&nbsp;	> Function parameters

&nbsp;	> Return addresses



**working**



-> The main() function is placed on the stack first.

-> When main() calls another function — a new frame is pushed onto the stack.

-> Each frame contains:

&nbsp; - Function parameters

&nbsp; - Local variables

&nbsp; - Return address (where to go back after function finishes)

-> When a function finishes — its frame is popped off the stack.



**example**



\#include <stdio.h>



void funcA() {

&nbsp;   int a = 10;

&nbsp;   printf("In funcA: %d\\n", a);

}



void funcB() {

&nbsp;   int b = 20;

&nbsp;   printf("In funcB: %d\\n", b);

&nbsp;   funcA(); // Call funcA

}



int main() {

&nbsp;   int x = 5;

&nbsp;   printf("In main: %d\\n", x);

&nbsp;   funcB(); // Call funcB

&nbsp;   return 0;

}



&nbsp;   **STACK**

|                                                       |

| func A()                                              | // after a is completed it is popped out

| funcB() //calls A, so func B is pushed into the stack | // next func B

| main() //calls B, so func B is pushed into the stack  | // finally main()

|\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_|



**---------------------------**



**Heap**



**->** heap is a large area of memory your program can use when it doesn’t know how much space it needs ahead of time.

**->** heap is a region of memory used for dynamic memory allocation

-> meaning you can create variables at runtime (while the program is running), instead of at compile time.



**manage heap memory**



**->** malloc() - allocate memory

**-> c**alloc() - allocate and clear memory

**->** realloc() - resize allocated memory

**->** free() - release memory



**example**

\#include <stdio.h>

\#include <stdlib.h>



int main() {

&nbsp;   int \*p;                           // p is on the **stack**

&nbsp;   p = (int \*)malloc(sizeof(int));   // memory allocated in **heap**

&nbsp;   \*p = 42;                          // store 42 in that memory

&nbsp;   printf("%d\\n", \*p);               // prints 42

&nbsp;   free(p);                          // releases heap memory

&nbsp;   return 0;

}



**^**

**|**



Stack:

**+--------+**

**|  p →   |  ---> points to heap memory address**

**+--------+**



**Heap:**

**+--------+**

**|  42    |  <-- allocated by malloc**

**+--------+**



----------------------------



**stack vs heap**



**+----------------------+**

**|  Stack (Top Floors)  |  -> Temporary things like local variables**

**+----------------------+**

**|  Heap (Middle Floors)|  -> You create and destroy manually**

**+----------------------+**





**->** stack ends when function ends

-> heap ends only when free() it



-> stack is automatic by system

-> heap is manula by programmer



--------------------------



**pointers**



-> pointer is a variable that stores the memory address of another variable as its value

-> A pointer variable points to a data type of the same type, and is created with the \* operator.



int\* ptr - pointer with name "ptr" - \* tells that it no a pointer variable, not a normal variable

\& - outputs the address - used to get address - use with %p

ptr(in print statement) - outputs the address - use with %p

\*ptr(in print statement) - value of the pointer name - use with %p





**eg:**



int myAge = 43;

int\* ptr = \&myAge; // ptr - pointer variable name that stores the address of mynum



printf("%d\\n", myAge); //43

printf("%p\\n", \&myAge); // address

printf("%p\\n", ptr); //address

printf("%d\\n", \*ptr); //43



**eg:**



int myNumbers\[4] = {25, 50, 75, 100};



printf("%p\\n", myNumbers); // address

printf("%p\\n", \&myNumbers\[0]);//address



**eg:**



**1st element**

int myNumbers\[4] = {25, 50, 75, 100};

printf("%d", \*myNumbers); // 1st value 25



**2nd element**

int myNumbers\[4] = {25, 50, 75, 100};

printf("%d", \*(myNumbers+1)); // 0+1= 1 - 50



**eg:**



int myNumbers\[4] = {25, 50, 75, 100};

int \*ptr = myNumbers;

int i;



for (i = 0; i < 4; i++) {

  printf("%d\\n", \*(ptr + i));

}





---



**pointers and arrays**



int myNumbers\[4] = {25, 50, 75, 100};

int i;



for (i = 0; i < 4; i++) {

  printf("%p\\n", \&myNumbers\[i]);

} // outputs the address of elements



-----------------------



**pointer arithmetic**



p + 1   // Move to the next memory location of that data type

p - 1   // Move to the previous memory location of that data type

p ++    // same as p = p + 1

p --    // same as p = p - 1



-----------------------



**static memory**

-> memory is allocated at **compile time**

-> size is fixed before running

-> can't change it while running



**eg:**

int a = 5;

int arr\[10];



-------



**dynamic memory**

-> Allocate memory when needed

**->** Free memory when done using it

**->** allow user to decide size at **run time**

**->** Read data from a file (size unknown)

-> Store user-entered values until they stop



**why dynamic memory?**

-> if arr\[100]

-> user enters only 5?

&nbsp;    - the remaining memory is waste

-> if user enters 500+?

&nbsp;    - it is insufficent



**use**

<stdlib.h>



**memory functions**



Function    |	Description

----------------------------------------------------------------

malloc()    |	Allocates a block of memory

calloc()    |	Allocates and initializes(clear) a block of memory

realloc()   |	Changes (resizes) previously allocated memory

free()	    |   Frees (deallocates) memory after use



----------------------------------



**structs**

**->** structures - way to grp releated variables into oneplace

-> each variable - "member"



**create struct**

**->** struct 



**eg:**



struct MyStructure {   // Structure declaration

&nbsp; int myNum;           // Member (int variable)

&nbsp; char myLetter;       // Member (char variable)

};                     // End the structure



**access struct**

**->** use (.)

**->** use struct keyword inside main()

-> structure name

-> structure variable name



**eg:**



struct myStructure {

&nbsp; int myNum;

&nbsp; char myLetter;

};



int main() {

&nbsp; **struct myStructure s1;** //s1 - struct variable



&nbsp; s1.myNum = 13;

&nbsp; s1.myLetter = 'B';



&nbsp; printf("My number: %d\\n", s1.myNum);

&nbsp; printf("My letter: %c\\n", s1.myLetter);



&nbsp; return 0;

} 



//

My number: 13

My letter: B



-------



**string in struct**



struct myStructure {

&nbsp; char myString\[30]; // String

};



int main() {

&nbsp; struct myStructure s1;



&nbsp; // Assign

&nbsp; strcpy(s1.myString, "Some text"); // without strcpy - error



&nbsp; printf("My string: %s", s1.myString);



&nbsp; return 0;

} // My string: Some text



-------



**Shorthand**



struct myStructure {

&nbsp; int myNum;

&nbsp; char myLetter;

&nbsp; char myString\[30];

};



int main() {

&nbsp; struct myStructure s1 = {13, 'B', "Some text"};// order if values should match the order of variable created



&nbsp; printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);



&nbsp; return 0;

}



------



**copy structs**



int main() {

&nbsp; struct myStructure s1 = {13, 'B', "Some text"};

&nbsp; struct myStructure s2;

&nbsp; 

&nbsp; s2 = s1;



&nbsp; printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);



&nbsp; return 0;

} **// 13 B Some text**



------



**modify values**



int main() {

&nbsp; struct myStructure s1 = {13, 'B', "Some text"};



&nbsp; // Modify values

&nbsp; s1.myNum = 30; // 13 to 30

&nbsp; s1.myLetter = 'C'; // B to C

&nbsp; strcpy(s1.myString, "Something else"); //Some text to Something else 



&nbsp; printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

// **30 C Someting else**



**-------**



**nested struct**

-> a struct contain another struct as it's member

-> used - want to group related data together in layers



**eg:**



\#include <stdio.h>



struct Owner {            //struct 1

&nbsp;   char firstname\[10];

&nbsp;   char lastname\[10];

};



struct Car {              //struct 2

&nbsp;   char name\[10];

&nbsp;   int year;

&nbsp;   struct Owner owner;   //inside struct 2, struct one as member

};



int main() {

&nbsp;   struct Owner person = {"John", "Doe"};  // struct 1

&nbsp;   struct Car car = {"BMW", 1992, person}; // struct 2

&nbsp;                                     |

&nbsp;                                  struct 1



&nbsp;   printf("Owner: %s %s\\n", person.firstname, person.lastname);

&nbsp;   printf("Car: %s %d\\n", car.name, car.year);

&nbsp;   printf("Car owner: %s", car.owner.firstname);

&nbsp;   return 0;

}





------------------------



**struct + pointer**



-> use -> instead of (.) to access and modify







\#include <stdio.h>



struct Owner {

&nbsp;   char firstname\[10];

&nbsp;   char lastname\[10];

};



int main() {

&nbsp;   struct Owner person = {"John", "Doe"};

&nbsp;   

&nbsp;   struct Owner \*ptr = \&person;  // pointer

&nbsp;  

&nbsp;   ptr->lastname = jey;



&nbsp;   printf("%s %s\\n", ptr->firstname, ptr->lastname);



&nbsp;   return 0;

}



------------------------



**union**

**->** all the data types use the same memory allocation

-> can access each at a time



-----------------------



**typedef**

**->** change the name of datatype for easy understanding



**eg:** change the float datatype name to temperature



\#include<stdio.h>



typedef float Temperature;



int main() {

&nbsp; Temperature today = 25.5;



&nbsp; printf("Today: %.1f C\\n", today);

&nbsp; return 0;

}



-------------------------

&nbsp; 



