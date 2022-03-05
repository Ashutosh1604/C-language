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

void infixToPostfix(char infix[])
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;

    char postfix[max];
    int j=0;
    char x;
    for(int i=0;i<=strlen(infix)-1;i++)
    {

        if(isalnum(infix[i]))
        {
         postfix[j]=infix[i];
                j++;
        }
        else if(infix[i]=='(')
        {
            push(s,infix[i]);
        }
        else if(infix[i]==')')
        {
            while((x=pop(s))!='(')
            {
                postfix[j]=x;
                j++;
            }
        }
        else
        {
            while(prec(s->arr[s->top]) >= prec(infix[i]))
            {
                postfix[j]=pop(s);
                j++;
            }
            push(s,infix[i]);


        }
    }

    while(!isEmpty(s))
    {
        postfix[j]=pop(s);
        j++;

    }
    postfix[j]='\0';

    for(int i=0;i<=strlen(postfix)-1;i++)
    {
        printf("%c",postfix[i]);
    }





}
int main()
{
    char infix[max];
    printf("enter the expression\n");
    scanf("%s",infix);
    infixToPostfix(infix);
    return 0;
}


