//(a-b/c)*(a/k-l)
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 50

struct stack{
char arr[max];
int top;
};

int isEmpty(struct stack* s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}

void push(struct stack* s,char val)
{
    if(s->top==max-1)
    {
        return;
    }
    s->top++;
    s->arr[s->top]=val;
}

int pop(struct stack* s)
{
    if(isEmpty(s))
    {
        return;
    }
    int val=s->arr[s->top];
    s->top--;
    return val;

}

int prec(char ch)
{
    if(ch=='^')
        return 3;
    else if((ch=='/') || (ch=='*'))
        return 2;
   else if((ch=='+') || (ch=='-'))
        return 1;
    else
        return 0;

}


void infixToPrefix(char infix[])
{
     struct stack* s=(struct stack*)malloc(sizeof(struct stack));
     s->top=-1;

    char prefix[max];
    int j=0;
    char x;

    for(int i=strlen(infix)-1;i>=0;i--)
    {

        if(isalnum(infix[i]))
        {
         prefix[j]=infix[i];
                j++;
        }
        else if(infix[i]==')')
        {
            push(s,infix[i]);
        }
        else if(infix[i]=='(')
        {
            while((x=pop(s))!=')')
            {
                prefix[j]=x;
                j++;
            }
        }
        else
        {
            while(prec(s->arr[s->top]) >= prec(infix[i]))
            {
                prefix[j]=pop(s);
                j++;
            }
            push(s,infix[i]);


        }
    }

    while(!isEmpty(s))
    {
        prefix[j]=pop(s);
        j++;

    }
    prefix[j]='\0';

    for(int i=strlen(prefix)-1;i>=0;i--)
    {
        printf("%c",prefix[i]);
    }





}
int main()
{
    char infix[max];
    printf("enter the expression\n");
    scanf("%s",infix);
    infixToPrefix(infix);
    return 0;
}
