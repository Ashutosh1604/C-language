#include<stdio.h>
#include<stdlib.h>

struct stack{

int size;
int top;
char* arr;

};

int isEmpty(struct stack* s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}

int isFull(struct stack* s)
{
    if(s->top==s->size-1)
        return 1;
    else
        return 0;


}

void push(struct stack* s,int item)
{
    if(isFull(s))
    {
        printf("Stack overflow\n");
        return;
    }
    else
    {
        s->top++;
        s->arr[s->top]=item;
    }
}



int pop(struct stack* s)
{
    int item;
    if(isEmpty(s))
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        item=s->arr[s->top];
        s->top--;
        return item;
    }

}

int paranthesisMatch(char* exp)
{

    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=50;
    s->top=-1;
    s->arr=(char *)malloc(s->size*sizeof(char));

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(s,exp[i]);
        }
        else if(exp[i]==')')
        {
            if(isEmpty(s))
                return 0;
            else
                pop(s);
        }
    }

    if(isEmpty(s))
    {
        return 1;

    }
    else{
        return 0;
    }
}

int main()
{

    char* exp="(8*(9))";
    if(paranthesisMatch(exp)){

        printf(" the paranthesis is matching");
    }
    else{

        printf(" the paranthesis is not matching");
    }

    return 0;
}
