//dynamic
#include<stdio.h>
#include<stdlib.h>
int* arr;
int size;
int front=-1;
int back=-1;

void enqueue(int val)
{
    if(back==size-1)
    {
        printf("queue overload\n");
        return;
    }

    back++;
    arr[back]=val;

    if(front==-1)
    {
        front++;
    }

}

int dequeue()
{
    if(front==-1 || front>back)
    {
           printf("empty queue\n");
           return;

    }
    int val=arr[front];
    front++;
    return val;

}

int peek()
{
     if(front==-1 || front>back)
    {
           printf("empty queue\n");
           return;

    }
    return arr[front];
}

void display()
{
     if(front==-1 || front>back)
    {
           printf("empty queue\n");
           return;

    }
    for(int i=front;i<=back;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }

}
int main()
{
     printf("enter max size\n");
    scanf("%d",&size);
    arr=(int*)malloc(size * (sizeof(int)));


    int val,choice;

    while(1)
    {
        printf("1.enqueue\n 2.dequeue\n 3.peek\n 4.display\n 5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:printf("enter no. to enqueue\n");
            scanf("%d",&val);
            enqueue(val);
            break;

            case 2:printf("dequeue no. is %d\n",dequeue());
            break;

            case 3:printf("front no. is %d\n",peek());
            break;

            case 4:display();
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
