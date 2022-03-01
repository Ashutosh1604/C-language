#include<stdio.h>
#define MAX 50

void find_unique(int a[],int b[],int n)
{
    int ctr=0;
    int freq[MAX];
    for(int i=0;i<n;i++)
    {
        srch_array(a[i],freq,b,&ctr);
    }

    printf("frequency of  elements of array\n");
     for(int i=0;i<ctr;i++)
        printf("%d %d\n",b[i],freq[i]);

}

int srch_array(int num,int freq[],int b[],int *ctr)
{
    for(int i=0;i<*ctr;i++)
        if(b[i]==num)
       {
        freq[i]=freq[i]+1;
        return 0;}

            b[*ctr]=num;
            freq[*ctr]=1;
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
