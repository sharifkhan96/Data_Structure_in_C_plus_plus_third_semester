#include <iostream>
using namespace std;

int fib(int x)
{
	if(x == 1)
 	{
 		return 0;
 		
	}else if(x == 2)
	{
		return 1;
		
	}else
	{
		return  fib(x-2) + fib(x-1) ;
	}
	
}

int main()
{
	int value;
	cout<<"\n Enter your value: ";
	cin>>value;
	
	int extra = fib(value);
	
	cout<<"\n The answer is: "<<extra;
	
	return 0;
}
