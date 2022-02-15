#include <iostream>

using namespace std;

void push(int stack[], int &top, int size, int ele){
	
	if(top != size-1){
		top++;
		stack[top] =ele; 
	}else 
		cout<<"\n stack underflow \n";
	
}

int pop(int stack[], int &top)
{
	int temp;
	if(top != -1){
		
		temp = stack[top];
		top--;
	}else 
	cout<<"\n stack is underflow \n ";
	return temp;
}


void display(int stack[], int &top){
	
	
	if(top != -1){
		cout<<"Stack elements are: ";
	for(int j=0; j<=top; j++)
	{
		
		cout<<stack[j]<<" ";
	}
	cout<<endl;
	}
}

int main()
{
	
	int SIZE=5;
	int stack[SIZE];
	int top = -1;
	char loop;
	do{
	cout<<"choose one of the follwoing from below: ";
	cout<<" 1. push		2. pop		3. display 	4. exit \n";
	int choice, ele;
	cin>>choice;
	
	if(choice == 1)
	{
		cout<<"Enter your element of the stack: ";
		cin>>ele;
		push(stack, top, SIZE, ele);
		
	}else if(choice ==2)
	{
		cout<<"\n popped element is: ";
		int tem;
		tem = pop(stack, top);
		cout<<tem;
		
	}else if(choice == 3)
	{
		display(stack, top);
		
	}else if(choice == 4)
	{
		exit(0);
	}
	
	cout<<"\n Do U Want to repeat? yes(y): ";
	cin>>loop;
}while(loop == 'y' || loop == 'Y');
	
	return 0;
}
