#include<stdio.h>
#define max 50

int main(){
char str[max];
int words=0;
int i=0;

printf("Ashutosh Dhyani G 20011470\n");

printf("enter the string\n");
fgets(str,max-1,stdin);

for(i=0;str[i]!='\0';i++)
{
    if(str[i]==' ')
    {
        words++;
    }
}
printf(" no. of words in given string are:%d\n",words+1);
return 0;
}
