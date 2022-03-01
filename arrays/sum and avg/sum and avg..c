#include<stdio.h>
#define MAX 20

int main()
{
int a[MAX];
int N;

printf("enter the no. of elements?\n");
scanf("%d",&N);

read_array(a,N);
sumAndAvg(a,N);

}
void read_array(int *a,int N)
{
    printf("enter %d no. in array \n",N);
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);

}
sumAndAvg(int *a,int N)
{
    int sum=0;
      for(int i=0;i<N;i++)
        sum=sum + a[i];

    printf("sum of elements is %d and average is %d\n",sum,sum/N);

        }
