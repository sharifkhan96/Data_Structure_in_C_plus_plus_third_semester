#include <iostream>
#include <cstdlib>

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

void deleteNodeAtPosition(node **head_ref)
{
	int pos;
	node *temp = *head_ref;
	
	cout<<"\n enter the position to be deleted from the linked list: ";
	cin>>pos;
	
	if (*head_ref == NULL) {
      return;
   }
   
   if (pos == 1) {
      *head_ref = temp->next;
      free(temp);
      return;
   }
   for (int i = 2; temp != NULL && i < pos - 1; i++) {
      temp = temp->next;
   }
   if (temp == NULL || temp->next == NULL) {
      return;
   }
   struct node *extra = temp->next->next;
   free(temp->next);
   temp->next = extra;
	
	
}

int main()
{
	
	head = NULL;
	int item;
	print();
	int size;
	cout<<"\n enter the size of the linked list: ";
	cin>>size;
	
	for(int i=1; i<=size; i++)
	{
		cout<<"\n enter your item to be inserted into the linked list: ";
		cin>>item;
		LLappend(item);
	}
	print();
	cout<<"\n calling the delete node function \n";
	deleteNodeAtPosition(&head);
	print();
	
	return 0;
}
