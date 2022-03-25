#include<stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg){
 *sum=a+b;
 *avg= (float)(*sum)/2;

}

int main()
{
    int i,j, sum;
    float avg;
    i=3;
    j=6;
    sumAndAvg(i,j,&sum,&avg);
    printf("the value of sum is %d \n",sum);
    printf("the value of avg is %.2f \n",avg);



}
