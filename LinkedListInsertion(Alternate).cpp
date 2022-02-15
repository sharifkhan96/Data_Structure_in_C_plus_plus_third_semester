#include <iostream>

using namespace std;

struct node
{
	
	int data;
	node *next;
	
}*h1, *h2;

//=============================

void printLinkedList(node **head)
{
	
	node *trvlr = *head;
	cout<<"\n Node in structure: ";
	
	while(trvlr != NULL)
	{
		cout<<trvlr -> data <<"->";
		trvlr = trvlr -> next;
	}
	cout<<" NULL \n";
}
//=============================
void appendLinkedList(int item)
{
	
	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	//node *head = *header;
	
	if(h1 == NULL)
	{
		
		h1 = tmp;
		
	}else
	{
		
		node *trvlr = h1;
		
		while(trvlr -> next != NULL)
		{
			trvlr = trvlr -> next;
		}
		
		trvlr -> next = tmp;
		
//		tail->next = ptr;   // these two lines of code also work instead of the above whole else block...
//		tail = tail->next;
		
	}
	
}

void appendLinkedList2(int item)
{
	
	node *tmp = new node;
	tmp -> data = item;
	tmp -> next = NULL;
	//node *head = *header;
	
	if(h2 == NULL)
	{
		
		h2 = tmp;
		
	}else
	{
		
		node *trvlr = h2;
		
		while(trvlr -> next != NULL)
		{
			trvlr = trvlr -> next;
		}
		
		trvlr -> next = tmp;
		
//		tail->next = ptr;   // these two lines of code also work instead of the above whole else block...
//		tail = tail->next;
		
	}
	
}

void mergeAlternateLL()
{
	node *tr1 = h1;
	node *tr2 = h1;
	node *tr3 = h2;
	node *tr4 = h2;
	
	while(tr2->next != NULL && tr4->next != NULL)
	{
		
		tr2 = tr1->next;
		tr1->next = tr3;
		tr1 = tr2;
		tr4 = tr3->next;
		tr3->next = tr1;
		tr3 = tr4;
	
	}
	tr1->next = tr3;
	h2 = NULL;
	tr3 = NULL;
	tr4 = NULL;
	
	
	printLinkedList(&h1);
}



int main()
{
	
	h1 = NULL;
	h2 = NULL;
	
	int size, item;
	
	cout<<"\n enter linked list size: ";
	
	cin>>size;
	
	
	// first LL insertion
	for(int i=1; i<=size; i++)
	{
		cout<<"\n enter item "<<i<<" to first linked list: ";
		cin>>item;
		appendLinkedList(item);
	}
	
	printLinkedList(&h1);
	
	// second LL insertion
	for(int i=1; i<=size; i++)
	{
		cout<<"\n enter item "<<i<<" to second linked list: ";
		cin>>item;
		appendLinkedList2(item);
	}
	printLinkedList(&h1);
	printLinkedList(&h2);
	
	mergeAlternateLL();
	cout<<endl;
	cout<<"After marging two linked lists:  \n";
	
	
	
	
	
	
	return 0;
}
