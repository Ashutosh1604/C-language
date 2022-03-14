//circular linked list
#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};

//insert at first
struct node* InsertAtFirst(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;

    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }

      struct node* temp=head;

    while(temp->next!=head)
    {
     temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

//insert in between
struct node* InsertInBetween(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;

    int idx;
    printf("Enter the index where you want to insert\n");
    scanf("%d",&idx);

    struct node* temp=head;

    for(int i=0;i!=idx-1;i++)
    {
        temp=temp->next;
    }

    n->next=temp->next;
    temp->next=n;

    return head;
}

//insert at last
struct node* InsertAtLast(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;

    if(head==NULL)
    {
        head=n;
        n->next=n;
        return;
    }

    struct node* temp=head;

    while(temp->next!=head)
    {
     temp=temp->next;
    }

    temp->next=n;
    n->next=head;

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
    struct node* temp=head;
 while(temp->next!=head)
 {

     temp=temp->next;
 }
 temp->next=head->next;
 head=head->next;

 free(todelete);
return head;
}


//delete in between
struct node* DeleteInBetween(struct node* head)
{
     if(head==NULL)
    {
        printf("Linked list is full\n");
        return;
    }
    int idx;
    printf("Enter the index of node to delete\n");
    scanf("%d",&idx);
    struct node* temp=head;
    struct node* todelete=temp->next;

    for(int i=0;i!=idx-1;i++)
    {
        temp=temp->next;
        todelete=todelete->next;
    }
    temp->next=todelete->next;
    free(todelete);
    return head;
}


//delete at last
struct node* DeleteAtLast(struct node* head)
{
     if(head==NULL)
    {
        printf("Linked list is full\n");
        return;
    }

    struct node* temp=head;
    struct node* todelete=temp->next;

    while(todelete->next!=head)
    {
        todelete=todelete->next;
        temp=temp->next;

    }
    temp->next=head;
    free(todelete);
    return head;

}


//display linked list
void Display(struct node* head)
{
     if(head==NULL)
    {
        printf("Linked list is full\n");
        return;
    }

    struct node* temp=head;

    do
    {
        printf("%d",temp->data);
        printf("->");
        temp=temp->next;

    }while(temp!=head);
    printf("NULL\n");

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
            head=InsertAtFirst(head,val);
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
