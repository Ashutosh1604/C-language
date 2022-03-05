//paranthesis matching
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



int match(char a,char b)
{
    if(a=='{' && b=='}')
        {
            return 1;
        }

        if(a=='(' && b==')')
        {
            return 1;
        }

        if(a=='[' && b==']')
        {
            return 1;
        }

        return 0;
}


int paranthesisMatch(char* exp)
{

    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=50;
    s->top=-1;
    s->arr=(char *)malloc(s->size*sizeof(char));
    char popped_ch;

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        {
            push(s,exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(isEmpty(s))
            {
                return 0;
            }
            popped_ch=pop(s);
            if(!match(popped_ch,exp[i]))
            {
                return 0;
            }
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

    char* exp="{([(8)(9-8)])}";
    if(paranthesisMatch(exp)){

        printf(" the paranthesis is matching");
    }
    else{

        printf(" the paranthesis is not matching");
    }

    return 0;
}

