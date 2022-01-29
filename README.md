# THE-ENIGMA
## TABLE OF CONTENT
1. [INTRODUCTION](https://github.com/prernasharma03/THE-ENIGMA#introduction)
2. [PREREQUISITE](https://github.com/prernasharma03/THE-ENIGMA#introduction)
3. [SAMPLE OUTPUT](https://github.com/prernasharma03/THE-ENIGMA/blob/main/README.md#sample-output)
4. [HOW IT WORKS !](https://github.com/prernasharma03/THE-ENIGMA#how-it-works-)
   1. [STEP 1](https://github.com/prernasharma03/THE-ENIGMA#step-1---get-time)
   2. [STEP 2](https://github.com/prernasharma03/THE-ENIGMA#step-2---choose)
   3. [A-ENIGMA](https://github.com/prernasharma03/THE-ENIGMA#a---enigma)
   4. [B- BOMBE](https://github.com/prernasharma03/THE-ENIGMA#b---bombe)
5. [OTHER FEATURES](https://github.com/prernasharma03/THE-ENIGMA#other-features)
   1. [VOICE](https://github.com/prernasharma03/THE-ENIGMA#voice)
   2. [MESSAGE BOX](https://github.com/prernasharma03/THE-ENIGMA#message-box)
   3. [OPENNING WEBSITE](https://github.com/prernasharma03/THE-ENIGMA#opening-website)
   4. [LOGIN SYSTEM](https://github.com/prernasharma03/THE-ENIGMA#login-system)
   5. [ANIMATION](https://github.com/prernasharma03/THE-ENIGMA#animation)
7. [SCOPE OF IMPROVEMENT](https://github.com/prernasharma03/THE-ENIGMA/blob/main/README.md#scope-of-improvement)
8. [CREDITS](https://github.com/prernasharma03/THE-ENIGMA#credits)
9. [REFRENCES](https://github.com/prernasharma03/THE-ENIGMA#references)
## INTRODUCTION
[ENIGMA](https://en.wikipedia.org/wiki/Enigma_machine) was a Cipher Machine Used by Nazis at time of WW2 \
This project encrypts and decrypts the data entered by the user by using a symmetric key.\
The key is based on [ASCII](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html) values of certain sets of variables(DATE,TIME,INPUT).\
The key changes every hour , so perpetrator have only an hour to crack the key , before it changes. \
We have added various other features in our code like the voice, animation, sound,etc.
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
## SAMPLE OUTPUT
### ENCRYPTION
```c
Input : Hello people
Output : lPuv+{r~⌂⌂v~
```
#### DECRYPTION
```c
Input : lPuv+{r~⌂⌂v~
Output : Hello people
```
## HOW IT WORKS !
### STEP 1 - GET TIME
get the sum of current date and time's(HOUR's) ASCII value with help of this code \
due to this code key changes every hour.
    
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
***KEY*** is added \
Making **KEY**  is a 2 step process followed by output
#### 1 LETTERS INTERCHANGE
First we need to determine the length of string is odd or even to determine the end point of loop 




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
***KEY*** is half of length of input subtracted by 1st digit of sum which is obtained in [STEP 1](https://github.com/prernasharma03/THE-ENIGMA#step-1---get-time).
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
INPUT : AAAA
A's ASCII value = 65
So
65 65 65 65
Is converted into
66+KEY 67+KEY 68+key 69+key
```
this step was taken to remove possiblity of repeatation. 
### B - BOMBE
### STEP B.3 - INPUT
If u have entered 2 you have selected decryption.
Enter the Encrypted data using this code
```c
char b[100];
scanf("%s",b);
```
### STEP B.4 - KEY
***KEY*** is subtracted \
This is also a 2 step process followed by output
#### 1 SETTING KEY
***KEY*** is half of length of input subtracted by 1st digit of sum which is obtained in [STEP 1](https://github.com/prernasharma03/THE-ENIGMA#step-1---get-time). \
After setting the ***KEY*** string b 's each character is decremented by it's ASCII value. \
FOR EG.
```c
INPUT : AAAA
A's ASCII value =65
So
65 65 65 65
is converted into
65-key 64-key 63-KEY 62-KEY

```
#### 2 LETTERS INTERCHANGE
First we need to determine the length of string is odd or even to determine the end point of loop 




```c

// STRING LENGTH EVEN OR ODD

if(strlen(b)%2==0){
b1=strlen(b);
} else{
b1=strlen(b)-1;
}
```
Here alternate elements of string are swapped
```c

// LETTER INTERCHANGE


for(i=0;i<b1;i+=2){
   temp2=b[i];
   b[i]=b[i+1];
   b[i+1]=temp2;
}
```
FOR EG.
```c
heya -> ehay
```
#### OUTPUT
```c
printf("  \nDECODED MESSAGE IS : ");
for(i=0;i<strlen(b);i++){
  system("color E");
  printf("%c",x2[i]);
}
printf("\n\nDECRYPTION SUCESSFUL!\n\n");
```
## OTHER FEATURES
### VOICE
we use [espeak](http://espeak.sourceforge.net/) synthesizer for voice function
here is a sample code
```c
#include<stdio.h>
#include<windows.h>

int main() {
     system ("espeak -ven-us+f2 WE_CARE_FOR_YOUR_PRIVACY");
    return 0;
}
```
You select different voice from 5 male and 5 female voices by making changes in *espeak -ven-us+f2* \
**f** for female and **m** for male \
**1-5** for different pitches 
### MESSAGE BOX
You simply put a a message box by referring this sample code
```c
#include<stdio.h>
#include<windows.h>

int main() {
    
   MessageBox(0,"\n\n\nWE CARE FOR YOUR PRIVACY!\n\n","WELCOME",1);
      Beep(800,500);
      
    return 0;
}
```
Beep's frequency can be adjusted
### OPENING WEBSITE
This code opens any website you want like google.com , whatsapp.com , etc... \
so you can send encrypted messages from website you want !
```c
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main() {
    
       // WEB PART------
    printf("\nDo you want to open any services? (yes/no)\n");
    printf("-> ");
    char ans[10]; int f;
    scanf("%s",ans);
    if (ans[0]=='y'&&ans[1]=='e'&&ans[2]=='s'){
        f=1;}
        else{
            f=0;
        }
        switch(f){
            case 1:
         printf("\n\nWHICH COMMUNICATION SERVICES DO YOU WANT TO OPEN?\n");
    
    char i11[100];
    scanf("%s",i11);

    
    char i12[100]="\"Start www.";
    strcat(i12,i11);
    strcat(i12,".com\"");
    system(i12);

while(!kbhit()){
        ;
    }

      break;

case 0:
        printf("\nOKAY\n");
        break;
}

    return 0;
}
```
### LOGIN SYSTEM
we use login system by simple switch case method but , we also masked the password using the following code
```c
void mask(char spassword[]){
char ch; int i;
for(i=0;i<50;i++){
ch=getch();
if(ch==13)
break;
spassword[i]=ch;
ch='*';
printf("%c",ch);
}
   spassword[i]='\0';
}
``` 
### ANIMATION
Animation was created by hardcoding frames and running it in a finite while loop
## SCOPE OF IMPROVEMENT
1. The program can be further improved by using complex algorithms, as well as complex key.  
    System can be made to encrypt the data on the basis of Unicode values. 
2. It also can be improved for encryption and decryption of images. 
3. It can also be improved for encryption and decryption of files.
4. Key changing period can change as per convenience.
## CREDITS
This project was done by \
[Prerna Sharma](https://github.com/prernasharma03) \
[Aditya Jambhale](https://github.com/adijams01) \
[Abuzer Ganjifrockwala](https://github.com/abuzEr-g) \
[Ishan Bhat](https://github.com/Ishan2202) 
## REFERENCES
1. [espeak](https://youtu.be/lC-i3Q-2KcY)
2. [Beep](https://www.geeksforgeeks.org/beep-function-in-c-with-examples/)
3. [Colourful Text/Background](https://youtu.be/aMuulzbRfk4)
4. [Time Function](https://www.geeksforgeeks.org/time-function-in-c/amp/)
5. [Message Box](https://youtu.be/vA8TMASj7WM)
