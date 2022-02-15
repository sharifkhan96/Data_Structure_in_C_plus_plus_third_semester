#include <iostream>
using namespace std;

struct node{
	
	int data;
	node *next;
	
}*head;	

void LLappend(int item)
{
	
	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	
	if(head == NULL)
	{
		
		head = tmp;
		
	}else{
		
		node *trvlr = head;
		while(trvlr -> next != NULL)
		{
			trvlr = trvlr -> next;
		}
		trvlr -> next = tmp;
	}
	
}

void printList()
{
	node *t = head;
	if(head == NULL)
	{
		cout<<"\n Linked list is empty..";
	}else
	{
		cout<<"\n Nodes in structure: head";
		while(t  != NULL)
		{
			cout<<"("<<& t->data<<")->"<<t->data;
			t = t->next;
		}
		cout<<"->Null \n";
	}
		
}

void reverseDisplay_DLL(struct node *head)  // this function displays the nodes of the linked list in a
{									// reverse way using recursion, actual linked list is not reversed.
    if(head == NULL)
        return;
     
    reverseDisplay_DLL(head->next);
    cout <<head->data << "->";
}

void Reverse_SLL()  // the actual linked lsit is reversed
{
	node *p, *c, *n;
	p = NULL;
	c = head;
	while(c != NULL)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	head = p;
}



int main()
{

	head = NULL;
	int size, item, key;
	cout<<"\n enter your size of the linked list: ";
	cin>>size;
	
	cout<<"\n enter your choice of insertion in the linked list: ";
	cout<<"At last(append) \n";
				for(int i=1; i<=size; i++)
				{
					cout<<"\n enter element "<<i<<" of linked list: ";
					cin>>item;
					LLappend(item);
	
				}
	
	printList();
	
	
	cout<<"\n Linked list is reversed: ";
	Reverse_SLL();
	printList();
	
	cout<<"\n Reverse printing of linked list: ";
	reverseDisplay_DLL(head);
	printList();
	
	return 0;
}
