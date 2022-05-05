#include<stdio.h>
#define max 50

void join(char *str1,char *str2)
{int i=0,j=0;
while(str1[i]!='\0')
{
    i++;
}
while(str2[j]!='\0')
{
    str1[i]=str2[j];
    i++;
    j++;
}
str1[i]='\0';

}
int main()
{
    char str1[max]="hello ";
    char str2[max]="everyone";

      printf("Ashutosh Dhyani G 20011470\n");

    printf(" string1: %s\n",str1);
    printf(" string2: %s\n",str2);

    join(str1,str2);
    printf(" concatinated string: %s\n",str1);
}

