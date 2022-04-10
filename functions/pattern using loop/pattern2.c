
#include<stdio.h>
void pattern(int n);
int main()
{int n;
printf("enter the no. of rows\n");
scanf("%d",&n);
pattern(n);
 return 0;

}void pattern(int n)
{int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
