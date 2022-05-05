#include<stdio.h>

struct employee{
char name[50];
char code[10];
char Dob[20];
int salary;
};

void print_info(struct employee emp)
{
    printf("ABC Corporation\n");
    printf(" Name : %s\n EmpCode : %s\n DOB : %s\n Nett.salary: %d\n",emp.name,emp.code,emp.Dob,emp.salary);
}
int main()
{
    printf("Ashutosh Dhyani_G_20011470\n");
    struct employee emp;
    printf("Enter the employee name:\n");
    gets(emp.name);
    printf("Enter the employee code:\n");
    gets(emp.code);
    printf("Enter the employee DOB:\n");
    gets(emp.Dob);
    printf("Enter the employee salary:\n");
    scanf("%d",&emp.salary);



    print_info(emp);
    return 0;

}
