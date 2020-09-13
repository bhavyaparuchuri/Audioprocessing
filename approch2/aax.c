/*this module takes care of .aax audio format*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "handlers.h"

int aax_canHandle(char *audioname)
{
 	int len;
    	char *end;
    	printf("checking wheather we can handle %s\n ",audioname);
    	len = strlen(audioname);
	end = audioname + (len - 3);
	printf("end = %s\n",end);

	if(strcmp(end, "aax")==0)
         {
		return TRUE;
         }
	else
		return FALSE;
}


int aax_drawAudio(char *audioname)
{
		printf("How is this audio %s\n",audioname);
			return TRUE;
}

int aax_saveAudio(char *newaudiofile)
{
   	 printf("file saved by .aax handlers \n");
  	 return TRUE;
}


Sound aaxplayer ={
       	aax_canHandle,
	aax_drawAudio,
	aax_saveAudio
};

