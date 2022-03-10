#include<stdio.h>
#include<stdlib.h>
#define max 50
int arr[max];
int front=-1;
int back=-1;

void enqueue_front(int val)
{
    if((front==0 && back==max-1) || (front=back+1))
    {
        printf("queue overload\n");
        return;
    }

    if(front==-1 && back==-1)
    {
        front++;
        back++;
        arr[front]=val;

    }
    else if(front==0)
    {
        front=max-1;
        arr[front]=val;
    }
    else{
        front--;
        arr[front]=val;
    }

}



void enqueue_back(int val)
{
    if((front==0 && back==max-1) || (front=back+1))
    {
        printf("queue overload\n");
        return;
    }

    if(front==-1 && back==-1)
    {
        front++;
        back++;
        arr[back]=val;

    }
    else{
    back=(back+1)%10;
    arr[back]=val;
    }

}

int getfront()
{
    if(front==-1 && back==-1)
    {
        printf("deque is empty\n");
        return;
    }
    else{
        return arr[front];
    }
}



int getback()
{
    if(front==-1 && back==-1)
    {
        printf("deque is empty\n");
        return;
    }
    else{
        return arr[back];
    }
}


void dequeue_front()
{
    if(front==-1 && back==-1)
    {
        printf("deque is empty\n");
        return;
    }
    else if(front==back)
    {
        printf("deleted element is %d:",arr[front]);
        front=-1;
        back=-1;
    }
    else
    {
        printf("deleted element is %d:",arr[front]);
        front=(front+1)%10;
    }

}



void dequeue_back()
{
    if(front==-1 && back==-1)
    {
        printf("deque is empty\n");
        return;
    }
    else if(front==back)
    {
        printf("deleted element is %d:",arr[back]);
        front=-1;
        back=-1;
    }
    else if(back==0)
    {
        printf("deleted element is %d:",arr[back]);
      back=max-1;
    }
    else{
        printf("deleted element is %d:",arr[back]);
      back--;
    }

}


void display()
{
     if(front==-1 && back==-1)
    {
        printf("deque is empty\n");
        return;
    }

    if(front<=back)
    {
        for(int i=front;i<=back;i++)
        {
            printf("%d ",arr[i]);
        }

    }
    else
    {
        for(int i=front;i<=max-1;i++)
        {
            printf("%d ",arr[i]);
        }


        for(int i=0;i<=back;i++)
        {

            printf("%d ",arr[i]);
        }
    }
             printf("\n");

}



int main()
{

    int choice;
    int val;
    while(1)
    {
        printf("1.Inserting the value from front\n");
        printf("2.inserting the value from back\n");
        printf("3.Retrieve the front value\n");
        printf("4.Retrieve the back value\n");
        printf("5.Deleting the value from front\n");
        printf("6.Deleting the value from back\n");
        printf("7.Display\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the value\n");
            scanf("%d",&val);
            enqueue_front(val);
            break;

        case 2:
            printf("Enter the value\n");
            scanf("%d",&val);
            enqueue_back(val);
            break;

        case 3:printf("the value of front is %d" ,getfront());
        break;

        case 4:printf("the value of back is %d" ,getback());
        break;

        case 5:dequeue_front();
        break;

        case 6:dequeue_back();
        break;

        case 7:display();
        break;

        }


    }
    return 0;
}
