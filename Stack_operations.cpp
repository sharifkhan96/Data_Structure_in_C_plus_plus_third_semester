#include <iostream>

using namespace std;

//... this piece of code demonstrates some operations of stacks:
//... for instance: push(putting an element into the stack, popping(taking out an element form stack
//... printstack(displaying the elemtns of the stack, & checking the emptyness of the stack...

void push(int stack[], int &top, int value, int size){
	
	if(top == size-1 ){
		
		cout<<"\n Stack is overflow \n ";
		
	}
	else if(top != size - 1){
		
		top++;
		stack[top] = value;
		
	}	
}

int pop(int stack[], int &top){
	
	int temp;
	if(top == -1){
		
		cout<<"\n Stack is underflow \n";
		
	}
	else if(top != - 1){
		
		temp = stack[top];
		top--;
	}
	
	return  temp;
}

void printstack(int stack[], int &top){
	
	if(top != -1){
		
		cout<<"\n The stack elements are: \n";
		for(int i=0; i<=top; i++){
			
			cout<<stack[i]<<" ";
			
		}
		cout<<"\n";
	}
	
}


string isEmpty(int &top){
	
	string check;
	if(top == -1){
		check = "EMPTY \n";
	}else{
		check = " is NOT empty \n";
	}
	
	return check;
}

string isFull(int &top, int size){
	
	string check;
	if(top == size-1){
		check = "FULL \n";
	}else{
		check = " is NOT full \n";
	}
	
	return check;
}


void change(int stack[], int value, int pos){
	
	stack[pos] = value;
	cout<<"\n value changed at location \n"<<pos<<endl;
}

int main(){
	
	int size;
	cout<<"Enter the size for the stack: ";
	cin>>size;
	int top = -1;
	int stack[size];
	
	int choice, value;
	
	do{
		
		
		cout<<"\n Enter your choice for operating on the stack: \n";
		cout<<"1: Push	2: Pop	3: Print of stack	4: isEmpty	5: isFull	6: change  ";
		cin>>choice;
		
		if(choice == 1){
			
			cout<<"\n Enter any integer value for pushing into the stack: ";
			cin>>value;
			push(stack, top, value, size);
			
		}else if(choice == 2){
			
			int popping = pop(stack, top);
			cout<<"\n Popped value is: "<<popping<<endl;
			
		}else if(choice == 3){
			
			printstack(stack, top);
			
		}else if(choice == 4){
			
			string isemp = isEmpty(top);
			cout<<"\n stack "<<isemp<<endl;
			
		}else if(choice == 5){
			
			string isful = isFull(top, size);
			cout<<"\n stack "<<isful<<endl;
			
		}else if(choice ==6){
			
			int pos, newvalue;
			cout<<"\n enter the position where your want the change: ";
			cin>>pos;
			cout<<"\n enter the value you want to change at "<<pos<<" positon: ";
			cin>>newvalue;
			
			change(stack, newvalue, pos);
			
		}else if(choice == 7){
			exit(0);
		}
		
	}while(true);
	
	
	
	
	return 0;
}
