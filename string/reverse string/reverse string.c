#include<stdio.h>
void reverse(char *str)
{int i=0;
    while(str[i]!='\0')
    {
        i++;

    }
    while(i>=0)
    {
        printf("%c",str[i]);
        i--;
    }
    str[i]='\0';

}
int main()
{
    int str="Welcome";
      printf("Ashutosh Dhyani G 20011470\n");

      printf("string :%s\n",str);
    reverse(str);

return 0;
}
