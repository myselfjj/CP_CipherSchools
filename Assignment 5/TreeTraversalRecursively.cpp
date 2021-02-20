#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int idata)
{
    struct node* node=new struct node;
    node->data=idata;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void preorder(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
void postorder(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    preorder(node->left);
    preorder(node->right);
    cout<<node->data<<" ";
}
void inorder(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    preorder(node->left);
    cout<<node->data<<" ";
    preorder(node->right);
}
int height(struct node* node)
{
    if(node==NULL)
    return 0;
    else{
    int lh=height(node->left);
    int rh=height(node->right);
    if(lh>rh)
    return lh+1;
    else 
    return rh+1;
    }

}
void levelorder(struct node* node, int i=0)
{
    int h=height(node);
    for(i=1;i<=h;i++)
    {
        if(node == NULL)
        return;
        if(i==1)
        cout<<node->data<<" ";
        else if(i>1){
            levelorder(node->left, i-1);
            levelorder(node->right, i-1);
        }
    }

}

int main()
{
    struct node* root=newNode(9);
    root->left=newNode(8);
    (*root).right=newNode(3);
    root->left->left=newNode(5);
    cout<<"Preorder - ";
    preorder(root);
    cout<<"Postorder - ";
    postorder(root);
    cout<<"Inorder - ";
    inorder(root);
    cout<<"Level Order - ";
    levelorder(root);
    //cout<<root->left->left->data;

    return 0;
}
