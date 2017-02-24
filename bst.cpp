#include<iostream>
using namespace std;
class node
{
public:
	int element;
	node *left, *right;
	node()
	{	left=right=NULL;	}
	node(int x)
	{	element=x;
		left=right=NULL;
	}

};
class BST
{
public:
	node* root;
	BST()
	{	root=NULL;	}

	node* insert(node* t,int y)
	{
	//cout<<"\nRecursive Insert called\n";
	if(t==NULL)
	{
		t=new node(y);
		return t;
		}
	else
	{if (y>t->element)
		{ t->right=insert(t->right,y);}
		else 
		{t->left=insert(t->left,y);}
		return t;
	}
	}
	void non_rec_insert(int y)
	{
		cout<<"\nNon recursive insert called\n";
		int LR=0;
	 if (root==NULL)
	 { root=new node(y); }
	 else
	 {        node *p,* t=root;
		 node* temp=new node(y);
		 while (t!=NULL)
		 {
			 if (y>t->element)
			 { p=t;			
			  LR=1;		  
			   t=t->right;}
			 else
			 { p=t;
			  LR=0;
			   t=t->left; }
                     }
		 if (LR==1)
		  {		 p->right=temp;		 }
		 else
		  {		p->left=temp;		 }
	  }
	}
	void inorder(node* t)
		 {
			 cout<<"\t";
			 if (t!=NULL)
			 {
			 	inorder(t->left);
			 	cout<<t->element;
			 	inorder(t->right);
                               }
		 }
	bool search(node* t,int y)
	{   if (t==NULL) return 0;
		else if (t->element==y)
		return 1;
		else
		{
			if(y>t->element)
				return(search(t->right,y));
			else
				return(search(t->left,y));
		}
	}
	 bool isexternal(node* t)
	 {
		 if ((t->left==NULL)&& (t->right==NULL))
		 return 1;
		 else
		 return 0;
	 }
	void deletenode(node* r, int x)
	{	
		cout<<"\nDeleting a node\n";
		// case 1
		node *t=r,*pt=r;
		if((r->element==x) &&(r->left==NULL)&&(r->right==NULL))
		{
			root=NULL;
		          
		}
		else  
		{   while((t!=NULL)&&(t->element!=x))
			{
				if(x>t->element)
				{
					pt=t;
					t=t->right;
				}
				else
				{
					pt=t; 
					t=t->left;
				}
			}
		}
		
		if(t==NULL)
			{
			cout<<" \nElement not found\n";
			}
			else
			{					//case 2
				if((t->left==NULL)&&(t->right==NULL))
				{ if ((x>pt->element))
											
					pt->right=NULL;
				  else      				
					pt->left=NULL;
			}
			//case 3
		if((t->left!=NULL)&&(t->right==NULL))    
		{
		  if (t->element<pt->element)	
			pt->left=t->left;
		  else if (t->element>pt->element) 
			pt->right=t->left;
		}
		
		if((t->left==NULL)&&(t->right!=NULL))
		{
			if (t->element<pt->element) 	
				pt->left=t->right;
			else if(t->element>pt->element) 	 
				pt->right=t->right;
		}
		//case 4 
			if ((t->left!=NULL)&&(t->right!=NULL))
			{	node* pt=t, *t1;
				t1=t->right; // inorder successor
				while (t1->left!=NULL)
				{
						pt=t1;
						t1=t1->left;
				}
					t->element=t1->element;
					if(pt==t)
					         pt->right=t1->right;
					else
						pt->left=t1->right;
				}
			}
	}
};
int main()
{ 
	
	BST s;
	node *t=s.root;
	int z;
	while(1)
	{
		cout<<"\nEnter operation...1.INSERT 2.NON_RECURSIVE_INSERT 3.INORDER_DISPLAY 4.SEARCH 5.isEXTERNAL 6.DELETE 7EXIT\n";
		cin>>z;
		switch(z)
		{
			case 1:"Enter element to be inserted\n";
					cin>>z;
					s.insert(t,z); break;
			case 2:"Enter element to be inserted\n";
					cin>>z;
					s.non_rec_insert(z); break;
			case 3:"BST is\n";	s.inorder(t);
					break;
			case 4:{
					cout<<"Enter element\n";
					cin>>z;
					if(s.search(t,z)==0)
					{
						cout<<"Element not present\n";
					}
					else
					{
						cout<<"Element present\n";
					}
					break;}
			case 5: {
					cout<<"Enter element\n";
					cin>>z;
					node *temp2=new node(z);
					if(s.isexternal(temp2)==0)
					{
						cout<<"Element not external\n";
					}
					else
					{
						cout<<"Element external\n";
					}
					break;}
			case 6 :{ cout<<"Enter element\n";
					cin>>z;
					s.deletenode(t,z); break;}
			case 7:return (0);
					
					
		}
	}
//	s.non_rec_insert(1);
//	s.non_rec_insert(3);
//	z=s.search(t,3);
	
//	s.inorder(t);
//	s.deletenode(t,1);
//	s.inorder(t);
			
	return 0;
}



