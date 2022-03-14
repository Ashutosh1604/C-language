#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};

//insert at first
struct node* insertAtFirst(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;

    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;

    return head;

}



//insert in between
    struct node*  insertInBetween(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;

    int idx;
    printf("enter the index where you want to insert\n");
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
void insertAtLast(struct node* head,int val)
{
     struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;


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



}


//delete at first
 struct node* deleteAtFirst( struct node* head)
 {

  if(head==NULL)
  {
      printf("empty");
      return;
  }

   struct node* todelete=head;
   head=head->next;
   free(todelete);

   return head;
 }


 //delete in between
  struct node* deleteInBetween( struct node* head)
  {

  if(head==NULL)
  {
      printf("empty");
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
  void deleteAtLast( struct node* head)
  {
   if(head==NULL)
   {
       printf("empty\n");
       return;
   }
    struct node* temp=head;
    struct node* todelete=temp->next;

    while(todelete->next!=NULL)
    {
        todelete=todelete->next;
        temp=temp->next;
    }

    temp->next=NULL;
    free(todelete);


  }



  //display
  void Display( struct node* head)
  {
      if(head==NULL)
      {
          printf("empty\n");
          return;
      }

       struct node* temp=head;

       while(temp!=NULL)
       {
           printf("%d",temp->data);
           printf("->");
           temp=temp->next;
       }
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
            case 1:printf("enter the value to insert at first\n");
            scanf("%d",&val);
            head=insertAtFirst(head,val);
            break;

            case 2:printf("enter the value to insert in between\n");
            scanf("%d",&val);
            head=insertInBetween(head,val);
            break;

            case 3:printf("enter the value to insert at last\n");
            scanf("%d",&val);
            insertAtLast(head,val);
            break;

            case 4:head=deleteAtFirst(head);
            break;

            case 5:head=deleteInBetween(head);
            break;

            case 6:deleteAtLast(head);
            break;

            case 7:Display(head);
            break;

            case 8:exit(1);
            break;







        }
    }

}
