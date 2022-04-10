#include<stdio.h>
int fact(int n);
int main()
{int n;
printf("enter the no.\n");
scanf("%d",&n);
int p=fact(n);
printf("factorial of %d is %d",n,p);
return 0;

}
int fact(int n){
if(n>=1)
{
    return n*fact(n-1);

}
else{
    return 1;
}
}
