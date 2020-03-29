#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
int errno,fd,dd,ee,cc;
char o[20]="anjanapradeep";
char c[100];
fd=open("/home/hp/Desktop/anju.txt",O_RDONLY);
dd = read(fd,c,500*sizeof(char));
ee = write(fd,o,13*sizeof(char));
if(fd==-1)
{
printf("ERROR");
}
else
{
printf("file opening\n");
printf("file::%d\nsize::%d\n content::%s ",fd,dd,c);
}
if(dd==-1)
{
printf("error");
}
else
{
printf("read success\n");
}
if(ee==-1)
{
printf("error\n");
}
else
{
printf("write success");
}
return 0;
}


