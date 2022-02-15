#include <iostream>
#include <string.h>

using namespace std;

	int stack[15];
	int top=-1;

bool isEmpty()
{
	bool empty = false;
	if(top == -1)
		empty = true;
		
	return empty;
}

bool isFull()
{
	bool full= false;
	if(top == 14)
		full = true;
	
}

void push(char ch)
{
	if(!isFull())
	{
		top++;
		stack[top] = ch;
	}else
	{
		cout<<"\n stack is overflow \n";
	}
}

char pop()
{
	char temp;
	if(!isEmpty)
	{
		temp = stack[top];
		top--;
	}
	return temp;
}

char peek()
{
	char Pele;
	if(!isEmpty)
	{
		Pele = stack[top];
	}
	return Pele;
}


int precedence(char ch)
{
	if(ch == '^')
	
		return 3;
	else if(ch == '*'	|| ch == '/')
	
		return 2;
	else if(ch == '+' || ch == '-')
	
		return 1;
	else
	
		return -1;
	
}


int main()
{

	string infix;
	string postfix;
	cout<<"\n Enter a valid infix expression : ";
	cin>>infix;
	
	for(int j=0; j<infix.length(); j++)
	{
		char ch;
		ch = infix[j];
		
		// if operand, add to postfix directly
		if((ch>= 'a' && ch <= 'z') || (ch >= 'A') && ch <= 'Z')
		{
			postfix+= ch;
		}
		else if(ch == '(')  // if opening parenthesis, push it to stack
		{
			push('(');
		}
		else if(ch == ')') // if closing p, pop all until '(' arrives.
		{
			while(peek() != '(')
			{
				postfix += pop();
			}
			
			pop();
		}
		else
		{
			while(!isEmpty() && precedence(infix[j]) <= precedence(peek()))
			{
				postfix += pop();
			}
			push(ch);
		}
	}
	
	// pop all the remaining elements still in the stack
	while(!isEmpty())
	{
		postfix += pop();
	}
	
	cout<<"\n The postfix form of the "<<infix<<" is : ";
	cout<<postfix;
	
	return 0;
}
