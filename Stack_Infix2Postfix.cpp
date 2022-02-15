#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

#define MAXSIZE  100	// define the maximum size of the stack


class STACK_ARRAY	// a class initialized with public and private variables and functions
{

	int stack[MAXSIZE];
	int top;
	
	public:
		// constructor is called & top pointer is initialized to -1
		// when an object is created for the class
		
		STACK_ARRAY(){
			
			top = -1;
			
		}
		
		void push(char);
		char pop();
		int prec(char);
		void Infix_Postfix();
	
};

// this bellow function will add/insert an element to top of the stack
void STACK_ARRAY::push(char item)
{
	// if the top pointer already reached the maximum allows size then 
	// we can say that the stack is full or overflow
	if(top == MAXSIZE-1)
	{
		cout<<"\n The stack is full ";
		getch();
	}
	
	// otherwise an element can be added or inserted by incrementing the stack pointer top as follows
	else
	{
		stack[++top]=item;
	}
}

//this function will delete an element from the top of the stack
char STACK_ARRAY::pop()
{
	char item = '#';
	//if the toop pointer points to NULL, then the stack is empty
	// that is NO elemnt is there to delte or pop
	if(top == -1)
	{
		cout<<"\n the stack is empty. invalid infix expression ";

	}
	//otherwise the top most elemnt in the stack is poped or deleted by decrementing the top pointer
	else
	{
		item = stack[top--];
	}
	return(item);
}

//this funciton returns the precedence of the operator
int STACK_ARRAY::prec(char symbol){
	
	switch(symbol)
	{
		case'(':
			return(1);
		
		case ')':
				return(2);
				
		case '+':
		case '-':
				return(3);
				
		case '*':
		case '/':
		case '%':
				return(4);
				
		case '^':
				return(5);
				
		default:
				return(0);
	}
	
}

//this funciton will return the postfix expression of an infix 
void STACK_ARRAY::Infix_Postfix()
{
	
	int len, priority;
	char infix[MAXSIZE], postfix[MAXSIZE], ch;
	cout<<"\n Enter the infix expression: ";
	cin>>infix;
	
	// finding lenght of the string
	len = strlen(infix);
	// at the end of the string inputting a parenthesis ')'
	infix[len++] = ')';
	
	push('('); //parenthesis is pushed to the stack
	int i, j;
	for( i=0, j=0; i<len; i++)
	{
	
		switch(prec(infix[i]))
		{
			
			// scanned char is '(' push to the stack
			case 1:
					push(infix[i]);
					break;
			
			// scanned char is ')' pop the operator(s) and add to the post fix expression
			case 2: 
					ch = pop();
					while(ch != '(')
					{
						postfix[j++]=ch;
						ch=pop();
					}
					break;
			
			// scanned operator is +, - the pop the higher or same precedence operator
			// to add postfix before pushing the scanned operator to the stack
			
			case 3:
					ch = pop();
					while(prec(ch) >= 3)
					{
						
						postfix[j++] = ch;
						ch = pop();
						
					}
					
					push(ch);
					push(infix[i]);
					break;
					
			//scanned operator is *, /, % then pop the higher or same precedence
			// operator to add postfix before pushing the scanned operator to the stack
			case 4:
					ch = pop();
					while(prec(ch) >= 4)
					{
						postfix[j++] = ch;
						ch = pop();
				
					}
					push(ch);
					push(infix[i]);
					break;
					
			//sccanned operator is ^ then pop the same precedence opertor to add to postfix 
			// before pushing the scanned operator to the stack
			case 5: 
					ch = pop();
					while(prec(ch) == 5)
					{
						
						postfix[j++] = ch;
						ch = pop();
						
					}
					push(ch);
					push(infix[i]);
					break;
					
			//scanned char is a operand then simply add to the posfix expression
			default:
					postfix[j++]= infix[i];
					break;
					
		}	
	
			}
	// printing the posfixx notation to the screen
	cout<<"\n the posftfix expression is: ";
	for(i=0; i<j; i++)
	cout<<postfix[i];

}

int main()
{
	
	char choice;
	STACK_ARRAY ip;
	
	do
	{
		
		
		ip.Infix_Postfix();		// calling the infix to postfix function
		cout<<"\n do you want to continue... (Y/y): ";
		cin>>choice;
		
	}while(choice == 'Y' || choice == 'y');
	
	
	return 0;
	
}
