/*this module takes care of .aax audio format*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "handlers.h"

int aac_canHandle(char *audioname)
{
 	int len;
    	char *end;
    	printf("checking wheather we can handle %s\n ",audioname);
    	len = strlen(audioname);
	end = audioname + (len - 3);
	printf("end = %s\n",end);

	if(strcmp(end, "aac")==0)
         {
		return TRUE;
         }
	else
		return FALSE;
}


int aac_drawAudio(char *audioname)
{
		printf("How is this audio %s\n",audioname);
			return TRUE;
}

int aac_saveAudio(char *newaudiofile)
{
   	 printf("file saved by .aac handlers \n");
  	 return TRUE;
}


Sound aacplayer ={
       	aac_canHandle,
	aac_drawAudio,
	aac_saveAudio
};

