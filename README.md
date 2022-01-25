# THE-ENIGMA
## INTRODUCTION
[ENIGMA](https://en.wikipedia.org/wiki/Enigma_machine) was a Cipher Machine Used by Nazis at time of WW2 \
This project encrypts and decrypts the data entered by the user.\
The key is based on [ASCII](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html) values of certain sets of variables(DATE,TIME,INPUT).\
We have added various features in our code like the voice, animation, sound,etc.
## PREREQUISITE
To run our program, the user must download the [espeak](http://espeak.sourceforge.net/) synthesizer used in voice feature. 
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
### STEP 1 - GET TIME
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
### STEP 2 - CHOOSE
In this step u have to choose between 2 options
```c
system("color 7C");
int num;
printf("CHOOSE AN OPTION \n");
printf("BY ENTERING A NUMBER\n");
printf("\n");
printf("[1] ENIGMA\n");
printf("[2] BOMBE\n");
printf("\n");
rintf("-> ");
scanf("%d",&num);
```
***ENIGMA*** for **ENCRYPTION** \
***[BOMBE](https://en.wikipedia.org/wiki/Bombe)*** for **DECRYPTION** 
###  A - ENIGMA 
### STEP A.3 - INPUT
If u entered 1 you have selected encryption \
So now u have input your data which has to be encrypted and the following code does that
```c
// TAKING INPUT FROM USER---
gets(a);
for(i=0;i<100;i++){
ch1=getch();
if(ch1==13)
break;
a[i]=ch1;
printf("%c",ch1);}
a[i]='\0';
```
### STEP A.4 - KEY
Making **KEY**  is a 2 step process followed by output
#### 1 LETTERS INTERCHANGE
First we need to determine the length of string is odd or even to determine the end point of loop \




```c

// STRING LENGTH EVEN OR ODD

if(strlen(a)%2==0){
b1=strlen(a);
} else{
b1=strlen(a)-1;
}
```
Here alternate elements of string are swapped
```c

// LETTER INTERCHANGE


for(i=0;i<b1;i+=2){
   temp1=a[i];
   a[i]=a[i+1];
   a[i+1]=temp1;
}
```
FOR EG.
```c
heya -> ehay
```

#### 2 SETTING KEY
***KEY*** is half of length of input subtracted by 1st digit of sum which is obtained in STEP 1.
```c
int key;
key=strlen(a)/2-sum%10; 
      
```
#### OUTPUT
In output ASCII values of string a[] are added with key and key is incremented with every character in string
```c
printf("\n\nENCODED MESSAGE IS : ");
for(i=0;i<strlen(a);i++){
   system("color A");
   key=key+1;
   printf("%c",a[i]+key); 
}
printf("\n\nENCRYPTION SUCESSFUL!\n\n");
```
FOR EG.
```c 
INPUT : AA
A's ASCII VALUE = 65
SO
65 65
IS CONVERTED TO 
65+KEY 66+KEY
```
this step was taken to remove possiblity of repeatation. 
### B - BOMBE
### STEP B.3 - INPUT
