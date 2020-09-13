#include<stdio.h>
#include<stdlib.h>
#include "handlers.h"

/*1. To make funtion usable by the succeeding part of current source file*/
extern Sound aaxplayer;
extern Sound aacplayer;
extern Sound aaplayer;

/* To declare a array using structures*/
Sound *audiohandler[]={
 	&aaxplayer,
 	&aacplayer,
 	&aaplayer,
	NULL
};

/*A funtion which finds the respective handler*/

int find_handler(char *audioname)
{
     Sound *s;
     int audiono = 0;
     s = audiohandler[0];

while(s!= NULL)
{
 	printf("%s: Handle no =%d ptr =%p\n",__func__,audiono,s);
        if(s -> canHandle(audioname))
		return audiono;
        audiono++;
        s= audiohandler[audiono];
    }
return -1;
}

/*A funtion which verify the audio format*/
int vdrawAudio(char *audioname)
{
   Sound *s;
   int audiono = 0;
    audiono = find_handler(audioname);
   printf("%s:handle no =%d\n",__func__,audiono);

if(audiono==-1)
{
   printf("we cannot handle this file\n");
   return FALSE;
}

s=audiohandler[audiono];
s->drawAudio(audioname);
return TRUE;
}
/*A funtion which save the audio file by checking the format*/
int vsaveAudio(char *newaudioname)
{
   Sound *s;

   int audiono=0;
   audiono = find_handler(newaudioname);
   printf("%s:handle no =%d\n",__func__,audiono);

if(audiono==-1)
{
   printf("we cannot handle this file\n");
   return FALSE;
}

s=audiohandler[audiono];
s->saveAudio(newaudioname);
return TRUE;
}


