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
}

//preorder traversal
void preorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

//inorder traversal
void inorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
//postorder traversal
void postorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
int main()
{
    struct node* p=createNode(4);
    struct node* p1=createNode(1);
    struct node* p2=createNode(6);
    struct node* p3=createNode(5);
    struct node* p4=createNode(2);


    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    //preorder(p);
    inorder(p);
    //postorder(p);
}
