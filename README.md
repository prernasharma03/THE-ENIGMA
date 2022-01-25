# THE-ENIGMA
## INTRODUCTION
This project encrypts and decrypts the data entered by the user.\
The key is based on ASCII values of certain sets of variables(DATE,TIME,INPUT).\
We have added various features in our code like the voice, animation, sound,etc.
## PREREQUISITE
To run our program, the user must download the espeak synthesizer(http://espeak.sourceforge.net/) used in voice feature. \
### HEADERS USED
```c
#include <stdio.h> 
#include <time.h>
#include <string.h> 
#include <ctype.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <conio.h> 
```
## HOW IT WORKS !
### STEP1 - GET TIME
get the current date and time's(HOUR's) ASCII value with help of this code
    
   ```c
   char buf[LEN];
   int sum=0,i;
   time_t t;
   struct tm *timeStruct;
   t= time(NULL);
   timeStruct = localtime(&t);
   strftime(buf, LEN, "%x-%I", timeStruct);
   printf("\n");
   printf("DATE & TIME\n");
   printf("-> %s\n",buf);
   printf("\n");
   for(i=0;i<strlen(buf);i=i+3){
   sum+=(int)buf[i]+(int)buf[i+1];}
   ```
FOR EG.
```c
  DATE - 25/01/22
  TIME - 1800 hrs
```
 sum value will be 402
```c
     D    D  \ M    M  \ Y    Y
     2    5    0    1    2    2 
S1 = 50 + 53 + 48 + 49 + 50 + 50 = 300

TIME - 18:00 -> 06:00

             0    6
        S2 = 48 + 54 = 102

sum = S1 + S2 = 402
```
