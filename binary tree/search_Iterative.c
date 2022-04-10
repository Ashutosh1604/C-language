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

struct node* searchItr(struct node* root,int key)
{
 while(root!=NULL)
 {
     if(key==root->data)
     {
         return root;
     }
     else if(key < root->data)
     {
         root=root->left;
     }
     else{
        root=root->right;
     }

 }
 return NULL;
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

 struct node* n=searchItr(root,2);
if(n!=NULL)
{
    printf("\nfound: %d",n->data);
}
else{
    printf("\nelement not found\n");
}
return 0;
}

