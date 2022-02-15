#include <iostream>
using namespace std;

struct node
{
	
	int data;
	node *next;
	
} *head, *tail;

// node *head;
// node *tail

void appendLinkedList(int item)
{
	
	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	
	if(head == NULL)
	{
		
		head = tmp;
		tail = head;
		
	}else
	{
		
		node *trvlr = head;
		
		while(trvlr -> next != NULL)
		{
			trvlr = trvlr -> next;
		}
		
		trvlr -> next = tmp;
		
//		tail->next = ptr;   // these two lines of code also work instead of the above whole else block...
//		tail = tail->next;
		
	}
	
}


void printLinkedList()
{
	
	node *trvlr = head;
	cout<<"\n Node in structure: ";
	
	while(trvlr != NULL)
	{
		cout<<trvlr -> data <<"->";
		trvlr = trvlr -> next;
	}
	cout<<" NULL \n";
}

int main()
{
	
	head = NULL;
	tail = NULL;
	
	int size, item;
	
	cout<<"\n enter linked list size: ";
	cin>>size;
	
	for(int i=1; i<=size; i++)
	{
		cout<<"\n enter item "<<i<<" to linked list: ";
		cin>>item;
		appendLinkedList(item);
	}
	
	printLinkedList();
	
	
	return 0;
}
