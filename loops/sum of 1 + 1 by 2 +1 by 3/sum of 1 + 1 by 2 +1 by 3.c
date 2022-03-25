#include<stdio.h>

int main()
{
int i=1;
int n;
float sum=0;

printf("Enter the value of series last term\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{sum=sum +1.0/i;
}
printf("sum of series is %6.2f\n",sum);
return 0;
}
