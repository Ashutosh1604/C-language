#include<stdio.h>

int main()
{
int i=1;
int n;
int sum=0;
int count=0;

printf("enter the no. of odd number you wish to find sum of\n");
scanf("%d",&n);

for(i=1;count<n;count++)
{sum=sum+i;
i=i+2;
}
printf("sum of odd number is %d\n",sum);
return 0;

}
