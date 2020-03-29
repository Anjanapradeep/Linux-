#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
int main()
{
int fd,errno,len;
ssize_t ret;
char word[100];
char w[100]="anjanapradeep";
ssize_t nr;
fd=open("/home/hp/Desktop/anju.txt",O_RDWR);
if(fd==-1)
{
fprintf(stdout,"failed");
}else
{
fprintf(stdout,"success\n");
nr=read(fd,word,100*sizeof(char));
if(nr==-1)
{
fprintf(stdout,"read failed");
}else
{
printf("\n");
fprintf(stdout,word);
len=sizeof(char);
char *buff;
while(len!=0 && (ret=read(fd,buff,len ))!=0)
{
if(ret==-1)
{
if(errno==EINTR)
continue;
perror("read");
break;
}
len=len-ret;
buff+=ret;
}
}
}
}
