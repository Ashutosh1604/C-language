#include<stdio.h>
#include<stdlib.h>
#define max 20
struct stack
{
    int arr[max];
    int top;
};

void push(struct stack* s,int val)
{
    if(s->top==max-1)
    {
        printf("full\n");
        return;
    }
    s->top++;
    s->arr[s->top]=val;
}

int pop(struct stack* s)
{
    if(s->top==-1)
    {
        printf("empty\n");
        return;
    }
    int val=s->arr[s->top];
    s->top--;
    return val;
}

int peek(struct stack* s)
{
     if(s->top==-1)
    {
        printf("empty\n");
        return;
    }
    return s->arr[s->top];

}

void display(struct stack* s)
{
     if(s->top==-1)
    {
        printf("empty\n");
        return;
    }
    for(int i=s->top;i>-1;i--)
    {
        printf("%d \n",s->arr[i]);
    }

}

int main()
{
  struct stack* s=(struct stack*)malloc(sizeof(struct stack));
  s->top=-1;

  int ch,val;

  while(1)
  {
      printf("1-push\n 2-pop\n 3-peek\n 4-display\n 5-exit\n");
      printf("enter your choice\n");
      scanf("%d",&ch);

      switch(ch)
      {
          case 1:printf("enter the val to push\n");
          scanf("%d",&val);
          push(s,val);
          break;

          case 2:printf("the popped value is %d\n",pop(s));
          break;

          case 3:printf("the top value is %d \n",peek(s));
          break;


          case 4:display(s);
          break;

          case 5:exit(1);
          break;
      }
  }

}
