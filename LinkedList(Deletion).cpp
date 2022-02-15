#include <iostream>

using namespace std;


struct node
{
	
	int data;
	struct node *next;
	
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

void print()
{
	
	node *extra = head;
	if(head == NULL)
	{
		cout<<"\n linked list is empty... ";
	}else
	{
		cout<<"\n Node in structure: Head->";
		while(extra != NULL	)
		{
			cout<<&extra->data<<"->("<<extra->data<<")";
			extra = extra -> next;
		}
		cout<<"->NULL";
	}
	
}

void deleteNode(node **head_ref)
{
	int key;
	node *temp = *head_ref;
	node *prev = NULL;
	
	cout<<"\n enter the key to be deleted from the linked list: ";
	cin>>key;
	
	if(temp != NULL && temp->data == key)
	{
		*head_ref = temp->next;
		delete temp;
		return;
	}else
	{
		while(temp != NULL && temp->data != key)
		{
			prev = temp;
			temp = temp->next;	
		}
		
		if(temp == NULL)
		{
			cout<<"\n Key is not in the linked list ";
			return;
		}
		prev ->next = temp ->next;
		delete temp;
	}
	
	
}

int main()
{
	
	head = NULL;
	int item;
	print();
	int size;
	cout<<"\n enter the size of the linked list: ";
	cin>>size;
	
	for(int i=0; i<=size; i++)
	{
		cout<<"\n enter your item to be inserted into the linked list: ";
		cin>>item;
		LLappend(item);
	}
	print();
	cout<<"\n calling the delete node function \n";
	deleteNode(&head);
	print();
	
	return 0;
}
