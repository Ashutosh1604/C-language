#include<stdio.h>
#define MAX 20

void read_array(int *,int);
void large_small_array(int *,int );

int main()
{
int a[MAX];
int N;

printf("element in the array?\n");
scanf("%d",&N);

read_array(a,N);
large_small_array(a,N);

return 0;
}
void read_array(int *x,int N)
{
   printf("enter %d elements in array\n",N);
   for(int i=0;i<N;i++)
    scanf("%d",&x[i]);
}
void large_small_array(int *x,int N)
{
int large=x[0];
int small=x[0];

 for(int i=0;i<N;i++)
 {

 if(x[i]>large)
 {
     large=x[i];
 }
 if(x[i]<small)
 {
     small=x[i];
 }
 }
   printf("largest is %d and smallest is %d\n",large,small);

}



