#include<stdio.h>
#include<stdlib.h>

struct queue{
int size;
int* arr;
int front;
int back;
};
void enqueue(struct queue* q,int val)
{
    if((q->front==0 && q->back==(q->size-1)) ||(q->front==q->back+1))
    {
        printf("queue overflow\n");
        return;
    }

    q->back=(q->back+1)%10;
    q->arr[q->back]=val;

    if(q->front==-1)
    {
        q->front++;
    }



}

void dequeue(struct queue* q)
{
    if(q->front==-1)
    {
        printf("queue is empty\n");
        return;
    }

    if(q->front==q->back)
    {
        q->front=-1;
        q->back=-1;
    }
    else{
        q->front=(q->front+1)%10;
    }

}


void display(struct queue* q)
{
     if(q->front==-1)
    {
        printf("queue is empty\n");
        return;
    }


    if(q->front<=q->back)
    {
        for(int i=q->front;i<=q->back;i++)
        {
            printf("%d ",q->arr[i]);
        }

    }
    else
    {
        for(int i=q->front;i<=q->size-1;i++)
        {
            printf("%d ",q->arr[i]);
        }


        for(int i=0;i<=q->back;i++)
        {

            printf("%d ",q->arr[i]);
        }
    }
             printf("\n");
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
        printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:printf("enter no. to enqueue\n");
            scanf("%d",&val);
            enqueue(q,val);
            break;

            case 2:dequeue(q);
            break;


            case 3:display(q);
            break;

            case 4:exit(1);
            break;

            default:
                printf("wrong choice\n");
                break;
        }


    }
    return 0;
}
