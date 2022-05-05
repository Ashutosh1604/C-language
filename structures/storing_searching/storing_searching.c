#include<stdio.h>
#include<string.h>
typedef struct mobile{
char brand[50];
int quan;
double price;

}store;


store read()
{ store s;
printf("mobile brand:\n");
scanf("%s",s.brand);
printf("quantity:\n");
scanf("%d",&(s.quan));
printf("price\n");
scanf("%s",&(s.price));
return s;
}
store search(store b)
{
    char n[50];
    printf("enter the brand name you want to search\n");
    scanf("%s",n);

    if(strcmp(n,b.brand)==0)
    {

        printf("stock in hand:%d",b.quan);
        printf("total cost:%d",(b.price)*(b.quan));
    }
    printf("\n");

}

int main()
{int ch;
int ct=0;
store m[100];
int j=0;
    printf("1.storing\n 2.searching\n 3.exit\n");


while(1)
{
printf("enter your choice\n");
  scanf("%d",&ch);
  if(ch==1)
  {
      m[j]=read();
      j++;
  }
  else if(ch==2)
  {
      search(m[ct]);
      ct++;
  }
  else
    return 0;
}
}
