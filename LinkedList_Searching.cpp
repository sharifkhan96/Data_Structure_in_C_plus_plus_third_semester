#include <iostream>
#include <windows.h>

using namespace std;

struct node
{
	int data;
	node *next;
}*head;

void appendLL(int item)
{
	node *tmp = new node;
	tmp->data = item;
	tmp->next = NULL ;
	
	if(head == NULL)
	{
		head = tmp;
		return;
	}else
	{
		node *tr = head;
		while(tr->next != NULL)
		{
			tr = tr->next;
		}
		tr->next = tmp;
	}
}


void printLL()
{
	node *tmp = head;
	if(tmp == NULL)
	{
		cout<<"\n Linked list is empty... ";
	}else
	{
		while(tmp != NULL)
		{
			cout<<tmp->data<<"->";
			tmp=tmp->next;
		}
		cout<<"->NULL";
	}
}


bool searchLL(int key)   // this function is iteratively searching elements within linked list...
{

	node *tmp = head;
	while(tmp != NULL)
	{
		if(tmp->data == key)
		{
			return true;
		}
		tmp = tmp->next;
	}
	
	return false;
}

bool searchLL_Rec(node *head, int key) // this funciton is recursively searching elements within linked list..
{
	if(head == NULL) // base case
	{
		return false;
	}
	
	if(head->data == key)
	{
		return true;
	}else
	{
		return searchLL_Rec(head->next, key);
	}
}
	

int main()
{
	head = NULL;
	int size, item;
	cout<<"\n enter size of linked list: ";
	cin>>size;
	for(int i=1; i<=size; i++)
	{
		cout<<"\n enter element "<<i<<" to linked list: ";
		cin>>item;
		appendLL(item);
	}
	printLL();
	
	cout<<"\n\n============================================================"<<endl;
	int key;
	bool result;	
	cout<<"\n enter an element to search in the linked list: ";
	cin>>key;
	
	cout<<"\n Iterative search... "<<endl;
	result = searchLL(key); // this function is iteratively searching elements within linked list... 
	if(result == true)
	{
		cout<<key<<" has been found in the linked list ";
	}else
	{
		cout<<key<<" has NOT been founc in the linked list ";
	}

	system("pause");
	
	cout<<"\n Recursive search... "<<endl;
	result = searchLL_Rec(head, key); // this funciton is recursively searching elements within linked list..
	if(result == true)
	{
		cout<<key<<" has been found in the linked list ";
	}else
	{
		cout<<key<<" has NOT been founc in the linked list ";
	}
	
	return 0;
}
