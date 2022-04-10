
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* left;
struct node* right;
};


int search(int inorder[],int start,int end,int currval)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==currval)
        {
            return i;
        }
    }
    return -1;
}
struct node* buildTree(int preorder[],int inorder[],int start,int end)
{
 static int idx=0; //to track treorder

    if(start>end)
    {
        return NULL;
    }
int currval=preorder[idx];
idx++;

//create node
struct node* n=(struct node*)malloc(sizeof(struct node));
n->data=currval;
n->left=NULL;
n->right=NULL;

if(start==end)
{
    return n;
}
int pos=search(inorder,start,end,currval);

n->left=buildTree(preorder,inorder,start,pos-1);
n->right=buildTree(preorder,inorder,pos+1,end);

return n;

}

void inorderPrint(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    printf("%d ",root->data);
    inorderPrint(root->right);
}
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    struct node* root=buildTree(preorder,inorder,0,4);
    inorderPrint(root);
}
