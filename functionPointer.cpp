#include <iostream>

using namespace std;

int getNumber()
{
	return 5;
}

int adder(int a, int b)
{
	return a+b;
}

int main(){     // mainly the function pointers are used for callback mechanism & when we want to 
				// pass the address of a specific function as an argument to another function...
	
	
	int(*funptr)() = getNumber;   // int shows the return type of the calling function
								  // (*funptr) shows the function pointer () shows the parameter list
								  // getNumber is the function we will call
	cout<<funptr()<<endl;				  // calling the function of getNumber through funptr()
	
	int(*funcptr)(int, int) = adder;
	cout<<adder(3, 4)<<endl;
	cout<<funcptr(4, 2)<<endl;
	
	
	return 0;
}
