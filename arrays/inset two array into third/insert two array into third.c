#include<stdio.h>

int main()
{
    char a[50],b[50],c[50];
    int i,j;
    printf("enter the string in array 1:\n");
    scanf("%s",a);
    printf("enter the string in array 2:\n");
    scanf("%s",b);
    i=j=0;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++;
        j++;
    }
    c[i]='\0';
printf("string of third is %s\n",c);
return 0;
}
