#include<stdio.h>
#define MAX 50
void read_array(int*,int );
void print_array(int*,int );
int main()
{
 int a[MAX];
 int N;
 printf("no. of elements into array?\n");
 scanf("%d",&N);
 read_array(a,N);
 print_array(a,N);

}
void read_array(int*x,int N){
    printf("enter the elements of array\n");
    for(int i=0;i<N;i++)
        scanf("%d",&x[i]);
}
void print_array(int*x,int N){

printf(" printing %d elements from array\n",N);

    for(int i=0;i<N;i++)
        printf("%d",x[i]);

}
