#include<stdio.h>
#define MAX 20
void read_array(int *,int );
void srch_array(int *,int ,int);

int main()
{
int a [MAX];
int N;
int srch_num;

printf("no. of elements in array?\n");
scanf("%d",&N);

read_array(a,N);

printf("enter the no. you want to search in array\n");
scanf("%d",&srch_num);
srch_array(a,N,srch_num);

return 0;
}

void read_array(int *x,int N){
printf("enter the %d elements into array\n",N);

for(int i=0;i<N;i++)
    scanf("%d",&x[i]);

}

void srch_array(int *x,int N,int srch_num)
{
    for(int i=0;i<N;i++)
    if( x[i] == srch_num )
    {
        printf("search no. %d found at %d location\n",srch_num,i+1);
        return 0;
    }
    printf("search no. %d not found\n",srch_num);

    return -1;
}
