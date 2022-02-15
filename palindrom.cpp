#include <iostream>

using namespace std;


int main()
{
	
	int n, number, digit, rev=0;

	cout<<"\n enter number for checking the palindrom : ";
	cin>>number;
	n = number;
	
	while(number!=0)
	{
		
		digit = number%10;
		rev = (rev * 10) + digit;
		number = number/10;	
		
	}
	
	if(n == rev)
	{
		cout<<"\n palindrom \n";
	}else{
		cout<<"\n Not palindrom \n";
	}
	
	
	return 0;
}
