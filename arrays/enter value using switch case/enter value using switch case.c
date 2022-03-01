#include<stdio.h>
#define MAX 10
void read_array(int *,int );
void switch_array(int ,int *,int );
 void print_array(int *,int );
int main()
{ int a[MAX];
int n;
int R;
printf("enter the size of array\n");
scanf("%d",&n);
read_array(a,n);

printf("enter the value for replacing:\n",R);
scanf("%d",&R);
switch_array(R,a,n);
print_array(a,n);

return 0;

}
 void read_array(int *a,int n)
{
printf("enter the values of array:\n");
for(int i=0;i<n;i++)
{
    printf("enter the value at location %d:",i+1);
    scanf("%d",&a[i]);
}
}
 void switch_array(int R,int *a,int n)
{
    int ch;
    int y;
    printf("first location(1)\n last location(2)\n any location(any)\n enter your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:a[0]=R;
        break;
        case 2:a[n-1]=R;
        break;
        default:printf("enter the location between 1 and %d\n",n);
        scanf("%d",&y);
        a[y-1]=R;
        }
}
 void print_array(int *a,int n)
{
    printf("new array:\n");
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
}
