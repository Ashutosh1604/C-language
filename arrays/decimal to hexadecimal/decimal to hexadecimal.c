#include<stdio.h>
void hexadecimal(int);
int main()
{
 int n;
 printf("Enter the decimal no.\n");
 scanf("%d",&n);
 hexadecimal(n);
 return 0;
}
void hexadecimal(int num)
{
   int a[10],i=0,cnt,rem;
 while(num!=0)
 {
     rem=num%16;
     a[i]=rem;
     i++;
     num=num/16;
     }
    cnt=i-1;

     printf("hexadecimal no. is:");
     for(i=cnt;i>=0;i--)
     {
         if(a[i]<10)
        printf("%d",a[i]);
        else
            printf("%c",a[i]+55);
}
}
