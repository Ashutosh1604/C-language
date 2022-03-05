#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int Stack_arr[MAX];
int top=-1;

int isEmpty(){
if(top==-1)
return 1;

else
    return 0;
}

int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

void push(int item)
{
    if(isFull())
    {
        printf("Stack overflow\n");
        return;
    }
    else
    {
        top++;
        Stack_arr[top]=item;
    }
}



int pop()
{
    int item;
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        item=Stack_arr[top];
        top--;
        return item;
    }

}


int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }

    return Stack_arr[top];

}

void display()
{
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }

    for(int i=top;i>=0;i--)
    {
        printf("%d",Stack_arr[i]);
        printf("\n");
    }


}

int main()
{


    int choice,item;

    while(1)
    {
        printf("Enter 1 for push, 2 for pop, 3 for peek,4 for display and 5 to exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1: printf("Enter the item to be pushed: ");
        scanf("%d",&item);
        push(item);
        break;

        case 2: item=pop();
        printf("pop item is: %d\n",item);
        break;


        case 3: printf("top item is: %d\n",peek());
        break;

        case 4: display();
        break;

        case 5:exit(1);
            break;


        default:
            printf("wrong choice\n");
             break;

    }


    }

    return 0;
}
