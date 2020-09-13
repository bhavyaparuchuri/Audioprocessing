#include<stdio.h>
#include<stdlib.h>
#include"handlers.h"
#include <dlfcn.h>
#include <string.h>

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

int init_handlers(){
		FILE *fp;
		void *soptr;
		char so_name[300];
		fp=fopen("./config.txt","r");
		if(fp==NULL){
			  printf(" config.txt not found \n");
			  return FALSE;
		}
		fgets(so_name,300,fp);
		while(!feof(fp)){
				so_name[strlen(so_name) -1] ='\0';
				printf(" Loading ..%s\n",so_name);
				soptr = dlopen(so_name,RTLD_NOW);
				if(soptr == NULL){
					printf("Falied to load library\n");
					return FALSE;
				}
				fgets(so_name,300,fp);
		}
				return TRUE;
}

int main()
{
/*2. calling a funtion*/
	init_handlers();
	displayMenu();
         return 0;

}

