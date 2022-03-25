#include<stdio.h>

int main()
{short num;

while(1)
{
printf("guess the lucky no. between 1 - 15\n");
scanf("%d",&num);

if(num==8)
break;
}
printf("Good you have guessed the correct number\n");
return 0;

}
