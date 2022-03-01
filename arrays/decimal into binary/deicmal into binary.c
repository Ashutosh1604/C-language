#include<stdio.h>
void decimal(int);
int main()
{
 int n;
 printf("Enter the decimal no.\n");
 scanf("%d",&n);
 decimal(n);
 return 0;
}
void decimal(int num)
{
   int a[10],i=0,cnt,rem;
 while(num!=0)
 {
     rem=num%2;
     a[i]=rem;
     i++;
     num=num/2;
     }
    cnt=i-1;

     printf("binary no. is:");
     for(i=cnt;i>=0;i--)
        printf("%d",a[i]);
}



