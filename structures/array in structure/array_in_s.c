#include<stdio.h>
#define MAX 100

typedef struct student_rec
{
char name[MAX];
float marks;

}student;

student read_rec(int i){
student std;
printf("the name and marks of student %d is\n",i+1);
scanf("%s\n %f",std.name,&std.marks);
return(std);

}
student print_rec(student item){

printf("name:%s \n marks:%.2f\n",item.name,item.marks);



}

int main(){
int nos;
student class[MAX];
int i;
printf("how many students\n");
scanf("%d",&nos);
for(int i=0;i<nos;i++)
{
class[i]=read_rec(i);
}
printf("class list:");
for(int i=0;i<nos;i++)
{
class[i]=print_rec(class[i]);
}
}
