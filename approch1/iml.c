


#include<stdio.h>
#include<string.h>
#include "handlers.h"

int canHandle(char *audioname)
{
 	int len;
    	char *end;
    	printf("checking wheather we can handle %s\n ",audioname);
    	len = strlen(audioname);
	end = audioname + (len - 3);
	printf("end = %s\n",end);

	if(strcmp(end, "mp3")==0)
         {
		return TRUE;
         }
	else
		return FALSE;
}


int drawImage(char *audioname)
{
 	if(canHandle(audioname)){
		printf("How is this image %s\n",audioname);
			return TRUE;
                               }
        else
			return FALSE;
}

int savefile(char *newaudio)
{
   	 printf("file saved by mp3 handlers \n");
  	 return TRUE;
}
