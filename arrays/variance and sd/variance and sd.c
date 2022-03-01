#include<stdio.h>
#include<math.h>
int main()
{

    int a[10],n;
    float sum=0,sum2=0,mean=0,sd,var;
printf("AshutoshDhyani_G_20011470");
    printf("enter the no. of elements \n");
    scanf("%d",&n);

    printf("enter the elements \n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    mean=sum/n;
    for(int i=0;i<n;i++)
    {
        sum2=sum2+(a[i]- mean)*(a[i]-mean);
        var=sum2/n;
        sd=sqrt(var);

    }
     printf("the variance and stndard deviation are %f and %f",var,sd);
    return 0;
}
