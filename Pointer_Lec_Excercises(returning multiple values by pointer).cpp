#include <iostream>

using namespace std;

int getMin(int numbers[], int size)
{
	int min = numbers[0];
	
	for(int i=1; i<size; i++)
	{
		if(numbers[i] < min)
		{
			min = numbers[i] ;
		}
	}
	
	return min;
}

int getMax(int numbers[], int size)
{
	int max = numbers[0];
	
	for(int i=1; i<size; i++)
	{
		if(numbers[i] > max)
		{
			max = numbers[i];
		}
	}
	
	return max;
}

void getMinAndMax(int numbers[], int size, int *min, int*max)
{
	for(int i=1; i<size; i++)
	{
		if(numbers[i] < *min)
		{
			*min = numbers[i];
		}
		if(numbers[i] > *max)
		{
			*max = numbers[i];
		}
	}
}

void getMinAndMax2(int numbers[], int size, int &min, int &max)
{
	for(int i=1; i<size; i++)
	{
		if(numbers[i] < min)
		{
			min = numbers[i];
		}
		if(numbers[i] > max)
		{
			max = numbers[i];
		}
	}
}

int main(){
	
	
	int numbers[4] ; // = {3, 5, 6, 7};
	for(int i=0; i<4; i++)
	{
		cout<<"\n Enter array element for index "<<i<<": ";
		cin>>numbers[i];	
	}
	
	cout<<"\n Min is: "<<getMin(numbers, 4)<<endl;
	cout<<"\n Max is: "<<getMax(numbers, 4)<<endl;
	int min = numbers[0];
	int max = numbers[0];
	
	getMinAndMax(numbers, 4, &min, &max);   // the values are returned through pointers 
	cout<<"\n Min: "<<min<<endl;
	cout<<"\n Max: "<<max<<endl;
	
	getMinAndMax2(numbers, 4, min, max);   // the values are returned through pointers 2
	cout<<"\n Min: "<<min<<endl;
	cout<<"\n Max: "<<max<<endl;
	
	return 0;
}
