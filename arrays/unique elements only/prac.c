#include<stdio.h>
#define MAX 50

void find_unique(int a[],int b[],int n)
{
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        srch_array(a[i],b,&ctr);
    }

    printf("unique elements are\n");
     for(int i=0;i<ctr;i++)
        printf("%d",b[i]);

}

int srch_array(int num,int b[],int *ctr)
{
    for(int i=0;i<*ctr;i++)
        if(b[i]==num)
         return 1;

            b[*ctr]=num;
            *ctr=*ctr+1;
            return 0;
}

int main()
{
    int a[MAX],b[MAX];
    int n;

    printf("enter the size of array a\n");
    scanf("%d",&n);

    //read array
    printf("enter the %d elements in array a\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    find_unique(a,b,n);

}
