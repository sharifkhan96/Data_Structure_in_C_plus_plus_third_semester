#include <iostream>

using namespace std;

struct node{
	
	int data;
	node *next;
	
}*head, *tail;

void LLAppend(int item)
{
	
	node *tmp = new node;
	tmp->data = item;
	tmp->next = NULL;
	
	if(head == NULL)
	{
		head = tmp;;
		tail = head;
		return;	
	}else
	{
		node *trvlr = head;
		while(trvlr->next != NULL)
		{
			trvlr = trvlr->next;
		}
		
		trvlr->next = tmp;
	}
	
}

void deleteFirst()
{
		
	node *tmp = head;
	if(head != NULL)
	{
		head = tmp->next;
		delete(tmp);
	}
}

void deleteLast()
{
	node *tmp = head;
	while(tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
		delete(tmp->next);
		tmp->next = NULL;
}

void deleteRandom(int key)
{
	
	char ch;
	cout<<"\n Enter the option: (After/Before)(A/B) ";
	cin>>ch;
	
	node *tr1 = head;
	node *tr2 = NULL;
	
	
	if(ch == 'B' || ch == 'b')
	{
		if(head->next->data == key)
		{
			head = tr1->next;
			delete tr1;
		}
		else
		{
			while(tr1->next->data != key && tr1 != NULL)
			{
				tr2 = tr1;
				tr1 = tr1->next;
			}
			tr2->next = tr1->next;
			
			delete tr1;
		}	
	}
	else if(ch == 'A' || ch == 'a')
	{
		
		if(head->data == key)
		{
			head->next = tr1->next;
			head->next = tr2;
			delete tr1->next;
		}
		else
		{
			while(tr1->data != key && tr1!=NULL)
			{
				tr2 = tr1->next->next;
				tr1 = tr1->next;
			}
				tr1->next = tr2->next;
				delete tr2;
		}
	}
	else
	{
		cout<<"\n Option invalid";
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
			cout<<"("<<&tmp->data<<")->"<<tmp->data;
			tmp = tmp->next;
		}
		cout<<"->NULL";
	}
}

int main()
{
	
	head = NULL;
	tail = NULL;
	int option, size, item, key;
	
	cout<<"\n enter the size of the linked list: ";
	cin>>size;
	
	for(int i=1; i<=size; i++)
	{
			cout<<"\n enter element "<<i<<" of linked list: ";
			cin>>item;
			LLAppend(item);
	}
	
	printLL();
	
	do{
		cout<<"\n\n\n ---------------------------------------- ";
		cout<<"\n 1: Delete At First"<<endl;
		cout<<"\n 2: Delete At Last"<<endl;
		cout<<"\n 3: Delete Random: "<<endl;
		cin>>option;
		
		switch(option)
		{
			case 1:
					deleteFirst();
					printLL();
					break;
			case 2:
					deleteLast();
					printLL();
					break;
			case 3:
					cout<<"\n enter the key after/before which you want deletion: ";
					cin>>key;
					deleteRandom(key);
					printLL();
					break;
			default:
					cout<<"\n Invalid Option";
		}
	
	}while(option !=0);
	
	return 0;
}
