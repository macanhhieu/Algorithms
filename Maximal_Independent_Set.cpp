#include<bits/stdc++.h>

using namespace std;
struct node
{
	int data;
	int dp;
	struct node *left;
	struct node *right;
};
struct node* newNode(int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data= data;
	temp->left= temp->right = NULL;
	return temp;
}
int recur_LISS(struct node *root)
{
	if(root ==NULL)
	{
		return 0;
	}
	if(root->dp)
	{
		return root->dp;
	}
	
	if(root->left==NULL && root->right==NULL)
	{
		root->dp=1;
	}
	//if root is't LISS
	int size_excl = recur_LISS(root->left)+recur_LISS(root->right);
	int size_incl =1;
    if(root->right)
    {
    		size_incl+=(recur_LISS(root->right->right)+recur_LISS(root->right->left));
	}
	if(root->left)
	{
		size_incl+=recur_LISS(root->left->right)+recur_LISS(root->left->left);
	}
	root->dp = max(size_excl,size_incl);
	return root->dp;
	
}

int main()
{
	struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);
 
    printf ("Size of the Largest Independent Set is %d ", recur_LISS(root));
   
   return 0;
}

