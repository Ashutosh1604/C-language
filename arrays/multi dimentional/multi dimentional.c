#include<stdio.h>
int main()
{
    int rollnum;
    int marks[10][5]={
    {10,54,32,46,42},
    {15,74,56,42,21},
    {54,43,73,53,86},
    {47,47,95,48,44},
    {97,95,76,75,54},
    {64,52,53,84,86},
    {73,54,32,32,42},
    {56,54,75,32,42},
    {45,54,32,44,45},
    {75,86,37,42,42}
    };

printf("enter the roll number of the student(1-10)\n");
scanf("%d",&rollnum);

for(int j=0;j<5;j++)
printf("the marks of roll no. %d in subject %d is %d\n",rollnum,j+1,marks[rollnum-1][j]);
return 0;
}
