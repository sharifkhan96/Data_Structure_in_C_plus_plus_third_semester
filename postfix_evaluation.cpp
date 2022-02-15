#include<iostream>
using namespace std;

int top=-1;
float stack[20];

void push(int element)
{
	top++;
	stack[top]=element;
}
float pop()
{
	float result=stack[top];
	top--;
	return result;
}

int main()
{
	string postfix;
	float op1,op2;
	float result;
	cout<<"\n Enter Valid Expression: "<<endl;
	cin>>postfix;
	
	for(int i=0;i<=postfix.length();i++)
	{
		if(postfix[i]>='0' && postfix[i]<='9')
		{
			float convert=(int)(postfix[i]-48);
			push(convert);	
		}
		else
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
	
	
	
	
}
