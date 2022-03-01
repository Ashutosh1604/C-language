#include<stdio.h>
#define MAX 20
void read_array(int *,int );
 void second_largest_array(int *,int );

int main()
{ int a[MAX];
  int N;

  printf("no. of elements in array?\n");
  scanf("%d",&N);

  read_array(a,N);

   second_largest_array(a,N);
  return 0;
}
void read_array(int *a,int N)
{
    printf("enter the %d elements in array\n",N);
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);

}
 void second_largest_array(int *a,int N)
 {
     int large,slarge;

     if(a[0]>a[1])
     {
         large=a[0];
         slarge=a[1];
     }
       else if(a[0]<a[1])
     {
         large=a[1];
         slarge=a[0];
     }
     for(int i=2;i<N;i++)
     {  if(a[i]>large)
     {
         slarge=large;
         large=a[i];

     }
     else if(a[i]>slarge)
     {

         slarge=a[i];
     }

     }
     printf("the second largest no. is %d",slarge);
 }
