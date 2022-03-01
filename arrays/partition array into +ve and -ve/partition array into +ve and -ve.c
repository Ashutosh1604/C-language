#include<stdio.h>
#define MAX 20
void pos_neg_part(int *,int *,int );
void print_part(int *,int );

int main()
{ int a[MAX]={10,-10,20,-20,30,-30,40,-40,50};
int b[MAX];

pos_neg_part(a,b,9);
print_part(b,9);
return 0;
}
void pos_neg_part(int *a,int *b,int N)
{
    int s=0;
    int e=N-1;

    for(int i=0;i<N;i++)
    {
        if(a[i]>0)
        {
            b[s]=a[i];
            s++;
        }
        else if(a[i]<0)
             {
            b[e]=a[i];
            e--;
        }
    }

}
void print_part(int *b,int N)
{
     for(int i=0;i<N;i++)
        printf("%d\n",b[i]);

}


