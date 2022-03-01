#include<stdio.h>
#include<math.h>
int main()
{
   int degree;
   int a[20];
   int x;
   int sum=0;

 printf("enter the degree of polinomial\n");
 scanf("%d",&degree);

 printf("enter the co-efficient of polinomial\n");
 for(int i=degree;i>=0;i--)
 {
    printf(" the co-efficient of a[%d]\n",i);
    scanf("%d",&a[i]);

 }
  printf(" the  polinomial\n");
   for(int i=degree;i>=0;i--)
   {
       if(a[i]!=0)
       {
           printf("%dx^%d",a[i],i);
       }
       printf("+");
   }
   printf("0");
       printf("\n enter the value of x\n");
       scanf("%d",&x);
   for(int i=degree;i>=0;i--)
{
    sum=sum+a[i]*pow(x,i);
}
printf("evaluation of polynomial is %d\n",sum);

return 0;
}
