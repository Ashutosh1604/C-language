#include<stdio.h>
#include<stdlib.h>
struct queue{
int* arr;
int size;
int front;
int back;
};

void enqueue(struct queue* q,int val)
{
    if(q->back==q->size-1)
    {
        printf("queue overload\n");
        return;
    }
    q->back++;
    q->arr[q->back]=val;

    if(q->front==-1)
    {
        q->front++;
    }
}

int dequeue(struct queue* q)
{
    if(q->front==-1 || q->front>q->back)
    {
         printf("empty queue\n");
           return;

    }
    int val=q->arr[q->front];
    q->front++;
    return val;
}

int peek(struct queue* q)
{
     if(q->front==-1 || q->front>q->back)
    {
           printf("empty queue\n");
           return;

    }
    return q->arr[q->front];
}

void display(struct queue* q)
{
     if(q->front==-1 || q->front>q->back)
    {
           printf("empty queue\n");
           return;

    }
    for(int i=q->front;i<=q->back;i++)
    {
        printf("%d",q->arr[i]);
        printf("\n");
    }

}
int main()
{
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    q->size=50;
    q->front=-1;
    q->back=-1;
    q->arr=(int*)malloc(q->size * sizeof(int));

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
            enqueue(q,val);
            break;

            case 2:printf("dequeue no. is %d\n",dequeue(q));
            break;

            case 3:printf("front no. is %d\n",peek(q));
            break;

            case 4:display(q);
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
