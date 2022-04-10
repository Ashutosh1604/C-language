#include<stdio.h>
int fibo(int i);
int main()
{
    int n,i,f;
    printf("enter no. of terms\n");
    scanf("%d",&n);
for(i=0;i<=n;i++){
f=fibo(i);
printf("%d",fibo(i));
}
}
int fibo(int i){

if(i==1||i==0){
return i;
}
else {
    return fibo(i-1)+fibo(i-2);
}
}
