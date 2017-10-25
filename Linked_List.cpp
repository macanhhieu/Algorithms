#include<bits/stdc++.h>
using namespace std;
//Ctreating node
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node *node;// define a pointer have struct Node type
//inserting begin                
void Insert_Begin(node *p,int x)
{
	node q;
	q= (node)malloc(sizeof(struct Node));
	q->data =x;
	q->next =*p;
	*p=q;
}
void Insert_End(node *p,int x)
{
	node q,temp;
	temp = *p;
	(node)malloc(sizeof(struct Node));
	q->data = x;
	q->next =NULL;
	if(*p==NULL)
	{
		*p=q;
	}
	else
	{
		while(temp->next!=NULL){
		temp= temp->next;
	}
	temp->next = q;
	}
	
}
void Insert_Middle(node *p,int position,int x)
{
	node q,temp;
	int flag =0,count=0;
	temp = *p;
	while(temp!=NULL&&flag ==0){
		if(count==position)
		{
			q =(node)malloc(sizeof(struct Node));
			q->data= x;
			q->next= temp->next;
			temp->next=q;
			flag =1;
		}
		temp= temp->next;
		count++;
	}
	if(flag==0)
	{
		cout<<" Can't find the position to insert";
	}
	
}
// REMOVE
void Remove_Begin(node *p)
{
	node q;
	q = *p;
	*p = (*p)->next;
	q->next = NULL;
	free(q); 
	
}
void Remove_End(node *p)
{
	node q,temp;
	temp= *p;
	while(temp->next!=NULL){
		q= temp;
		temp = temp->next;
	}
	q->next = NULL;
	free(temp);
}
void Remove_Middle(node *p,int position)
{
	node q,temp;
	temp =*p;
	int flag =0,count=0;
	while(temp->next!=NULL&&flag==0){
		if(count==position)
		{
			q= temp->next;
			temp->next=q->next;
			free(q);
			flag =1;
		}
	}
	if(flag==0)
	{
		cout<<"Can't find the position to remove";
	}
	
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   node *p=NULL;
   int x;
   cin>>x;
   return 0;
}

