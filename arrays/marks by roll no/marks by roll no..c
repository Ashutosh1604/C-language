#include<stdio.h>
int main()
{
    int rollnum;
     int marks[]={65,50,43,78,93,68,98,56,76,43};

    printf("enter the roll number of student(1-10)\n");
    scanf("%d",&rollnum);

    printf("the marks of roll no. %d is %d\n",rollnum,marks[rollnum-1]);

    return 0;


}
