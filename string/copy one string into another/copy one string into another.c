#include<stdio.h>
#define max 50

void make_copy(char *str1,char *str2)
{int i=0;
while(str1[i]!='\0')
{
    str2[i]=str1[i];
    i++;
}
str2[i]='\0';

}
int main()
{
    char str1[max];
    char str2[max];
    printf("Ashutosh Dhyani G 20011470\n");
    printf("Enter the message in string 1\n");
    fgets(str1,max-1,stdin);

    make_copy(str1,str2);
    printf(" string 1 : %s\n string 2: %s\n",str1,str2);
}
