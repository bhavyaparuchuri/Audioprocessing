#include<stdio.h>
#include<stdlib.h>
#include"handlers.h"

char audioname[100];
void handlerMenuEvent( int choice)
{ 
    printf("enter the audio name ");
    scanf("%s",audioname);
    switch(choice){
    case 1:if(canHandle(audioname))
			drawImage(audioname);
	   else
		printf(" we cannot handle this audio\n ");
		break;
    case 2:savefile(audioname);
		break;

}
            printf("---------------------------------------\n");

}
void displayMenu()
{
     int choice;
     while(1)
     {
   	printf("1.Show an Audio\n");
	printf("2.Save an Audio\n");
	printf("3.Exit\n");
	printf("choice\n");
	scanf("%d",&choice);
        if(choice==3)
	      exit(0);
         handlerMenuEvent(choice);
     }
}
		
int main()
{
	displayMenu();
         return 0;

}

