#include<stdio.h>

int main()
{
int i=1;
int n;
int sum=0;

 printf("Enter the last term\n");
 scanf("%d",&n);

 for( i=1 ; i<=n ; i++)
 sum=sum+i;

 printf("sum is %d\n",sum);

 return 0;
 }
