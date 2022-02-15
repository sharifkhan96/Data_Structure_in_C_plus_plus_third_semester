#include <iostream>

using namespace std;

int stack[15];
int top=-1;


void push(int value)
{
	top++;
	stack[top]=value;
}

char pop()
{
	float result=stack[top];
	top--;
	return result;

}

int main()
{
	
	string postfix;
	float op1, op2, result;
	cout<<"\n Enter a valid postfix expression : ";
	cin>>postfix;
	
	for(int i=0; i<postfix.length(); i++)
	{
		
		if(postfix[i] >= '0' && postfix[i] <='9')
		{
			
			float operand = (int)(postfix[i]-48);
			push(operand);
		
		}else if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/')
		{
			
			op2=pop();
			op1=pop();
			
			switch(postfix[i])
			{
				case '+':
					result=op1+op2;
					push(result);
					break;
				case '-':
					result=op1-op2;
					push(result);
					break;
				case '*':
					result=op1*op2;
					push(result);
					break;
				case '/':
					result=op1/op2;
					push(result);
					break;
			}
			
		}
		
		
	}
	
	push(result);
	cout<<"Result: "<<pop();
	
	return 0;
}
