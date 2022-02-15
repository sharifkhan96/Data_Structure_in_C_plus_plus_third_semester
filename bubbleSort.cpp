#include <iostream>

using namespace std;

void bubbleSort(int arr[], int Size)
{
	
	for(int i=0; i<Size; i++)
	{
		
		for(int j =0; j<(Size-i-1); j++)
		{
			
			if(arr[j] > arr[j+1])
			{
				 int temp = arr[j];
				 arr[j] = arr[j+1];
				 arr[j+1] = temp;
			}
			
		}
		
	}
	
}

int main()
{
	int const Size = 5;
	int arr[Size] = {12, 11, 66, 13, 6 }; 
	
	cout<<"\n Unsorted Array elements are: ";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	bubbleSort(arr, Size);
	
	cout<<"\n\n\n Sorted Array elements are: ";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
