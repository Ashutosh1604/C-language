#include<stdio.h>
#define row 20
#define col 10

 void read_array(int a[row][col],int r ,int c)

{   printf("enter %d rows and %d column\n",r ,c);
     for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{

    scanf("%d",&a[i][j]);
}
}
}

void sum_row(int a[row][col],int r,int c)
{
    int i,j,sum=0;
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
      {
        printf("%d ",a[i][j]);
        sum=sum+a[i][j];

 }
printf("=> row %d sum is %d\n",i+1,sum);
sum=0;
}

}


int main()
{
    int a[row][col];
    int r, c;
    printf("enter the no. of rows and column\n");
    scanf("%d %d",&r,&c);

    read_array(a,r ,c);

 sum_row( a, r, c);

}
