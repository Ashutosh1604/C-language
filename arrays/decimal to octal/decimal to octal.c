#include<stdio.h>
void octal(int );
int main()
{
 int n;
 printf("Enter the decimal no.\n");
 scanf("%d",&n);
 octal(n);
 return 0;
}
void octal(int num)
{
   int a[10],i=0,cnt,rem;
 while(num!=0)
 {
     rem=num%8;
     a[i]=rem;
     i++;
     num=num/8;
     }
    cnt=i-1;

     printf("octal no. is:");
     for(i=cnt;i>=0;i--)
        printf("%d",a[i]);
}
