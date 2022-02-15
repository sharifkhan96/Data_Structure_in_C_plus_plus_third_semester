#include <iostream>
#include <windows.h>
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

void print_DLL()
{
	node *ptr = head;
		if(head == NULL)
	{
		cout<<"\n Linked list is empty..";
	}else
	{
		cout<<"\n Linked list nodes are: ";
		while(ptr != NULL)
		{
			cout<<ptr->data<<"->";
			ptr = ptr->next;
		}
		cout<<"->NULL";
	}

}

void swap_1(node *a, node*b)
{
	int tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void bubbleSort()
{
	int swap, i;
	node *ptr1;
	node* ptr2 = NULL;
	
	do{
			swap = 0;
			ptr1 = head;
			while(ptr1->next != ptr2)
			{
			
				if(ptr1->data > ptr1->next->data)
				{
					swap_1(ptr1, ptr1->next);
					swap = 1;
				}
				ptr1 = ptr1->next;
			
			}
			
		//	ptr2 = ptr1;
			
	}while(swap);
}

void reverse()
    {
        // Initialize current, previous and
        // next pointers
        node* current = head;
        node *prev = NULL, *next = NULL;

        while (current != NULL) {
            // Store next
            next = current->next;

            // Reverse current node's pointer
            current->next = prev;

            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }

int main()
{
   
   int size, value;
   cout<<"\n enter the size of the linked list: ";
   cin>>size;
   for(int i=1; i<=size; i++)
   {
   		cout<<"\n enter the value of the linked list: ";
   		cin>>value;
   		LLappend(value);
   }
   
   print_DLL();
    
   cout<<"\n this function will sort the linked list using bubble sort: ";
   bubbleSort();
   print_DLL();
   
   cout<<"\n this function will reverse the linked list: ";
   reverse();
   print_DLL();
   
    
	return 0;
}
