#include<stdio.h>
#include<stdlib.h>
#include"handlers.h"
/*1. Declaration of global variable*/
char audioname[100];

/*5. A funtion to take care of showing an audiofile or saving an audiofile*/
void handleMenuEvent(int choice)
{ 
/*6. To take the input from user*/
    printf("enter the audio filename ");
    scanf("%s",audioname);
/*7. To get the output from choosen choice*/
    switch(choice){
    case 1: vdrawAudio(audioname);
	  	break;
    case 2: vsaveAudio(audioname);
		break;

}
            printf("---------------------------------------\n");

}
/*8. A funtion to display choices and call handleMenuEven funtion*/
void displayMenu()
{
     int choice;
/*3. To take the input from user*/
     while(1)
     {
   	printf("1.Show an Audiofile\n");
	printf("2.Save an Audiofile\n");
	printf("3.Exit\n");
	printf("choice\n");
	scanf("%d",&choice);
        if(choice>=3)
	      exit(0);
/*4. Calling funtion*/
         handleMenuEvent(choice);
     }
}
		
int main()
{
/*2. calling a funtion*/
	displayMenu();
         return 0;

}

