# Learning C

Topics covered
- Printing to Console
- - Format Specifiers
- - Rounding Floats

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
