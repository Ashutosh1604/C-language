//-+7*45+20
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define max 20

struct stack{
int arr[max];
int top;

};

void push(struct stack* s,int val)
{
    if(s->top==max-1)
    {
        printf("stack is full\n");
        return;
    }
    else{
      s->top++;
      s->arr[s->top]=val;

    }

}

int pop(struct stack* s)
{
    if(s->top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    else{
        int val=s->arr[s->top];
        s->top--;
        return val;
    }
}

int prefixEvaluation(char exp[])
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    int i=strlen(exp)-1;
    while(i>=0)
    {
        if(isdigit(exp[i]))
        {
            push(s,exp[i]-'0');
        }
        else{
            int op1=pop(s);
            int op2=pop(s);

            switch(exp[i])
            {
                case '+':push(s,op1 + op2);
                break;

                case '-':push(s,op1 - op2);
                break;

                case '*':push(s,op1 * op2);
                break;

                case '/':push(s,op1 / op2);
                break;

                  case '^':push(s,pow(op1,op2));
                break;

            }


            }
            i--;
        }
 return pop(s);

    }




int main()
{
        char exp[20];
    printf("Enter the expression\n");
    scanf("%s",&exp);

    printf("The result of expression %s is :%d",exp,prefixEvaluation(exp));
}
