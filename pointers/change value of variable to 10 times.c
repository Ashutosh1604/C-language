#include<stdio.h>
int change(int *ptr);
int main()
{int a;
a=5;
printf("the value of a before change is %d \n",a);
printf("the value of a after change is %d \n",change(&a));
return 0;
}
int change(int *ptr){
int c;
c=*ptr *10;
return c;


}

