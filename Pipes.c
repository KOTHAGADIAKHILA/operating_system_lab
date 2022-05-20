#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
int pipefds[2],returnstatus;
char writemessages[2][30],readmessage[30];
returnstatus = pipe(pipefds);

if(returnstatus == -1)
{
printf("Unable to create pipe\n");
return 1;
}

printf("Enter text to write into pipe  ");
fgets(writemessages[0],30,stdin);
write(pipefds[1],writemessages[0],sizeof(writemessages[0]));
read(pipefds[0],readmessage,sizeof(readmessage));
printf("READING FROM PIPE - MESSAGE 1 -  %s",readmessage);


printf("Enter another text to write into pipe  ");
fgets(writemessages[1],30,stdin);
write(pipefds[1],writemessages[1],sizeof(writemessages[1]));
read(pipefds[0],readmessage,sizeof(readmessage));
printf("READING FROM PIPE - MESSAGE 2 -  %s ",readmessage);

return 0;

}
