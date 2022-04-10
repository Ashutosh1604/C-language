#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("enter no. of term\n");
    scanf("%d",&n);
s=sum(n);
printf("sum of n natural no. is %d",s);
}

int sum(int n){

if(n>0){
    return n+sum(n-1);
}
    else{
        return 0;
    }

}

