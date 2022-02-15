#include <iostream>
using namespace std;

struct node
{
	
	int data;
	node *next;
	
} *head, *tail;

// node *head;
// node *tail

void prependLinkedList(int item)
{
	
	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	
	tmp -> next = head;
	head = tmp;
	
	
}


void printLinkedList()
{
	
	node *trvlr = head;
	cout<<"\n Node in structure: ";
	
	while(trvlr != NULL)
	{
		cout<<"("<<&trvlr -> data<<")->"<<trvlr -> data;
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
		prependLinkedList(item);
	}
	
	printLinkedList();
	
	
	return 0;
}
