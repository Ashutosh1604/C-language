#include<stdio.h>
#include<string.h>

typedef struct telephone
{
    char name[50];
    long int num;
    char city;
}phone;

int main(){

phone s[100];
int n;
printf("how many names you want to enter\n");
printf("enter limit\n");
scanf("%d",&n);

for(int i=0;i<n;i++)
{
    printf("enter details of student %d\n",i+1);
    printf("name:\n");
    gets(s[i].name);
    printf("number:");
    scanf("%ld",&s[i].num);
    printf("city:");
    gets(s[i].city);
}
printf("unsorted list:\n");
for(int i=0;i<n;i++)
{
printf("name:%s\n number:%ld\n city:%s\n",s[i].name,&s[i].num,s[i].city);
}

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(strcmp(s[i].name,s[j].name)>0)
        {
            phone temp=s[i];
            s[i]=s[j];
            s[j]=temp;

        }
    }
}
printf("sorted\n");
for(int i=0;i<n;i++)
{
printf("name:%s\n number:%ld city:%s",s[i].name,&s[i].num,s[i].city);
}


}
