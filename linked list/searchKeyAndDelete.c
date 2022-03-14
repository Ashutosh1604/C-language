#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};

struct node* insertAtLL(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;

    if(head==NULL)
    {
        head=n;
        return;
    }
    struct node*  temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    return head;

}

void display(struct node* head)
{
    struct node* temp=head;

    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("->");
        temp=temp->next;
    }
    printf("NULL\n");


}

struct node* deleteKey(struct node* head,int key)
{
    struct node* temp=head;

    if(temp->data==key)
    {
        head=head->next;
        free(temp);
        return head;
    }

    while(temp->next->data!=key)
    {
        temp=temp->next;
    }
    struct node* todelete=temp->next;
    temp->next=todelete->next;
    free(todelete);

    return head;


}
int main()
{
    struct node*  head=NULL;

    head=insertAtLL(head,1);
    head=insertAtLL(head,2);
    head=insertAtLL(head,3);
    head=insertAtLL(head,4);
    head=insertAtLL(head,5);

    display(head);

    int key;
    scanf("%d",&key);

    head=deleteKey(head,key);
    display(head);
}
