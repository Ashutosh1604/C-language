#include<stdio.h>

struct student_info{
char student_name[50];
int student_id;
char section;
long contact_num;
};

struct bank_info{
char holder_name[50];
long account_num;
char ifsc[12];
char acc_type[10];
};

int main()
{  printf("Ashutosh Dhyani_G_20011470\n");
    struct student_info student;

    printf("\nEnter the student information:\n");
    scanf( "\n%s %d %c %ld",student.student_name,&student.student_id,&student.section,&student.contact_num);

    printf("\nStudent Data:\n");
    printf("name: %s\n id: %d\n section: %c\n contact no.: %ld\n",student.student_name,student.student_id,student.section,student.contact_num);

    struct bank_info bank;

    printf("\nEnter the bank information:\n");
    scanf("\n%s %ld %s %s",bank.holder_name,&bank.account_num,bank.ifsc,bank.acc_type);

    printf("\nStudent Data:\n ");
    printf("name: %s\n account no.: %ld\n ifcs: %s\n account type: %s\n",bank.holder_name,&bank.account_num,bank.ifsc,bank.acc_type);

return 0;
}
