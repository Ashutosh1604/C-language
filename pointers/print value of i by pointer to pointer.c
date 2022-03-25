#include<stdio.h>
int main(){

int i=5;
int *ptr;
int **ptr2;

ptr=&i;
ptr2=&ptr;

printf("the value of i is %d\n",**ptr2);
return 0;

}
