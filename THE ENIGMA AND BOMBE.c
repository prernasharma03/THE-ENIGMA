//FINALENIGMA
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define LEN 150

void msg();
void mask();
void animation();


// PASSWORD MASKING*-----
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

void msg(){
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
}

int main()
{
    
    // ANIMATION-----
    


    animation();

    


    char loop[10];



        //----MAIN PROGRAM----  

do{
    system("cls");

    
 system ("espeak -ven-us+f2 welcome");
 system ("espeak -ven-us+f2 WE_CARE_FOR_YOUR_PRIVACY");

   Beep(800,500);
   MessageBox(0,"\n\n\nWE CARE FOR YOUR PRIVACY!\n\n","WELCOME",1);

// DATE AND TIME--------

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
   

// CHOOSE OPERATION----ENCRYPTION OR DECRYPTION------

    system("color 7C");
    int num;
    printf("CHOOSE AN OPTION \n");
    printf("BY ENTERING A NUMBER\n");
    printf("\n");
    printf("[1] ENIGMA\n");
    printf("[2] BOMBE\n");
    printf("\n");
    printf("-> ");
    scanf("%d",&num);


    switch(num){


    //------ ENCRYPTION----------

        case 1:
        printf("\nYOU HAVE SELECTED ENCRYPTION\n\n");
        system ("espeak -ven-us+f2 enter_your_input"); 

 char ch1,a[100];
 int b1,p,temp1,x;

  printf("ENTER YOUR INPUT: "); 


// TAKING INPUT FROM USER---

  gets(a);
  for(i=0;i<100;i++){
  ch1=getch();
  if(ch1==13)
  break;
  a[i]=ch1;
  printf("%c",ch1);}
  a[i]='\0';


// STRING LENGTH EVEN OR ODD

    if(strlen(a)%2==0){
        b1=strlen(a);
    } else{
        b1=strlen(a)-1;
    }


// LETTER INTERCHANGE

       for(i=0;i<b1;i+=2){
            temp1=a[i];
            a[i]=a[i+1];
            a[i+1]=temp1;
        }


//------ SETTING KEY--------

      int key;
      key=strlen(a)/2-sum%10; 
      MessageBox(0,"\n\n\nENCRYPTION SUCCESSFUL\n\n","CONGRATULATIONS",1);
      
      printf("\n\nENCODED MESSAGE IS : ");
     for(i=0;i<strlen(a);i++){
         system("color A");
         key=key+1;
        printf("%c",a[i]+key); 
    }
   system ("espeak -ven-us+f2 ENCRYPTION_SUCCESSFUL"); 
    printf("\n\nENCRYPTION SUCESSFUL!\n\n");
    Beep(800,500);


// MESSAGING PART-----
   
    msg();

break;
// ENCRYPTION ENDED------



     //----DECRYPTION------

case 2:
   
   printf("YOU HAVE SELECTED DECRYPTION\n");


// ASKING FOR USERID AND PASSWORD BEFORE DECRYPTING 

char id[100],name[100];
int password=1234;
printf("\nENTER USER ID : ");
scanf("%s",id);
printf("  \nHello %s !\n\n",id);


//voice-"HELLO USER"----

   char charcommand[100];
   strcpy(charcommand,"espeak -ven-us+f2 \"");
   strcat(charcommand,"hello ");
   if(strcmp("prerna",id)==0) {
   strcpy(id,"miss sharma");
   }
   strcat(charcommand,id );
   strcat(charcommand,"\"");
   system(charcommand);


//PASSWORD SENT TO MASK FUNCTION AND THEN MASKING IS PRINTED  [PASSWORD=1234]


    printf("ENTER PASSWORD : ");
  char spassword[100];
  itoa(password,spassword,10);
  mask(spassword);

if(strcmp(spassword,"1234")==0){
    p=1;
} else{
    p=0;
}
   switch (p){
    case 1:
    Beep(800,500);
    MessageBox(0,"\nUSER VERIFIED\n\n","SUCCESS!",1);
    printf("\n\nYOU CAN PROCEED FURTHER\n");


// if user is verified then decrypt---

char b[100],temp2,x2[100];
int c;


// SCANING ENCRYPTION----

system ("espeak -ven-us+f2 Enter_the_ENCRYPTED_TEXT"); 

    Beep(800,500);


// WEB PART---

    msg();


    printf("\nENTER THE ENCRYPTED TEXT : ");
    scanf("%s",b);


// SETTING KEY---

for(i=0;i<strlen(b);i++){
key=strlen(b)/2-sum%10;
 }     
 for(i=0;i<strlen(b);i++){
    key++;
    x2[i]=b[i]-key;
 }


// STRING LENGTH EVEN OR ODD

    if(strlen(b)%2==0){
        c=strlen(b);
    } else{
        c=strlen(b)-1;
   }


// LETTER INTERCHANGE

       for(i=0;i<c;i+=2){
            temp2=x2[i];
            x2[i]=x2[i+1];
            x2[i+1]=temp2;
        }
        MessageBox(0,"\n\n\nDECRYPTION SUCCESSFUL\n\n","CONGRATULATIONS",1);


// DECRYPTION-----        

 printf("  \nDECODED MESSAGE IS : ");
for(i=0;i<strlen(b);i++){
     system("color E");
   printf("%c",x2[i]);
          }
    
system ("espeak -ven-us+f2 DECRYPTION_SUCCESSFUL"); 

    printf("\n\nDECRYPTION SUCESSFUL!\n\n");
break;


    //---ERRORS---

// ERROR 1- PASSWORD

    default:
    Beep(800,800);
    Beep(800,800);
    Beep(800,800);
    MessageBox(0,"\n\nINCORRECT PASSWORD\n\n","ERROR!",1);
    system("color C");
    printf("\n\nPLEASE ENTER CORRECT PASSWORD NEXT TIME\n");
system ("espeak -ven-us+f2 enter_correct_password_next_time"); 

    break;
}
    break;
break;


// ERROR 2- INCOORECTION OPTION

        default :
    printf("INCORRECT OPTION\n");
    system("color C");
    printf("TRY AGAIN!!");
system ("espeak -ven-us+f2 incorrect_option"); 
system ("espeak -ven-us+f2 please_choose_between_one_and_two"); 

    }
   Beep(800,500);

system ("espeak -ven-us+f2 DO_YOU_WANT_TO__CONTINUE"); 


// REPEATING/TERMINATING PROGRAM----

   printf("\n\nDo u want to continue?(yes/no)\n");
   printf("-> ");
    scanf("%s",loop);
}
    
while(loop[0]=='y');

   printf("\n\nPROGRAM EXECUTED SUCCESFULLY ! \n");

   // PROGRAM EXECUTED SUCCESFULLY ! 


    return 0;
}


     // ANIMATION PART-------

