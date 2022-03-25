#include<stdio.h>
int main()
{
    int a;
    a=5;
    int *ptr;
    ptr=&a;
    printf("adress of variable a is %u\n",ptr);
    printf("the value of variable a is %d\n",*ptr);
    return 0;

}
