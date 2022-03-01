#include<stdio.h>
#define MAX 20
void read_array(int *,int );
void count_array(int *,int ,int );

int main()
{
int a[MAX];
int N;
int k;

printf("enter the no. of elements?\n");
scanf("%d",&N);

read_array(a,N);

printf("enter the value of k\n");
scanf("%d",&k);


count_array(a,N,k);

return 0;
}
void read_array(int *a,int N)
{
    printf("enter %d no. in array \n",N);
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);

}
void count_array(int *a,int N,int k)
 {
     int cgreat=0,cless=0,cequal=0;

      for(int i=0;i<N;i++){

        if(a[i]>k)
        cgreat++;
         else if(a[i]<k)
          cless++;
       else if(a[i]==k)
            cequal++;
      }
            printf("greater count: %d\n lesser count: %d\n equal count: %d\n ",cgreat,cless,cequal);


 }

