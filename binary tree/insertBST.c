#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;


};

struct node* InsertBST(struct node* root,int val)
{
    if(root==NULL)
    {
       struct node* n=(struct node*)malloc(sizeof(struct node));
       n->data=val;
       n->left=NULL;
       n->right=NULL;
       return n;
    }

    if(val<root->data)
    {
        root->left=InsertBST(root->left,val);
    }
    else{
        root->right=InsertBST(root->right,val);
    }

    return root;
}

void inorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main()
{

struct node* root=NULL;
root=InsertBST(root,5);
 InsertBST(root,1);
 InsertBST(root,3);
 InsertBST(root,4);
 InsertBST(root,2);
 InsertBST(root,7);

 inorder(root);
}

