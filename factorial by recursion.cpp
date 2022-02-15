#include <iostream>

using namespace std;

int fact(int n)
{
	
	if(n == 0)
	{
		return 1;
	}else
	{
		return n*fact(n-1);
	}
	
}

int main()
{
	
	int number;
	cout<<"\n Enter the number you want to find the factorial: ";
	cin>>number;
	int f = fact(number);
	cout<<"\n The factorial of "<<number<<" is "<<f;
	
	
	return 0;
}
