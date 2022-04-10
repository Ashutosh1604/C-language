#include<stdio.h>
float average(int a,int b,int c);
int main()
{
    int a,b,c;
    float avg;
    printf("enter 3 no.\n");
    scanf("%d%d%d",&a,&b,&c);

   avg=average(a,b,c);
   printf("the average is %f",avg);
}
float average(int a,int b,int c){
float result;
result=(float)(a+b+c)/3;
return result;
}
