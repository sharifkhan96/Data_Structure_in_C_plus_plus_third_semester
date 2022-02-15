#include <iostream>
using namespace std;

struct node{
	
	int data;
	node *next;
	
}*head, *tail;	

void LLappend(int item)
{
	
	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	
	if(head == NULL)
	{
		head = tmp;
		tail = head;
		return;
	}else{
		
		node *trvlr = head;
		while(trvlr -> next != NULL)
		{
			trvlr = trvlr -> next;
		}
		trvlr -> next = tmp;
	}
	
}

void LLprepend(int item)
{

	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	
	tmp -> next = head;
	head = tmp;
	
}

void LLCriteriaInsertion(int item, int key)
{
	
	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	char option;
	node *trvlr = head;
	
	cout<<"\n enter your option (Before/After)(B/A) : ";
	cin>>option;
	if(option == 'B' || option == 'b' && key == head -> data)
	{
			tmp -> next = head;
			head = tmp;
	}else
	{
		if(option == 'B' || option == 'b')
		{
		 	while(trvlr -> next -> data != key && trvlr != NULL)
			{
				trvlr = trvlr -> next;
			}
			
		}else if(option == 'A' || option == 'a')
		{
		
			while(trvlr -> data != key && trvlr != NULL)
			{
				trvlr = trvlr -> next;
			}
		
		}else
		{
			cout<<"\n Invalid option ";	
		}
	
	
		if(option =='a' || option == 'A' || option == 'B' || option == 'b')
		{
			tmp -> next = trvlr->next;
			trvlr->next = tmp;
		}	
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
{									// reverse way using recursion
    if(head == NULL)
        return;
     
    reverseDisplay_DLL(head->next);
    cout <<head->data << "->";
}


/* prints nodes of a Linked List, first
from head to end, and then from end to head using recursion. */
void startEnd_endStart_display(node* head) 
{
    if(head == NULL)
        return;
    cout << head->data << " ";
     
    if(head->next != NULL )
        startEnd_endStart_display(head->next);  // if u want to print alternate nodes(skip one and print 
    cout << head->data << " ";					// other, so you should write "->next" after "head->next" 
}												// in the caller funtion.

int main()
{

	head = NULL;
	tail = NULL;
	int size, item, key;
	cout<<"\n enter your size of the linked list: ";
	cin>>size;
	
	cout<<"\n enter your choice of insertion in the linked list: ";
	cout<<" \n 1: At start(prepend) \n 2: At last(append) \n";
	int option;
	cin>>option;
	switch(option)
	{
		case 1:
				for(int i=1; i<=size; i++)
				{
					cout<<"\n enter element "<<i<<" of linked list: ";
					cin>>item;
					LLprepend(item);
	
				}
				break;
				
		case 2:
				for(int i=1; i<=size; i++)
				{
					cout<<"\n enter element "<<i<<" of linked list: ";
					cin>>item;
					LLappend(item);
				}
				break;
				
		default:
				cout<<"\n Incorrect choice entered!! ";	
	}
	
	printList();

	// checking the criteria based function...
	cout<<"\n criteria based funtion: ";
	cout<<"\n enter an element for inserting into the linked list: ";
	cin>>item;
	cout<"\n enter the key : ";
	cin>>key;
	LLCriteriaInsertion(item, key);

	printList();
	
	cout<<"\n Reverse display function: "<<endl;
	reverseDisplay_DLL(head);
	
	cout<<"\n start to end display & end to start display function: "<<endl;
	startEnd_endStart_display(head);
	
	return 0;
}
