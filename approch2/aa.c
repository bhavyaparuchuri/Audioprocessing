/*this module takes care of .aax audio format*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "handlers.h"

int aa_canHandle(char *audioname)
{
 	int len;
    	char *end;
    	printf("checking wheather we can handle %s\n ",audioname);
    	len = strlen(audioname);
	end = audioname + (len - 2);
	printf("end = %s\n",end);

	if(strcmp(end, "aa")==0)
         {
		return TRUE;
         }
	else
		return FALSE;
}


int aa_drawAudio(char *audioname)
{
		printf("How is this audio %s\n",audioname);
			return TRUE;
}

int aa_saveAudio(char *newaudiofile)
{
   	 printf("file saved by .aa handlers \n");
  	 return TRUE;
}


Sound aaplayer ={
       	aa_canHandle,
	aa_drawAudio,
	aa_saveAudio
};

