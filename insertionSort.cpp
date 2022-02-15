#include <iostream>

using namespace std;

void insertionSort(int arr[])
{
	int key=0;
	int j=0;
	
	for(int i=1; i<5; ++i)
	{	
		key = arr[i];
		j = i-1;
		
		while(j>=0 && arr[j] > key)		// move elements of arr[0.. i-1] that are greater than 
		{								// key, to one postion ahead of their current position.
			arr[j+1] = arr[j];
			j = j-1;
		}
		
		arr[j+1] = key;
	}
	
	
}

int main()
{
	
	int arr[5] = {12, 11, 13, 5, 6 }; 
	
	cout<<"\n Unsorted Array elements are: ";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	insertionSort(arr);
	
	cout<<"\n\n\n Sorted Array elements are: ";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
