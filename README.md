# Learning C

Topics covered
- Printing to Console
- - Format Specifiers
- - Rounding Floats
- Types
- - Type Conversion
- Booleans
- Control Flow
- - If-Else
- Arrays
- - Array size
- - Multi-dimensional Arrays

## Print to Console
Regular Printing
```c
printf("Hello World!\n");
```
Format Specifiers
```c
int myInt = 1;
float myFloat = 1.0;
double myDouble = 1.5;
char myChar = 'a';
char myString[] = "abc";

printf("%d, %f, %lf, %c, %s\n", myInt, myFloat, myDouble, myChar, myString);
printf("%i, %F\n", myInt, myFloat);
```
Rounding Floats
```c
printf("%.2f", 1.5625);  // 1.56
printf("%.2f", 1.5675);  // 1.57

// Banker's Rounding
printf("%.0f", 1.5);  // 2
printf("%.0f", 2.5);  // 2
```
## Types
Implicit Type Conversion
```c
int a = 1.5;  // 1
float b = 2;  // 2.0
float c = 5 / 2;  // 2.0
float d = 5 / 2 * 3; // 6.0
```
Explicit Type Conversion
```c
int a = (int) 1.5;  // 1
float b = (float) 2; // 2.0
// it is often best to place type conversion at the start
float c = (float) 5 / 2;  // 2.5
float d = 5 / 2 * (float) 3;  // 6.0
float e = 5 / (float) 2 * 3;  // 7.5
```
## Booleans
```c
#include <stdio.h>
#include <stdbool.h>

bool t = true;  // 1
bool f = false; // 0

printf("%d", t); // 1
```
## Control Flow
If-Else
```c
if (cond1) doSomething();
else if (cond2) doThisInstead();
else doAnotherThing();

if (cond1)
    doSomething();
else if (cond2)
    doThisInstead();
else
    doAnotherThing();

if (cond1) {
    doSomething();
} else if (cond2) {
    doThisInstead();
} else {
    doAnotherThing();
}

cond ? result1 : result2;
```
## Arrays
```c
int arr[] = {1, 2, 3};

printf("%d", arr[1]); // 2

int arr2[5]; // {0, 0, 0, 0, 0}

printf("%d", arr2[5]); // accesses unknown memory, can be other arrays
```
Array size
```c
int arr[] = {1, 2, 3, 4, 5};

int length = sizeof(arr) / sizeof(arr[0]): // 20 / 5
```
Multi-Dimensional Arrays
```c
int multi[2][3] = { {1, 2, 3}, {4, 5, 6} };

printf("%d", multi[1][2]); // 6

printf("%lu", sizeof(multi)); // 24
```
