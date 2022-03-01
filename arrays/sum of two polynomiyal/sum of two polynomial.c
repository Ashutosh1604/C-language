#include<stdio.h>

int main()
{

int degreep,degreeq, p[20], q[20];

printf("enter the degree of polynomial p(x)\n");
scanf("%d",&degreep);

 printf("enter the co-efficients of polynomial p(x)\n");
for(int i=degreep;i>=0;i--)
{
    scanf("%d",&p[i]);
}

printf("enter the degree of polynomial q(x)\n");
scanf("%d",&degreeq);


printf("enter the co-efficients of polynomial q(x)\n");
for(int i=degreeq;i>=0;i--)
{
    scanf("%d",&q[i]);
}

int max=(degreep>degreeq)?degreep:degreeq;
int r[max+1];
for(int i=degreep;i>=0;i--)
    r[i]=p[i];
for(int i=degreeq;i>=0;i--)
    r[i]=r[i]+q[i];
printf("coefficient if polynomial r(x):");

for(int i=max;i>=0;i--)
{
    printf("%d\n",r[i]);

}
return 0;
}

