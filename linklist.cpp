#include<iostream>
using namespace std;
struct node {
	int data;
	struct node *link;
	
};

void insert(struct node** p,int d)                       //INSERT ELEMENTS IN LINKLIST
{  struct node *t,*r;
	if(*p==NULL)
	{ t=new struct node;
	  t->data=d;
	  t->link=NULL;
	  *p=t;
		
	}
	
	else{
		t=*p;
		while(t->link!=NULL)
		t=t->link;
		r=new struct node;
		r->data=d;
		r->link=NULL;
		t->link=r;
	}
}

void display(struct node *p)                         //DISPLAY LINKLIST
{
	while(p!=NULL)
	 {
	 	cout<<p->data<<" ";
	 	p=p->link;
	 }
	 
}

int del(struct node **p,int x)                   //DELETE AN ELEMENT
{   int f=0;
	struct node *t,*y;
	t=*p;
	y=*p;
	
	if(t->data==x)
	{*p=t->link;
	 return 0;
	}
	while(1)
	{ t=t->link;
		if(t->data==x)
		{y->link=t->link;
		 break;
			
		}
		if(t->link==NULL)
		{cout<<"\nNot found!!!";
		 break;
		}
		
		y=y->link;
	}
}


int main()
{   node *ptr;
    ptr=NULL;
	int n,i,data;
	cout<<"\nEnter no of data:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter data :";
		cin>>data;
		insert(&ptr,data);
		
	}
	
	cout<<"\nLinked List :";
	display(ptr);
	int x;
	cout<<"\nWhich element to delete : ";
	cin>>x;
	del(&ptr,x);
	cout<<"\nUpdated Linked List : ";
	display(ptr);
	return 0;
	
}
