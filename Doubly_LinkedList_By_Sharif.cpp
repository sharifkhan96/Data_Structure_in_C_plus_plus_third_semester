#include <iostream>
using namespace std;

struct node{
	
	node *prev;
	int data;
	node *next;
	
}*head;

void prepend_DLL(int item)
{
	node *tmp = new node;
	tmp->data = item;
	
	tmp->next = head;
	tmp->prev = NULL;
	
	if(head != NULL)
	{
		head->prev = tmp;
	}
	
	head = tmp;
	
}

void append_DLL(int item)
{
	node *tmp = new node;
	tmp->data = item;
	node *ptr = head;
	if(head == NULL)
	{
		cout<<"\n Node appended as head node: "<<endl;
		tmp->prev = NULL;
		tmp->next = NULL;
		head = tmp;
		
	}else
	{
		while(ptr->next != NULL)
		{
			ptr = ptr->next;	
		}
		tmp->prev = ptr;
		ptr->next = tmp;
		tmp->next = NULL;
		cout<<"\n Node appended"<<endl;
	}
	
}

void insertAfter_DLL(int key, int item)
{
	node *tmp = new node;
	node *ptr = head;
	
	tmp->prev = NULL;
	tmp->data = item;
	tmp->next = NULL; 
	
	while(ptr->data != key)
	{
		ptr = ptr->next;
	}
	
	tmp->next = ptr->next;
	ptr->next = tmp;
	tmp->prev = ptr;
	ptr->next->prev = tmp;
	
}


void insertBefore_DLL(int key, int item)  // this function is not generalized, puts error for first node
{
	node *tmp = new node;
	node *ptr = head;
	
	tmp->prev = NULL;
	tmp->data = item;
	tmp->next = NULL; 
	while(ptr->data != key)
	{
		ptr = ptr->next;
	}
	tmp->next = ptr;
	ptr->prev->next = tmp;
	tmp->prev = ptr->prev;
	ptr->prev = tmp;

}

void delete_DLL(int key) // this function puts error for first & last nodes to be deleted
{
	node *ptr = head;
	if(ptr->data == key)
	{
		head = ptr->next;
		return;
	}
	while(ptr->data != key)
	{
		ptr = ptr->next;
	}
	
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	delete(ptr);
	ptr = NULL;
	
}

void display_DLL()
{
	node *ptr = head;
	cout<<" ------------------------------------- \n ";
	cout<<"\n Doubly linked list printing: "<<endl;
	cout<<" ------------------------------------- \n ";
	if(ptr == NULL)
	{
		cout<<"\n Linked list is emtpy... ";
		return;
	}else
	{
		while(ptr != NULL)
		{
			cout<<endl;
			cout<<"Previous("<<ptr->prev<<") "<<"Data("<<ptr->data<<") "<<"Next("<<ptr->next<<")"<<endl;
			ptr = ptr->next;
		}
	}
}

void reverseDisplay_DLL()
{
	struct node *ptr = head;
	cout<<" ------------------------------------- \n ";
	cout<<"\n Doubly linked list reverse printing: "<<endl;
	cout<<" ------------------------------------- \n ";
	if(ptr == NULL)
	{
		cout<<"\n Linked list is emtpy... ";
		return;
	}else
	{
		while(ptr->next != NULL) // this while loop will reach to the end of the linked list
		{
			ptr = ptr->next;
		}
		while(ptr != NULL)  // this while loop will print all the value within linked list using prev pointer
		{
			cout<<endl;
			cout<<"Data("<<ptr->data<<")"<<endl;
			ptr = ptr->prev;
		}
	}
}

void reverseDisplay2_DLL(node *head)
{
    if(head == NULL)
        return;
     
    fun1(head->next);
    cout <<head->data << "->";
}

int main()
{
	head = NULL;
	cout<<"Doubly linked list.. "<<endl;
	int size, value;
	cout<<"\n enter the size of the doubly linked list: ";
	cin>>size;
	cout<<"\n Prepend function: ";
	while(size != 0)
	{
		cout<<"\n enter value for doubly LL ";
		cin>>value;	
		prepend_DLL(value);
	
		size--;
	}
	
	display_DLL();

	cout<<"\n Append function: \n";
	while(size != 0)
	{
		cout<<"\n enter item: ";
		cin>>value;
		append_DLL(value);
		
		size--;
	}
	display_DLL();
	reverseDisplay_DLL();
	
	cout<<endl<<"Enter the value to be added after some given node: ";
	cin>>value;
	cout<<endl<<"Enter key after which u want insertion: ";
	int key;
	cin>>key;
	insertAfter_DLL(key, value);
	display_DLL();

	cout<<endl<<"-----------------------------------------------"<<endl;
	cout<<endl<<"Enter the value to be added before some given node: "<<endl;
	cin>>value;
	cout<<endl<<"Enter key before which u want insertion: ";
	cin>>key;
	insertBefore_DLL(key, value);
	display_DLL();

	cout<<"\n Enter key(node) U want to delete: ";
	cin>>key;
	delete_DLL(key);
	display_DLL();
	
	cout<<"\n Reverse Display-2 ";
	reverseDisplay2_DLL(head);

	return 0;	
}
