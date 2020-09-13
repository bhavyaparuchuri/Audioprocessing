

#define TRUE 1
#define FALSE 0

int vdrawAudio(char *);
int vsaveAudio(char *);


typedef struct{
 
	int (* canHandle) (char *);
	int (* drawAudio) (char *);
	int (* saveAudio) (char *);
}Sound;