void animation(){
    system("color E");
    system("cls");

    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||     ||||||||||||||||||||||||||||||                                                                                                                                                                   |||\n");
    printf("|||     ||                          ||                                                                                                                                                                   |||\n");
    printf("|||     ||         |||              ||                                                                                                                                                                   |||\n");
    printf("|||     ||       |||                ||                                                                                                                                                                   |||\n");
    printf("|||     ||     |||                  ||                                                                                                                                                                   |||\n");
    printf("|||     ||   |||          |||       ||                                                                                                                                                                   |||\n");
    printf("|||     ||  |||         |||         ||                                                                                                                                                                   |||\n");
    printf("|||     ||    |||     |||           ||                                                                                                                                                                   |||\n");
    printf("|||     ||      ||| |||         ||| ||                                                                                                                                                                   |||\n");
    printf("|||     ||        |||         |||   ||                                                                                                                                                                   |||\n");
    printf("|||     ||          |||     |||     ||                                                                                                                                                                   |||\n");
    printf("|||     ||            ||| |||       ||                                                                                                                                                                   |||\n");
    printf("|||     ||              |||         ||                                                                                                                                                                   |||\n");
    printf("|||     ||                          ||                                                                                                                                                                   |||\n");
    printf("|||     ||||||||||||||||||||||||||||||                                                                                                                                                                   |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                     _ WE__CARE__FOR__YOUR__PRIVACY_                                                                                  |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                            \n");    
    printf("                                                                                                                                                                                                          \n");
    
    Beep(500,500);
    Sleep(1000);
system("cls");

    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||     ||||||||||||||||||||||||||||||  |||||||||||||||||||||||||||||||||                                                                                                                                |||\n");
    printf("|||     ||                          ||  ||                             ||                                                                                                                                |||\n");
    printf("|||     ||         |||              ||  ||   ||||                 ||   ||                                                                                                                                |||\n");
    printf("|||     ||       |||                ||  ||   ||  ||               ||   ||                                                                                                                                |||\n");
    printf("|||     ||     |||                  ||  ||   ||    ||             ||   ||                                                                                                                                |||\n");
    printf("|||     ||   |||          |||       ||  ||   ||      ||           ||   ||                                                                                                                                |||\n");
    printf("|||     ||  |||         |||         ||  ||   ||        ||         ||   ||                                                                                                                                |||\n");
    printf("|||     ||    |||     |||           ||  ||   ||          ||       ||   ||                                                                                                                                |||\n");
    printf("|||     ||      ||| |||         ||| ||  ||   ||            ||     ||   ||                                                                                                                                |||\n");
    printf("|||     ||        |||         |||   ||  ||   ||              ||   ||   ||                                                                                                                                |||\n");
    printf("|||     ||          |||     |||     ||  ||   ||                || ||   ||                                                                                                                                |||\n");
    printf("|||     ||            ||| |||       ||  ||   ||                   ||   ||                                                                                                                                |||\n");
    printf("|||     ||              |||         ||  ||                             ||                                                                                                                                |||\n");
    printf("|||     ||                          ||  ||                             ||                                                                                                                                |||\n");
    printf("|||     ||||||||||||||||||||||||||||||  |||||||||||||||||||||||||||||||||                                                                                                                                |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                     _ WE__CARE__FOR__YOUR__PRIVACY_                                                                                  |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                            \n");    
    printf("                                                                                                                                                                                                          \n");
    
    Beep(500,500);
     Sleep(1000);
system("cls");
   

    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||     ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||                                                                                                       |||\n");
    printf("|||     ||                          ||  ||                            ||  ||                    ||                                                                                                       |||\n");
    printf("|||     ||         |||              ||  ||   ||||                 ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||       |||                ||  ||   ||  ||               ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||     |||                  ||  ||   ||    ||             ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||   |||          |||       ||  ||   ||      ||           ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||  |||         |||         ||  ||   ||        ||         ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||    |||     |||           ||  ||   ||          ||       ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||      ||| |||         ||| ||  ||   ||            ||     ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||        |||         |||   ||  ||   ||              ||   ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||          |||     |||     ||  ||   ||                || ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||            ||| |||       ||  ||   ||                   ||  ||  ||        ||          ||                                                                                                       |||\n");
    printf("|||     ||              |||         ||  ||                            ||  ||                    ||                                                                                                       |||\n");
    printf("|||     ||                          ||  ||                            ||  ||                    ||                                                                                                       |||\n");
    printf("|||     ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||                                                                                                       |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                     _ WE__CARE__FOR__YOUR__PRIVACY_                                                                                  |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                            \n");    
    printf("                                                                                                                                                                                                          \n");
    
    Beep(500,500);
     Sleep(1000);
system("cls");



    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||     ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||                                                                       |||\n");
    printf("|||     ||                          ||  ||                            ||  ||                    ||  ||                          ||                                                                       |||\n");
    printf("|||     ||         |||              ||  ||   ||||                 ||  ||  ||        ||          ||  ||   ||||||||||||||||||     ||                                                                       |||\n");
    printf("|||     ||       |||                ||  ||   ||  ||               ||  ||  ||        ||          ||  ||   ||                     ||                                                                       |||\n");
    printf("|||     ||     |||                  ||  ||   ||    ||             ||  ||  ||        ||          ||  ||   ||                     ||                                                                       |||\n");
    printf("|||     ||   |||          |||       ||  ||   ||      ||           ||  ||  ||        ||          ||  ||   ||                     ||                                                                       |||\n");
    printf("|||     ||  |||         |||         ||  ||   ||        ||         ||  ||  ||        ||          ||  ||   ||        ||||||||     ||                                                                       |||\n");
    printf("|||     ||    |||     |||           ||  ||   ||          ||       ||  ||  ||        ||          ||  ||   ||        ||    ||     ||                                                                       |||\n");
    printf("|||     ||      ||| |||         ||| ||  ||   ||            ||     ||  ||  ||        ||          ||  ||   ||        ||    ||     ||                                                                       |||\n");
    printf("|||     ||        |||         |||   ||  ||   ||              ||   ||  ||  ||        ||          ||  ||   ||        ||    ||     ||                                                                       |||\n");
    printf("|||     ||          |||     |||     ||  ||   ||                || ||  ||  ||        ||          ||  ||   ||||||||||||    ||     ||                                                                       |||\n");
    printf("|||     ||            ||| |||       ||  ||   ||                   ||  ||  ||        ||          ||  ||                   ||     ||                                                                       |||\n");
    printf("|||     ||              |||         ||  ||                            ||  ||                    ||  ||                          ||                                                                       |||\n");
    printf("|||     ||                          ||  ||                            ||  ||                    ||  ||                          ||                                                                       |||\n");
    printf("|||     ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||                                                                       |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                     _ WE__CARE__FOR__YOUR__PRIVACY_                                                                                  |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                            \n");    
    printf("                                                                                                                                                                                                          \n");
    
    Beep(500,500);
     Sleep(1000);
system("cls");


    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||||||                                   |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                    ||  ||                          ||  ||                                ||                                   |||\n");
    printf("|||   ||         ||               ||  ||   ||||                 ||  ||  ||        ||          ||  ||   |||||||||||||||||||    ||  ||  |||                      |||  ||                                   |||\n");
    printf("|||   ||       ||                 ||  ||   ||  ||               ||  ||  ||        ||          ||  ||   ||                     ||  ||  ||  ||                ||  ||  ||                                   |||\n");
    printf("|||   ||     ||                   ||  ||   ||    ||             ||  ||  ||        ||          ||  ||   ||                     ||  ||  ||     ||          ||     ||  ||                                   |||\n");
    printf("|||   ||   |||         ||         ||  ||   ||      ||           ||  ||  ||        ||          ||  ||   ||                     ||  ||  ||        ||    ||        ||  ||                                   |||\n");
    printf("|||   ||  ||        ||            ||  ||   ||        ||         ||  ||  ||        ||          ||  ||   ||        ||||||||     ||  ||  ||           ||           ||  ||                                   |||\n");
    printf("|||   ||    ||     ||             ||  ||   ||          ||       ||  ||  ||        ||          ||  ||   ||        ||    ||     ||  ||  ||                        ||  ||                                   |||\n");
    printf("|||   ||      || ||         ||    ||  ||   ||            ||     ||  ||  ||        ||          ||  ||   ||        ||    ||     ||  ||  ||                        ||  ||                                   |||\n");
    printf("|||   ||        ||        ||      ||  ||   ||              ||   ||  ||  ||        ||          ||  ||   ||        ||    ||     ||  ||  ||                        ||  ||                                   |||\n");
    printf("|||   ||          ||     ||       ||  ||   ||                || ||  ||  ||        ||          ||  ||   ||||||||||||    ||     ||  ||  ||                        ||  ||                                   |||\n");
    printf("|||   ||            || ||         ||  ||   ||                   ||  ||  ||        ||          ||  ||                   ||     ||  ||  ||                        ||  ||                                   |||\n");
    printf("|||   ||              ||          ||  ||                            ||  ||                    ||  ||                          ||  ||                                ||                                   |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                    ||  ||                          ||  ||                                ||                                   |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||||||                                   |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                     _ WE__CARE__FOR__YOUR__PRIVACY_                                                                                  |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");
    
    Beep(500,500);
     Sleep(1000);
    system("cls");


    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||||||  |||||||||||||||||||||||||||||||  |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                    ||  ||                          ||  ||                                ||  ||                           ||  |||\n");
    printf("|||   ||         ||               ||  ||   ||||                 ||  ||  ||        ||          ||  ||   |||||||||||||||||||    ||  ||  |||                      |||  ||  ||   ||||||||||||||||||||||  ||  |||\n");
    printf("|||   ||       ||                 ||  ||   ||  ||               ||  ||  ||        ||          ||  ||   ||                     ||  ||  ||  ||                ||  ||  ||  ||   ||                  ||  ||  |||\n");
    printf("|||   ||     ||                   ||  ||   ||    ||             ||  ||  ||        ||          ||  ||   ||                     ||  ||  ||     ||          ||     ||  ||  ||   ||                  ||  ||  |||\n");
    printf("|||   ||   |||         ||         ||  ||   ||      ||           ||  ||  ||        ||          ||  ||   ||                     ||  ||  ||        ||    ||        ||  ||  ||   ||                  ||  ||  |||\n");
    printf("|||   ||  ||        ||            ||  ||   ||        ||         ||  ||  ||        ||          ||  ||   ||        ||||||||     ||  ||  ||           ||           ||  ||  ||   ||||||||||||||||||||||  ||  |||\n");
    printf("|||   ||    ||     ||             ||  ||   ||          ||       ||  ||  ||        ||          ||  ||   ||        ||    ||     ||  ||  ||                        ||  ||  ||   ||||||||||||||||||||||  ||  |||\n");
    printf("|||   ||      || ||         ||    ||  ||   ||            ||     ||  ||  ||        ||          ||  ||   ||        ||    ||     ||  ||  ||                        ||  ||  ||   ||                  ||  ||  |||\n");
    printf("|||   ||        ||        ||      ||  ||   ||              ||   ||  ||  ||        ||          ||  ||   ||        ||    ||     ||  ||  ||                        ||  ||  ||   ||                  ||  ||  |||\n");
    printf("|||   ||          ||     ||       ||  ||   ||                || ||  ||  ||        ||          ||  ||   ||||||||||||    ||     ||  ||  ||                        ||  ||  ||   ||                  ||  ||  |||\n");
    printf("|||   ||            || ||         ||  ||   ||                   ||  ||  ||        ||          ||  ||                   ||     ||  ||  ||                        ||  ||  ||   ||                  ||  ||  |||\n");
    printf("|||   ||              ||          ||  ||                            ||  ||                    ||  ||                          ||  ||                                ||  ||                           ||  |||\n");
    printf("|||   ||                          ||  ||                            ||  ||                    ||  ||                          ||  ||                                ||  ||                           ||  |||\n");
    printf("|||   ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||  ||||||||||||||||||||||||  ||||||||||||||||||||||||||||||  ||||||||||||||||||||||||||||||||||||  |||||||||||||||||||||||||||||||  |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                     _ WE__CARE__FOR__YOUR__PRIVACY_                                                                                  |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("|||                                                                                                                                                                                                      |||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                                                                                                                                                                                   
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("                                                                                                                                                                                                              \n");    
    printf("                                                                                                                                                                                                             \n");
    
Beep(500,500);
system("cls");

    
}

//END-----------------
