#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    int j;
    int length=0;
     printf("Ashutosh Dhyani G 20011470\n");
    printf("inter any string\n");
    gets(str);

while(str[i]!='\0')
    {length++;
        i++;
    }
     i=0;
    j=length-1;
    while(i<=length/2)
    {if(str[i]==str[j])
        {i++;
            j--;
        }
        else
            break;}

    if(i>=j)
    {
        printf("string is pallindrome\n");

    }
else
     printf("string is not a pallindrome\n");
return 0;
}

