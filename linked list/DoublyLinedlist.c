//doubly LL
#include<stdio.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

//insert at first
struct node* InsertAtFirst(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    n->prev=NULL;

    if(head==NULL)
    {
        head=n;
        return;
    }
        n->next=head;
        head->prev=n;
        head=n;


    return head;
}

//insert in between
struct node* InsertInBetween(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    n->prev=NULL;

    int idx;
    printf("Enter the index where you want to insert\n");
    scanf("%d",&idx);

    struct node* temp=head;

    for(int i=0;i!=idx-1;i++)
    {
        temp=temp->next;
    }

    n->next=temp->next;
    n->prev=temp;
    n->next->prev=n;
    temp->next=n;
    return head;
}

//insert at last
struct node* InsertAtLast(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    n->prev=NULL;

    if(head==NULL)
    {
        head=n;
        return;
    }

    struct node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    return head;


}


//delete at first
struct node* DeleteAtFirst(struct node* head)
{
    if(head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    struct node* todelete=head;
    head=head->next;
    head->prev=NULL;
    free(todelete);
    return head;

}


//delete in between
struct node* DeleteInBetween(struct node* head)
{
     if(head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    int idx;
    printf("Enter the index of node to delete\n");
    scanf("%d",&idx);

    struct node* todelete=head;

    for(int i=0;i!=idx;i++)
    {
        todelete=todelete->next;
    }
    todelete->prev->next=todelete->next;
    todelete->next->prev=todelete->prev;
    free(todelete);
    return head;
}


//delete at last
struct node* DeleteAtLast(struct node* head)
{
     if(head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }


    struct node* todelete=head;

    while(todelete->next!=NULL)
    {
        todelete=todelete->next;

    }
    todelete->prev->next=NULL;
    free(todelete);
    return head;

}


//display linked list
void Display(struct node* head)
{
     if(head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("->");
        temp=temp->next;

    }
   // printf("NULL\n");

}
int main()
{
    int ch;
    int val;
    struct node* head=NULL;

    while(1)
    {
       printf("press 1 for insertion at first\n");
        printf("press 2 for insertion in between\n");
        printf("press 3 for insertion at last\n");
        printf("press 4 for deletion at first\n");
        printf("press 5 for deletion in between\n");
        printf("press 6 for deletion at last\n");
        printf("press 7 for display\n");
        printf("press 8 to exit\n");

        printf("enter your choice\n");
        scanf("%d",&ch);

        switch(ch)
        {

            case 1:printf("Enter the value to insert at first\n");
            scanf("%d",&val);
            head=InsertAtFirst(&head,val);
            break;

            case 2:printf("Enter the value to insert in between\n");
            scanf("%d",&val);
            head=InsertInBetween(head,val);
            break;

            case 3:printf("Enter the value to insert at last\n");
            scanf("%d",&val);
            head=InsertAtLast(head,val);
            break;


            case 4:head=DeleteAtFirst(head);
            break;

            case 5:head=DeleteInBetween(head);
            break;

            case 6:head=DeleteAtLast(head);
            break;

            case 7:Display(head);
            break;

            case 8:exit(1);
            break;

        }

    }
    return 0;

}
