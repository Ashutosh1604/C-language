#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* left;
struct node* right;
};

struct node* createNode(int val)
{
 struct node* n=(struct node*)malloc(sizeof(struct node));
 n->data=val;
 n->left=NULL;
 n->right=NULL;

 return n;
}
int main()
{
    struct node* p=createNode(2);
    struct node* p1=createNode(1);
    struct node* p2=createNode(4);


    p->left=p1;
    p->right=p2;

    return 0;
}
